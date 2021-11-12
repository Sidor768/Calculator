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
TEST(TestOfDisplay, ShowAskingNNumberShouldReturnNumberSameAsNumberGivenToFunction)
{
    Display DisplayClass;
    EXPECT_EQ(DisplayClass.showAskingForNNumber(3),"Podaj 3. liczbe:");
    EXPECT_EQ(DisplayClass.showAskingForNNumber(0),"Podaj 0. liczbe:");
    EXPECT_EQ(DisplayClass.showAskingForNNumber(20),"Podaj 20. liczbe:");
}
TEST(TestOfInterface,SelectOpctionFunctionShouldCallController)
{
    //Controller ControllerClsss;
    //Plus PlusClass;
    //Display DisplayClass;
    //EXPECT_EQ(controller.selectFunction(1,DisplayClass.showAskingForNNumber);how to test calling function xD? 
}
TEST(TestOfPlusFunctionInPlusClass,PlusShouldReturnCorrectVariable)
{
    Plus PlusClass;
    EXPECT_EQ(PlusClass.plus(2,3),5);
    EXPECT_EQ(PlusClass.plus(3.4,3),6.4);
    EXPECT_EQ(PlusClass.plus(2,3.5),5.5);
    EXPECT_EQ(PlusClass.plus(-4,1),-3);
    EXPECT_EQ(PlusClass.plus(-2,-3),-5);
    EXPECT_EQ(PlusClass.plus(0.3333,1),1.3333);
}
TEST(TestOfIsValidNumberInPlusClass,IsValidNumberShouldCheckNumbersForPlusOperation)
{
    Plus PlusClass;
    EXPECT_EQ(PlusClass.isValidNumber('d'),false);
    EXPECT_EQ(PlusClass.isValidNumber(3),true);
    EXPECT_EQ(PlusClass.isValidNumber(7.12),true);
    EXPECT_EQ(PlusClass.isValidNumber(0),true);
    EXPECT_EQ(PlusClass.isValidNumber('0'),true);
    EXPECT_EQ(PlusClass.isValidNumber('+'),true);
    EXPECT_EQ(PlusClass.isValidNumber('.'),true);
    EXPECT_EQ(PlusClass.isValidNumber(1/3),true);
}