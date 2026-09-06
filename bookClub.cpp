// James Springer
// COSC 1336
// bookClub.cpp This program is used to display the points a person has
// based on how many books they bought.

#include <iostream>

using namespace std;

int main()
{
    // HOUSEKEEPING
    int numberBooks = 0;
    int points = 0;

    // INPUT
    system("cls");
    cout << "*** BOOK CLUB REWARDS ***" << endl;
    cout << endl;
    cout << "Enter number of books that were purchased this month.\n";
    cin >> numberBooks;
    cout << endl;

    // PROCESSING
    if (numberBooks == 1)
    {
        points = 5;
    }
    else if(numberBooks == 2)
    {
        points = 15;
    }
    else if (numberBooks == 3)
    {
        points = 30;
    }
    else if (numberBooks >= 4)
    {
        points = 50;
    }

    // OUTPUT
    cout << endl;
    cout << "Total books purchased: " << numberBooks << endl;
    cout << "Total points awarded: " << points << endl;
    cout << endl;
    
    system("pause");

    return 0;
}

