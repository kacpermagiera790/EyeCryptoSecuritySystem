#pragma once
struct EyeState
{
    float pupilSize;
    float irisSignature;
};

class EyeSensor{
    public:
    EyeState read();
};