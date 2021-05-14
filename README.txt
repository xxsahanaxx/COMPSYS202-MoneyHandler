We are interested in modeling some very basic operations on money. Each money amount has a dollar and a cents component. To be a valid money amount, we are requiring that each of these values is a natural number (i.e. 0, 1, 2, 3, ...). With a valid money amount, we can calculate the total amount of cents. We can also add more dollars and/or cents to it, but we have to be careful with subtracting dollars/cents to ensure it doesn’t become invalid. Once we have two valid money amounts, we add them together or subtract one from another(assuming we don’t invalidate one of them). We can also split two money amounts, such that the two amounts become equal to each other.


Makefile: This Makefile will allow you to build and run your project. You can either run 	  your project via Eclipse (seethe course help videos to help you), or you can use 	  the command line. Ultimately, once you finish your project and before you 		  submit, you will want to test your project using the command line in the ECSE 	  Ubuntu machines as this is how your project will be marked. The main commands 	  relevant to this file are:
		make  	   Builds the money_test executable
		make run   Builds the money_test executable and runs it
		make all   This is needed by Eclipse, as it looks for a target named all
		make clean Removes all executable files from the working directory

test.cpp: This file contains some tests to make sure you have implemented some parts of 	  the assignment correctly. It does not contain tests for the whole assignment, so 	  do not assume that because all of the tests pass you will pass the assignment! 	  You are encouraged to add more tests for parts of the assignment not already 	 	  covered, but the tests will not be marked at all. To run all of the tests 		  execute the command : make run  from a command-line terminal, or through 		  Eclipse. You are also welcome to share your tests on Canvas or Piazza if you 		  like (but obviously do not share any of your other files!)

basics.h: Declares some very basic methods used in the first part of the assignment. You 	  may add to this file if you want to, but do not change the existing 			  declarations

basics.cpp: Defines the basic methods that were declared in basics.h. You will see stubbed 	    method implementations, which you will be completing in the first part of this 	    assignment.

Money.h: Declares a Money class, used for the second and latter parts of the assignment. 	 You will need to modify this file(e.g. to declare instance variables to use for 	 the Money class), but do not change the existing method 				 declarations.

Money.cpp: Defines the Money class that was declared in Money.h. You will see stubbed 		   method implementations, which you will be completing in the second and latter 	   parts of this assignment.