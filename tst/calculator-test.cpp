#include "gtest/gtest.h"
#include "../src/interface.cpp"
#include "../src/display.cpp"
#include "../src/controller.cpp"


TEST(TestOfDisplay, showInterfacefunctionShouldPrintInterface) {
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
TEST(TestOfController,functionTestingOpcionNumberFromUser)
{
    Controller controller;
    EXPECT_EQ(controller.isCorrectVariable(0),false);
    EXPECT_EQ(controller.isCorrectVariable(5),false);
    EXPECT_EQ(controller.isCorrectVariable(3),true);
    EXPECT_EQ(controller.isCorrectVariable(2.5),false);
}
TEST(TestOfInterface,getOpctionFunctionShouldCallController)
{
   // EXPECT_EQ(interface.getOption(4),)
}

