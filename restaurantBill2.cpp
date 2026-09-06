/*James Springer
restaurantBill.cpp
The purpose of this program is to calculate the
grand total of a meal
Inputs: price of meal
Outputs: price of meal, grand total, tax, and tip amount
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double mealPrice, grandTotal, mealTax, mealTip;
	const double TAX_RATE = 0.0825;
	const double TIP = 0.18;

	cout << "How much did your meal cost?\n";
	cin >> mealPrice;
	mealTip = mealPrice * TIP;
	mealTax = mealPrice * TAX_RATE;
	grandTotal = mealPrice + mealTip + mealTax;
	cout << "The meal cost $ " << mealPrice << "." << endl;
	cout << fixed << setprecision(2) << "The tip is $ "
		<< mealTip << "." << endl;
	cout << fixed << "The amount taxed is $ " << mealTax << "." << endl;
	cout << fixed << "The total amount that was spent was $ " 
		<< grandTotal << "." << endl;

	return 0;
}