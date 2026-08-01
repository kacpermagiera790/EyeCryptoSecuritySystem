# EyeCryptoSecuritySystem    project Autor: Kacper — an aspiring C++ embedded developer and future architect of critical systems.
A modern, modular 3-layer security system:   EyeSensor → CryptoLayer → ThreatModelEngine   The project demonstrates the integration of biometrics, encryption, and real-time anomaly detection.
The system demonstrates the concept of multi-layered security based on ocular biometrics.
The project consists of three main modules:

EyeSensor — generates biometric data (pupilSize, irisSignature):
-Returns an EyeState structure

-Simulates an eye sensor reading

-Data: pupilSize, irisSignature

CryptoLayer — encrypts data and verifies integrityL:
-Encryption and integrity verification layer.

-encrypt(EyeState) — returns an encrypted string

-verify(string) — checks data validity (integrity mock)

ThreatModelEngine — detects anomalies relative to a baseline:
-Cybersecurity module.

-isAnomaly(current, baseline)

-Detects anomalies based on differences in pupilSize and irisSignature.

-Detection thresholds set as mock values ​​(0.4f / 0.8f).


The components are integrated within a main loop that simulates the security system's operation in real time.

Project objective:
The project is educational in nature and demonstrates:

modular system architecture,

integration of security layers,

mock encryption,

mock anomaly detection,

real-time data flow.

It serves as an ideal foundation for further development in embedded systems, medtech, cybersecurity, and R&D.




