/*James Springer
payCheckCalculator
This program will calculate a simple paycheck based on user input.
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int choice;
	void paycheck();								// Function prototype for paycheck calculation
	cout << "PAYCHECK CALCULATION PROGRAM" << endl;
	cout << "----------------------------" << endl;
	cout << endl;
	cout << "MAIN MENU" << endl;
	cout << endl;
	cout << "1. Calculate Paycheck" << endl;
	cout << endl;
	cout << "0. Exit" << endl;
	cout << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		paycheck();									// Call function to calculate paycheck
		break;
	case 0:
		cout << "Exiting program." << endl;
		break;
	default:
		cout << "Invalid choice. Please try again." << endl;
		break;
	}
	system("pause");
	return 0;
}

void paycheck()
{
	double grossPay, netPay, fedTax, socSec, medicare;
	string filingStatus;
	string payPeriod;
	double federalTaxCalc(string, string, double);
	cout << "CALCULATE SIMPLE PAYCHECK" << endl;
	cout << endl;
	cout << endl;
	cout << "Enter your gross pay: ";
	cin >> grossPay;
	cout << endl;
	cout << endl;
	cout << "CHOOSE ONE OF THE FOLLOWING PAY PERIODS. THEY ARE CASE SENSITIVE." << endl;
	cout << setw(4) << left << "BW => BiWeekly (Every 2 Weeks)" << endl;
	cout << setw(4) << left << "BM => SemiMonthly (Twice a Month)" << endl;
	cout << setw(4) << left << "MN => Monthly (Once a Month)" << endl;
	cout << "Enter the abbreviation of the pay period." << endl;
	cin >> payPeriod;
	while (payPeriod != "BW" && payPeriod != "BM" && payPeriod != "MN")					// Validate pay period input
	{
		cout << "Invalid pay period. Please try again." << endl;
		cin >> payPeriod;
	}
	cout << endl;
	cout << "CHOOSE ONE OF THE FOLLOWING FILING STATUSES. THEY ARE CASE SENSITIVE." << endl;
	cout << setw(2) << right << "SEP => Separate (Not Joint)" << endl;
	cout << setw(2) << right << "JNT => Joint (with someone else)" << endl;
	cin >> filingStatus;
	while (filingStatus != "SEP" && filingStatus != "JNT")									// Validate filing status input
	{
		cout << "Invalid filing status. Please try again." << endl;
		cin >> filingStatus;
	}
	fedTax = federalTaxCalc(filingStatus, payPeriod, grossPay);
	socSec = grossPay * 0.062;																// Calculate Social Security tax
	medicare = grossPay * 0.0145;															// Calculate Medicare tax
	netPay = grossPay - fedTax - socSec - medicare;
	cout << endl;
	cout << "Pay stub" << endl;
	cout << "----------------------------" << endl;
	cout << "Gross Pay: $" << fixed << setprecision(2) << grossPay << endl;
	cout << "Federal Tax: $" << fixed << setprecision(2) << fedTax << endl;
	cout << "Social Security: $" << fixed << setprecision(2) << socSec << endl;
	cout << "Medicare: $" << fixed << setprecision(2) << medicare << endl;
	cout << "----------------------------" << endl;
	cout << "Net Pay: $" << fixed << setprecision(2) << netPay << endl;
}
	double federalTaxCalc(string filingStatus, string payPeriod, double grossPay)			// Function to calculate federal tax based on filing status and gross pay
		{
			double fedTax;
			if (filingStatus == "JNT") 
			{
				if (payPeriod == "BW")
				{
					if (grossPay <= 1065)
					{
						fedTax = 0;
					}
					else if (grossPay <= 1912)
					{
						fedTax = 0 + (0.10 * (grossPay - 1065));
					}
					else if (grossPay <= 4506)
					{
						fedTax = 84.70 + (0.12 * (grossPay - 1912));
					}
					else if (grossPay <= 8402)
					{
						fedTax = 395.98 + (0.22 * (grossPay - 4506));
					}
					else if (grossPay <= 15073)
					{
						fedTax = 1253.10 + (0.24 * (grossPay - 8402));
					}
					else if (grossPay <= 18854)
					{
						fedTax = 2854.14 + (0.32 * (grossPay - 15073));
					}
					else if (grossPay <= 27748)
					{
						fedTax = 4064.06 + (0.35 * (grossPay - 18854));
					}
					else
					{
						fedTax = 7176.96 + (0.37 * (grossPay - 27748));
					}
				}
				else if (payPeriod == "BM")
				{
					if (grossPay <= 1154)
					{
						fedTax = 0;
					}
					else if (grossPay <= 2071)
					{
						fedTax = 0 + (0.10 * (grossPay - 1154));
					}
					else if (grossPay <= 4881)
					{
						fedTax = 91.70 + (0.12 * (grossPay - 2071));
					}
					else if (grossPay <= 9102)
					{
						fedTax = 408.38 + (0.22 * (grossPay - 4881));
					}
					else if (grossPay <= 16329)
					{
						fedTax = 1357.52 + (0.24 * (grossPay - 9102));
					}
					else if (grossPay <= 20425)
					{
						fedTax = 3092.00 + (0.32 * (grossPay - 16329));
					}
					else if (grossPay <= 30060)
					{
						fedTax = 4402.42 + (0.35 * (grossPay - 20425));
					}
					else
					{
						fedTax = 7774.97 + (0.37 * (grossPay - 30060));
					}
				}
				else
				{
					if (grossPay <= 2308)
					{
						fedTax = 0;
					}
					else if (grossPay <= 4142)
					{
						fedTax = 0 + (0.10 * (grossPay - 2308));
					}
					else if (grossPay <= 9763)
					{
						fedTax = 183.40 + (0.12 * (grossPay - 4142));
					}
					else if (grossPay <= 18204)
					{
						fedTax = 857.92 + (0.22 * (grossPay - 9763));
					}
					else if (grossPay <= 32658)
					{
						fedTax = 2714.94 + (0.24 * (grossPay - 18204));
					}
					else if (grossPay <= 40850)
					{
						fedTax = 6183.90 + (0.32 * (grossPay - 32658));
					}
					else if (grossPay <= 60121)
					{
						fedTax = 8805.34 + (0.35 * (grossPay - 40850));
					}
					else
					{
						fedTax = 15550.19 + (0.37 * (grossPay - 60121));
					}
				}
			}
			else if (filingStatus == "SEP") 
			{
				if (payPeriod == "BW")
				{ 
					if (grossPay <= 533)
					{ 
						fedTax = 0;
					}
					else if (grossPay <= 956)
					{
						fedTax = 0 + (0.10 * (grossPay - 533));
					}
					else if (grossPay <= 2253)
					{
						fedTax = 42.30 + (0.12 * (grossPay - 956));
					}
					else if (grossPay <= 4201)
					{
						fedTax = 197.94 + (0.22 * (grossPay - 2253));
					}
					else if (grossPay <= 7537)
					{
						fedTax = 626.50 + (0.24 * (grossPay - 4201));
					}
					else if (grossPay <= 9427)
					{
						fedTax = 1427.14 + (0.32 * (grossPay - 7537));
					}
					else if (grossPay <= 22768)
					{
						fedTax = 2031.94 + (0.35 * (grossPay - 9427));
					}
					else
					{
						fedTax = 6701.29 + (0.37 * (grossPay - 22768));
					}
				}
				else if (payPeriod == "BM")
				{
					if (grossPay <= 577)
					{
						fedTax = 0;
					}
					else if (grossPay <= 1035)
					{
						fedTax = 0 + (0.10 * (grossPay - 577));
					}
					else if (grossPay <= 2441)
					{
						fedTax = 45.80 + (0.12 * (grossPay - 1035));
					}
					else if (grossPay <= 4551)
					{
						fedTax = 214.52 + (0.22 * (grossPay - 2441));
					}
					else if (grossPay <= 8165)
					{ 
						fedTax = 678.72 + (0.24 * (grossPay - 4551));
					}
					else if (grossPay <= 10213)
					{
						fedTax = 1546.08 + (0.32 * (grossPay - 8165));
					}
					else if (grossPay <= 24666)
					{
						fedTax = 2201.44 + (0.35 * (grossPay - 10213));
					}
					else
					{
						fedTax = 7259.99 + (0.37 * (grossPay - 24666));
					}
				}
				else 
				{ 
					if (grossPay <= 1154)
					{
						fedTax = 0;
					}
					else if (grossPay <= 2071)
					{
						fedTax = 0 + (0.10 * (grossPay - 1154));
					}
					else if (grossPay <= 4881)
					{
						fedTax = 91.70 + (0.12 * (grossPay - 2071));
					}
					else if (grossPay <= 9102)
					{
						fedTax = 428.90 + (0.22 * (grossPay - 4881));
					}
					else if (grossPay <= 16329)
					{
						fedTax = 1357.52 + (0.24 * (grossPay - 9102));
					}
					else if (grossPay <= 20425)
					{
						fedTax = 3092.00 + (0.32 * (grossPay - 16329));
					}
					else if (grossPay <= 49331)
					{
						fedTax = 4402.72 + (0.35 * (grossPay - 20425));
					}
					else
					{
						fedTax = 14519.82 + (0.37 * (grossPay - 49331));
					}
				}
			}
			else 
			{
				cout << "Invalid filing status. Please try again." << endl;
				fedTax = 0;
			}
			return fedTax;
		}