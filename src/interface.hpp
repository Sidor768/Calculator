#pragma once


class Interface
{
    public:
    std::string showInterface();
};

bool isCorrectVariable(double userOption)
{
    if(
        userOption==1 ||
        userOption==2 ||
        userOption==3 ||
        userOption==4 
    )
    return true;
    return false;
}
