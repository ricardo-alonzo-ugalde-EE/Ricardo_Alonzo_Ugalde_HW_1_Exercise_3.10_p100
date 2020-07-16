/*
implementation file
*/
#include "invoice.h" // header file in local directory
#include <iostream> // header in standard library

using namespace std; // avoid having to qualify every mention of cout, cin, endl, etc.

/*
// implementataion of the function testyTest from invoice.h to testy test things
void invoice::testyTest() 
{
	cout << "Testing, testing. This is the testy test." << endl;
}
*/

/*
invoice class constructor because it returns nothing and its named just like th class.
*/
invoice::invoice(string itemPartNumber, string itemPartDescription, int itemQuantity, double itemPrice)
{
	part_number = itemPartNumber;
	part_description = itemPartDescription;
	quantity = itemQuantity;
	price = itemPrice;
	
}

/*
get implementation for invoice that sets quantitiy and price to initial zero
and returns quantity * price
*/
double invoice::getInvoice()
{
	if (quantity < 0)
	{
		quantity = 0;
	}
	else if (price < 0)
	{
		price = 0;
	}

	return quantity * price;
}

/*
set function inplementation for part number
*/
void invoice::setPartNumber(string itemPartNumber)
{
	part_number = itemPartNumber;
}

/*
get function inplementation for get part number
*/
string invoice::getPartNumber()
{
	return part_number;
}

/*
set function inplementation for part description
*/
void invoice::setPartDescription(string itemPartDescription)
{
	part_description = itemPartDescription;
}

/*
get function inplementation for part description
*/
string invoice::getPartDesription()
{
	return part_description;
}

/*
set function inplementation for item quantity
*/
void invoice::setItemQuantity(int itemQuantity)
{
	quantity = itemQuantity;
}

/*
get function inplementation for item quantity 
*/
int invoice::getItemQuantity()
{
	return quantity;
}

/*
set function inplementation for item proce
*/
void invoice::setItemPrice(double itemPrice)
{
	price = itemPrice;
}

/*
get function inplementation for item price 
*/
double invoice::getItemPrice()
{
	return price;
}