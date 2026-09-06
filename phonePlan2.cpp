/*James Springer
phonePlan2.cpp
This program outputs your total due for the month based on what plan you are paying for
and will also inform you about possible savings if you switched to other plans.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	enum PhonePlan {C = 1, B, A};
	double dataAmount = 0.0;
	double total_A = 0.0, total_B = 0.0, total_C = 0.0; // initialize totals
	int plan = 0;
	const double ADDITIONAL_DATA_COST = 8.00;
	const double PLAN_A_COST = 39.99;
	const double PLAN_B_COST = 59.99;
	const double PLAN_C_COST = 79.99;
	string name;

	system("cls"); // optional: clear console
	cout << "*** PHONE BILL CALCULATOR ***" << endl << endl;
	cout << "Enter your name: " << endl;
	cin >> name;
	cout << endl;
	cout << "Enter your plan (1 = C, 2 = B, 3 = A): " << endl;
	cin >> plan;
	cout << endl;
	cout << "Enter the amount of data used (in GB): " << endl;
	cin >> dataAmount;
	cout << endl;

	// Calculate totals for all plans so comparisons are valid
	total_C = PLAN_C_COST;
	total_B = (dataAmount > 8) ? (PLAN_B_COST + (dataAmount - 8) * ADDITIONAL_DATA_COST) : PLAN_B_COST;
	total_A = (dataAmount > 2) ? (PLAN_A_COST + (dataAmount - 2) * ADDITIONAL_DATA_COST) : PLAN_A_COST;

	cout << fixed << setprecision(2);

	if (plan == C)
	{
		cout << "Your total is: " << total_C << endl;
	}
	else if (plan == B)
	{
		cout << "Your total is: " << total_B << endl;
		if (total_B > total_C)
		{
			cout << "You would have saved $" << (total_B - total_C) << " by switching to plan C." << endl;
		}
	}
	else if (plan == A)
	{
		cout << "Your total is: " << total_A << endl;
		if (total_A > total_B)
		{
			cout << "You would have saved $" << (total_A - total_B) << " by switching to plan B." << endl;
		}
		if (total_A > total_C)
		{
			cout << "You would have saved $" << (total_A - total_C) << " by switching to plan C." << endl;
		}
	}
	else
	{
		cout << "Invalid plan selection." << endl;
	}

	cout << "Your name is: " << name << endl;
	cout << "The plan you have chosen is: " << plan << endl;
	cout << "You have used " << dataAmount << " GBs of data" << endl << endl;
	system("pause"); // optional: pause console before exit

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
