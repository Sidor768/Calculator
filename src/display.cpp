#include "display.hpp"

std::string Display::showInterface()
{
    return 
    "Witaj, to sa nastepujace opcje:\n\n"
    "\t1.Dodawanie\n"
    "\t2.Odejmowanie\n"
    "\t3.Mnozenie\n"
    "\t4.Dzielenie\n\n"
    "Wybieram:";
}
std::string Display::showAskingForNNumber(int numberOfDate)
{
    std::string numberOfDateInString = std::to_string(numberOfDate);
    return "Podaj "+numberOfDateInString+". liczbe:";
}