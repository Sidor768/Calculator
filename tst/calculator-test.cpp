#include "gtest/gtest.h"
#include "../src/display.cpp"
#include "../src/controller.cpp"


TEST(TestOfDisplay, ShowInterfacefunctionShouldPrintInterface) {
    Display DisplayClass;
    EXPECT_EQ(DisplayClass.showInterface(),
    "Witaj, to sa nastepujace opcje:\n\n"
    "\t1.Dodawanie\n"
    "\t2.Odejmowanie\n"
    "\t3.Mnozenie\n"
    "\t4.Dzielenie\n\n"
    "Wybieram:"
    );
}
TEST(TestOfDisplay, showChosenOptionInformationShouldDisplayCorrectInformation) {
    Display DisplayClass;
    Controller Controller;
    //EXPECT_EQ(Controller.selectFunction(1),);
}
TEST(TestOfDisplay, ShowSpaceNNumberShouldReturnNumberSameAsNumberGivenToFunction)
{
    Display Display;
    EXPECT_EQ(Display.showSpaceForNNumber(3),"Podaj 3. liczbe:");
    EXPECT_EQ(Display.showSpaceForNNumber(0),"Podaj 0. liczbe:");
    EXPECT_EQ(Display.showSpaceForNNumber(20),"Podaj 20. liczbe:");
}
TEST(TestOfInterface,SelectOpctionFunctionShouldCallController)
{
    Controller controller;
    //EXPECT_EQ(controller.selectFunction(1)
}