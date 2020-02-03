#include "gtest/gtest.h"
#include "Automata.h"

TEST(lab4, test1)
{
    Automata hotdrinks;
	
	hotdrinks.on();
	hotdrinks.coin(10);
	unsigned int current_balance = hotdrinks.coin(15);
	unsigned int expected = 25;
    EXPECT_EQ(expected, current_balance);
}

