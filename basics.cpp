
#include "basics.h"



// TASK 1
// Basic functions

int totalCents(int dollars, int cents) {
	/* The purpose of this function is to convert the 'dollars' components to
	 * 'cents'. It is essential to check for the 'invalid' condition. */
	if(dollars < 0 || cents < 0)
		cents = -1;
	else
		cents = cents + (dollars * 100);
	return cents;
}

int sumAsCents(int moneyOneDollars, int moneyOneCents, int moneyTwoDollars, int moneyTwoCents) {
	/* The purpose of this function is to add 'moneyOneDollars' and 'moneyTwoDollars' together
	 * and add moneyOneCents with moneyTwoCents. */
	int sumCents;
	if(moneyOneDollars < 0 || moneyTwoDollars < 0 || moneyOneCents < 0 || moneyTwoCents < 0)
		sumCents = -1;
	else
		sumCents = (moneyOneDollars + moneyTwoDollars) * 100 + (moneyOneCents+moneyTwoCents);
	return sumCents;
}

int split(int moneyOneDollars, int moneyOneCents, int moneyTwoDollars, int moneyTwoCents) {
	/* This function splits the total money so that 'entity 1' and 'entity 2' get equal amounts
	 * of money ie. there is equal distribution.
	 * Here, first the cents are summed and then split into 2 quantities. */
	int splitCents = (sumAsCents(moneyOneDollars, moneyOneCents, moneyTwoDollars, moneyTwoCents))/2;
	if(moneyOneDollars < 0 || moneyTwoDollars < 0 || moneyOneCents < 0 || moneyTwoCents < 0)
		splitCents = -1;
	return splitCents;
}

