#include "plus.hpp"

template<typename T,typename T1>
auto Plus::plus(T first,T1 second)
{
    return first+second;
}

template<typename T>
bool Plus::isValidNumber(T number)
{
    if(std::isalpha(number))return false;
    if(std::isnan(number))return false;
    return true;
}
