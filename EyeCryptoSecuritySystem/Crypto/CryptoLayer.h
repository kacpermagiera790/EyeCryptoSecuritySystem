#pragma once 
#include <string>
#include ".. /medtech/EyeSensor.h"

class CryptoLayer
{
    public:
    std::string encrypt(const EyeState& state);
    bool::verify(const std::string& encrypted); 
};