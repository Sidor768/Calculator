#include "gtest/gtest.h"
#include "../src/interface.cpp"

TEST(TestOfInterfejs, showInterfacefunctionShouldPrintInterface) {
    Interface Inter ;
    EXPECT_EQ(Inter.showInterface(),
    "Witaj, to sa nastepujace opcje:\n\n"
    "\t1.Dodawanie\n"
    "\t2.Odejmowanie\n"
    "\t3.Mnozenie\n"
    "\t4.Dzielenie\n\n"
    "Wybieram:"
    );
}
TEST(TestOfInterfejs,functionTestingOpcionNumberFromUser)
{
    EXPECT_EQ(isCorrectVariable(0),false);
    EXPECT_EQ(isCorrectVariable(5),false);
    EXPECT_EQ(isCorrectVariable(3),true);
    EXPECT_EQ(isCorrectVariable(2.5),false);
}

