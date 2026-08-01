 #include "CryptoLayer.h"
std::string CryptoLayer::encrypt(const EyeState& state)
{
// simplified encrypted
return "ENCRYPTED"
std::to_string(state.pupilSize)+":"+
std::to_string(state.irisSignature);
}
bool CryptoLayer::verify(const std::string&encrypted)
{
    return encrypted.rfind("ENCRYPTED:",0)==0;
}