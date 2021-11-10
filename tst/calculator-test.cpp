#include "gtest/gtest.h"
#include "../src/display.cpp"
#include "../src/controller.cpp"
#include "../src/plus.cpp"

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
    Controller ControllerClass;
    //EXPECT_EQ(Controller.selectFunction(1),);
}
TEST(TestOfDisplay, ShowSpaceNNumberShouldReturnNumberSameAsNumberGivenToFunction)
{
    Display DisplayClass;
    EXPECT_EQ(DisplayClass.showSpaceForNNumber(3),"Podaj 3. liczbe:");
    EXPECT_EQ(DisplayClass.showSpaceForNNumber(0),"Podaj 0. liczbe:");
    EXPECT_EQ(DisplayClass.showSpaceForNNumber(20),"Podaj 20. liczbe:");
}
TEST(TestOfInterface,SelectOpctionFunctionShouldCallController)
{
    Controller ControllerClsss;
    //EXPECT_EQ(controller.selectFunction(1)
}
TEST(TestOfPlusFunctionInPlusClass,PlusShouldReturnCorrectVariable)
{
    Plus PlusClass;
    EXPECT_EQ(PlusClass.plus(2,3),5);
    EXPECT_EQ(PlusClass.plus(3.4,3),6.4);
    EXPECT_EQ(PlusClass.plus(2,3.5),5.5);
    EXPECT_EQ(PlusClass.plus(-4,1),-3);
    EXPECT_EQ(PlusClass.plus(-2,-3),-5);
}
TEST(TestOfIsValidNumberInPlusClass,IsValidNumberShouldCheckNumbersForPlusOperation)
{
    
}