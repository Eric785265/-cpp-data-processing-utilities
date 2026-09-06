/* James Springer
COSC 1336 TD006
priceCalculator.cpp
This program will compute the total cost for a product from CSL Inc.
This program will take the number of items purchased and calculate shipping and
applicable discounts to give a grand total for products purchased.
*/



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // HOUSEKEEPING
    int numberOfUnits = 0;
    double discountRate = 0, retailPurchase = 199.00, discountAmount;
    double grandTotal, shipping, price;
    const double SHIPPING_RATE = 0.02;
    system("cls");
    cout << "*** PRICE CALCULATOR ***\n";
    cout << endl;
    cout << "How many units did you purchase?" << endl;
    cin >> numberOfUnits;
    cout << endl;

    // PROCESSING
    if (numberOfUnits >= 10 && numberOfUnits <= 19)
    {
        discountRate = 0.2;
    }
    else if (numberOfUnits >= 20 && numberOfUnits <= 49)
    {
        discountRate = 0.3;
    }
    else if (numberOfUnits >= 50 && numberOfUnits <= 99)
    {
        discountRate = 0.4;
    }
    else if (numberOfUnits >= 100)
    {
        discountRate = 0.5;
    }
    price = retailPurchase * numberOfUnits;
    shipping = SHIPPING_RATE * price;
    discountAmount = price * discountRate;
    grandTotal = (price + shipping) - discountAmount;

    // OUTPUT
    cout << fixed << setprecision(2);
    cout << "THE NUMBER OF UNITS THAT WERE PURCHASED: " << numberOfUnits << endl;
    cout << endl;
    cout << "THE ORIGINAL RETAIL PURCHASE WITHOUT DISCOUNT: " << price << endl;
    cout << endl;
    cout << "THE DISCOUNTED AMOUNT IS: " << discountAmount << endl;
    cout << endl;
    cout << "THE COST OF SHIPPING IS: " << shipping << endl;
    cout << endl;
    cout << "THE GRAND TOTAL IS: " << grandTotal << endl;
    system("pause");
    return 0;
}