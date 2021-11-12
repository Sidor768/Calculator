#pragma once
#include <cmath>
#include <cctype>

class Plus
{
    public:
    template<typename T,typename T1>
    auto plus(T first,T1 second);
    template<typename T>
    bool isValidNumber(T);
};