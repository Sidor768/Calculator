#include "controller.hpp"
#include "display.hpp"

bool Controller::selectFunction(int userOption)
{
    Display display;
    switch (userOption)
    {
    case 1:
    //display.showAskingForNNumber(2);
        return true;
        break;
    case 2:
        return true;
        break;

    default:
        return false;
        break;
    }
}
