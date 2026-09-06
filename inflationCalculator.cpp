/*James Springer
inflationCalculator
This program will receive the inflation percentage as input and output how much $1000 will have depreciated as a result
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    system("cls");
	int annualInflationRate, years = 1, MAX_YEARS = 10;
	double moneyDeprciation, moneyWorth = 1000.00;
	cout << "Enter the annual inflation rate (as a percentage between 1 and 10): ";
	cin >> annualInflationRate;
	while (annualInflationRate < 1 || annualInflationRate > 10)			// Loop used to validate inflation rate input 
	{
		cout << "Invalid input. Please enter a percentage between 1 and 10: ";
		cin >> annualInflationRate;
	}
	while (years <= MAX_YEARS)
	{
		cout << fixed << showpoint << setprecision(2);
		moneyDeprciation = (moneyWorth *  1 / (1 + (annualInflationRate / 100.0)));
		moneyWorth = moneyDeprciation;
		cout << "Year " << right << setw(2) << years << setw(40) << "$1000 will be worth $" << moneyDeprciation << endl;
		years++;
	}
	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
