#include <cctype>
#include "plus.hpp"

template<typename T,typename T1>
auto Plus::plus(T First,T1 Second)
{
    return First+Second;
}
template<typename T>
bool Plus::isValidNumber(T number)
{
    if(isalpha(number))
        return false;
    if(isxdigit(number))
    {
        return true;
    }
    return false;
}
