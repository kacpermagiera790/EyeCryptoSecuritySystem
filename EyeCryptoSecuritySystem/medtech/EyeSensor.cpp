#include "EyeSensor.h"

EyeState EyeSensor::read()
{
    EyeState s{};
    s.pupilSize = 3.4f;
    s.irisSignature = 0.85f;
    return s;
}