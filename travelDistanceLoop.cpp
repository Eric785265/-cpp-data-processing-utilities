/*James Springer
travelDistanceLoop
This program will receive input for speed and distance and calculate the miles traveled within that hour and display them.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	system("cls");
    int speed, miles, hoursTraveled = 0;
	cout << "Enter the speed of the vehicle in miles per hour: ";
	cin >> speed;
	while (speed < 0)		//Loop to validate speed input
	{
		cout << "Please enter a valid speed greater than 0: ";
		cin >> speed;
	}
	cout << "Enter the number of hours traveled: ";
	cin >> hoursTraveled;
	while (hoursTraveled < 1)	//Loop to validate hours traveled input
	{
		cout << "Please enter a valid number of hours greater than 0: ";
		cin >> hoursTraveled;
	}
	for (int hours = 1; hours <= hoursTraveled; hours++)	// Loop to calculate miles traveled for each hour
	{
		miles = speed * hours;
		cout << setw (6) << hours << setw (6) << miles << endl;
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
