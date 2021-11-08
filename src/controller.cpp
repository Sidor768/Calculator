#include "controller.hpp"

    bool Controller::isCorrectVariable(double userOption)
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