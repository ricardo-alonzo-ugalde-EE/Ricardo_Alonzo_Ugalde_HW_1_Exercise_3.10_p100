/*
Jonathan S. Weissman
CIS 554-M401 Object Oriented Programming in C++
Syracuse University
HW #1 - Exercise 3.10 p100
7/16/20
This program creates an invoice for critical compoments 
any serious time displacement enthusiast must have.  

*/

#include "invoice.h"
#include <iostream>
using namespace std;


int main()
{
	
	/*
	This little driver program takes in item price, quantity, number, and description.
	It then it multiplies the quantitiy times the price and prints out the total to the console
	*/

	cout << "              ----Hello There! Welcome to Statler Electronics of Hill Valley, CA!-----" << endl;
	invoice invoice_1("F1uX-Cap-A_C-T0r", "Time Displacement Device(s)", 11.5, 1955);
//	invoice_1.testyTest();
	cout << "\n\nInvoice 1 contains "  << invoice_1.getItemQuantity();
	cout <<" " << invoice_1.getPartDesription() << ". " << endl;
	cout << "\nThe total cost for your " << invoice_1.getPartNumber() << " " << invoice_1.getPartDesription();
	cout << " is " << invoice_1.getInvoice() << " in 2015 dollars please.\n\n\n";
	

	return 0;
}