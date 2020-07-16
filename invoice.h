/*
invoice class function prototypes and variable declarations
keep headers free of implementations
keep constructors in .cpp.
*/
#include <iostream>
using namespace std;


class invoice
{
public: // test function declaration
	void testyTest(); 

public: // private variable declarations
	string part_number;
	string part_description;
	int quantity;
	double price;

public: // class constructor returns nothing
	invoice(string itemPartNumber, string partDescription, int itemQuantity, double itemPrice);

public:
	double getInvoice();
	
public: // set function declaration for part number
	void setPartNumber(string itemPartNumber);

public:// set function declaration for part number
	string getPartNumber();

public: // set function declaration for part description
	void setPartDescription(string itemPartDescription);
public:
	string getPartDesription();

public: // set function declaration for item quantitiy
	void setItemQuantity(int itemQuantity);

public: // get function declaration for item quantitiy
	int getItemQuantity();

public:  // set function declaration for item price
	void setItemPrice(double itemPrice);

public: // get function declaration for item price
	double getItemPrice();


};
