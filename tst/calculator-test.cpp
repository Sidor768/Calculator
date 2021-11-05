#include "gtest/gtest.h"
#include "../src/interface.hpp"

TEST(TestOfInterfejs, showInterfacefunctionShouldPrintInterface) {
    EXPECT_EQ(showInterace(),
    "Witaj, to sa nastepujace opcje:\n\n"
    "\t1.Dodawanie\n"
    "\t2.Odejmowanie\n"
    "\t3.Mnozenie\n"
    "\t4.Dzielenie\n\n"
    "Wybieram:"
    );
}

