#include "ThreatModelEngine.h"
#include <cmath>

bool ThreatModelEngine::isAnomaly(const EyeState& current, const EyeState& baseline)
{
    float diffPupil = std::abs(current.pupilSize-baseline pupilSize);
    float diffSignature = std::abs(current.irisSignature-baseline.irisSignature);
    return (diffPupil > 0.4f|| diffIris > 0.1f);
}