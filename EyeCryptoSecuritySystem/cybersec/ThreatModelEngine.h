#pragma once
#include ".. /medtech/EyeSensor.h"
class ThreatModelEngine
{
    public:
    bool isAnomaly(const EyeState& current, const EyeState& baseline);
};