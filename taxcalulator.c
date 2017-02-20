#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char UserInput[256];

// dollar input
int Dollar(int DollarAmount) 
{

	//input for dollar amount
	printf("Please input your dollar amount: $");
	if(fgets(UserInput, sizeof(UserInput), stdin)) {
		if(1 == sscanf(UserInput, "%d", &DollarAmount)) {
		}
	}

	return DollarAmount;



}
//tax input
int Tax(int TaxAmount) 
{

	//input for tax amount 
	printf("Please input your tax amount: %");
	if(fgets(UserInput, sizeof(UserInput), stdin)) {
		if(1 == sscanf(UserInput, "%d", &TaxAmount)) {
		}
	}



	return TaxAmount;

}


int main (int argc, char *argv[]) 
{


	float DollarAmount;
	float  TaxAmount;

	// total before tax
	float SubTotal = Dollar(DollarAmount);
	//convert to floating point  
	float Tax_Amount = Tax(TaxAmount);

	 //The tax amount
        printf("The Tax amount is: %.2f%\n", Tax_Amount);


	// Convert tax to decimal
	Tax_Amount = Tax_Amount / 100.0;

	float Decimal = SubTotal  * Tax_Amount;

	//Calculate the grand total tax  plus dollar amount
	float GrandTotal = Decimal + SubTotal;


	
	//display the subtotal
	printf("The Subtotal is: $%.2f\n", SubTotal);
	
	//display the GrandTotal
	printf("The GrandTotal is : $%.2f\n", GrandTotal);


	return 0;
}

