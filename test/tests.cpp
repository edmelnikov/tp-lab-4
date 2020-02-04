#include "gtest/gtest.h"
#include "Automata.h"

TEST(lab4, balance_test1) 
{
    Automata hotdrinks;
	
	hotdrinks.on();
	hotdrinks.coin(10);
	unsigned int current_balance = hotdrinks.coin(15);
	unsigned int expected = 25;
    EXPECT_EQ(expected, current_balance);
}

TEST(lab4, balance_test2) 
{
    Automata hotdrinks;
	
	hotdrinks.on();
	hotdrinks.coin(10);
	hotdrinks.coin(15);
	hotdrinks.choice(2);
	unsigned int current_balance = hotdrinks.getBalance();
	unsigned int expected = 5;
    EXPECT_EQ(expected, current_balance);
}

TEST(lab4, state_test1) 
{
	Automata hotdrinks;	
	hotdrinks.on();
	std::string current_state = hotdrinks.getState();
	std::string expected = "WAIT";
	EXPECT_EQ(expected, current_state);	
}



