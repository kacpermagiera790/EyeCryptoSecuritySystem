#include <iosteam>
#include "medtech/EyeSensor.h"
#include "Crypto/CryptoLayer.h"
#include "cybersec/ThreatModelEngine.h"

int main()
{
    EyeSensor sensor;
    CryptoLayer crypto;
    ThreatModelEngine threat;

    EyeState baseline {3.4f, 0.85f}

    while(true)
    {
        EyeState current = sensor.read();
        std::string enc = crypto.encrypt(current);
        
        if (!crypto.verify(enc))
        {
            std::cout<< "BŁĄD INTEGRALNOŚCI"<< std:: endl;
        }
        if (threat.isAnomaly(current, baseline))
        {
            std::cout<<"ANOMALIA- BLOKADA SYSTEMU";
        }
        else{std::cout<<"OK- DOSTĘP";}
    }
    std:: this_thread::sleep_for(std::chrono::milliseconds(500));
}