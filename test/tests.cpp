#include "gtest/gtest.h"
#include "Automata.h"

TEST(lab4, balance_test1) //Testing balance sum
{Am I even doing it right
    Automata hotdrinks;
	
	hotdrinks.on();
	hotdrinks.coin(10);
	unsigned int current_balance = hotdrinks.coin(15);
	unsigned int expected = 25;
    EXPECT_EQ(expected, current_balance);
}

TEST(lab4, balance_test2) //Testing amount of money after cooking
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

TEST(lab4, state_test1) //Testing the state after turning on
{
	Automata hotdrinks;	
	hotdrinks.on();
	std::string current_state = getState();
	str::string expected = "WAIT";
	EXPECT_EQ(expected, current_state);	
}

TEST(lab4, state_test2) { //testing the state after depositing money 
	Automata hotdrinks;	
	hotdrinks.on();
	hotdrinks.coin(15);
	std::string current_state = hotdrinks.getState();
	sdt::string expected = "ACCEPT";
	EXPECT_EQ(expected, current_state);
	
}

TEST(lab4, state_test3){ //testing cancel() method 
	Automata hotdrinks;	
	hotdrinks.on();
	hotdrinks.coin(15);
	hotdrinks.cancel();
	std::string current_state = hotdrinks.getState();
	sdt::string expected = "WAIT";
	EXPECT_EQ(expected, current_state);
	
}

//Am I even doing this right?

TEST(lab4, state_test4){ //testing the case when there is not enough money
	Automata hotdrinks;	
	hotdrinks.on();
	hotdrinks.printMenu();
	hotdrinks.coin(15);
	hotdrinks.coin(10);
	hotdrinks.choice(7);
	std::string current_state = hotdrinks.getState();
	sdt::string expected = "WAIT";
	EXPECT_EQ(expected, current_state);
}

//Hmm what else should I test... It's 1 AM btw

