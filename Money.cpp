
#include "Money.h"



// TASK 2
// Implementing the 'money' class

Money::Money() {
	/* If an object is declared by default, its components should be initialised to zeroes. */
	dollars = 0;
	cents = 0;
}

Money::Money(int dollars, int cents) {
	/* If the 'dollars' or the 'cents' that are entered are negative values, they should be
	 * initialised to zero by default. In all other cases, the inputs are valid and can be
	 * assigned to the object's 'dollars' and 'cents' components. */
	if(dollars < 0)
		this->dollars = 0;
	else
		this->dollars= dollars;
	if(cents < 0)
		this->cents = 0;
	else
		this->cents = cents;

	/* For wrapping the 'cents' value, a condition must be checked ie. if the 'cents' value is
	 * greater than 99. */
	if(this->cents > 99)
	{
		this->dollars = this->dollars + (this->cents / 100);
		this->cents = this->cents % 100;
	}
}

int Money::getDollars() const {
	/* This function just returns the 'dollars' present in the declared object. */
	return dollars;
}

int Money::getCents() const {
	/* This function just returns the 'dollars' present in the declared object. */
	return cents;
}

int Money::asCents() const {
	/* The purpose of this function is to convert 'dollars' and 'cents' into 'cents' and add them
	 * up to result in a whole number represented in cents. */
	return (dollars * 100 + cents);
}



// TASK 3
// Pass by value: functions of a class

void Money::addDollars(int dollars) {
	/* When a positive number of dollars is 'added' to the existing 'dollars', the unit 'dollars'
	 * must be incremented by that many units. */
    if(dollars > 0)
    	this->dollars = this->dollars + dollars;
}

void Money::addCents(int cents) {
	/* It is easiest to convert everything to cents and then operate on it. */
	int tempVar = asCents();

	/* We check if the value entered is 'valid' ie. non-negative. */
	if(cents > 0)
	{
		tempVar = tempVar + cents;
		this->dollars = tempVar / 100;
		this->cents = tempVar % 100;
	}
}

void Money::subtractDollars(int dollars) {
	/* For subtraction to happen, the conditions are that 'dollars' should not be greater than the
	 * object's 'dollar' component AND 'dollars' must actually be a valid number (greater than 0). */
	if(dollars <= this->dollars && dollars >= 0)
		this->dollars = this->dollars - dollars;
}

void Money::subtractCents(int cents) {
	/* Again, to subtract cents, we convert the amounts all to cents and then operate on those
	 * values. */
	int tempVar = asCents();

	/* Checking for invalid condition: */
	if((cents > 0 && cents <= tempVar))
	{
		tempVar = tempVar - cents;
		this->dollars = tempVar / 100;
		this->cents = tempVar % 100;
	}
}



// TASK 4
// Pass by reference: functions of a class

void Money::add(const Money &other) {
	/* 'Other' has two components 'dollars' and 'cents' like every other object of the Money class.
	 * Converting them into 'cents' makes further computation simpler. */
	int tempVar = other.asCents();

	/* Using a function 'addCents' that is already defined, it is possible to add the two 'Money'
	object 'cent' values together. The 'this' pointer ensures which object is being referred to
	when operated on. */
	this->addCents(tempVar);
}

void Money::subtract(const Money &other) {
	/* The 'subtract' function must follow the same guidelines as the 'subtractCents' function so
	 * reusing that function would not be a bad idea. The only requirement would be for the 'other'
	 * object's components to be all converted to 'cents'. */
	int tempVar = other.asCents();
	this->subtractCents(tempVar);
}

void Money::split(Money &other) {
	/* The 'split' function has to ensure both the current object and the 'other' object have equal
	 * amounts of money stored in them. Again, it is easier to convert everything into 'cents'
	 * first, and store the sum in a temporary variable. */
	int tempVar = asCents() + other.asCents();
	tempVar = tempVar / 2;
	this->cents = tempVar % 100;
	other.cents = this->cents;
	this->dollars = tempVar / 100;
	other.dollars = this->dollars;
}

Money::~Money() {
	//TODO: implement
}
