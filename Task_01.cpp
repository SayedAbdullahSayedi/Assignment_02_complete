#include <iostream>
using namespace std;

int main() {

    float First_Prize = 50.0;

    float Second_Prize = 30.0;

    float Third_Prize = 20.0;  
  
    int First_Quantity;
    int Second_Quantity;
    int Third_Quantity;

    cout << "Please enter the quantity of Product (A) that you want to buy today? ";
    cin >> First_Quantity;

    cout << "Please enter the quantity of Product (B) that you want to buy today? ";
    cin >> Second_Quantity;

    cout << "Please enter the quantity of Product (C) that you want to buy today? ";
    cin >> Third_Quantity;

    float First_Total = First_Prize * First_Quantity;
    float Second_Total = Second_Prize * Second_Quantity;
    float Third_Total = Third_Prize * Third_Quantity;

     float total_cost = First_Total + Second_Total + Third_Total;

    cout << "the Total cost for Product (A) is: " << First_Total << endl;

    cout << "the Total cost for Product (B) is: " << Second_Total << endl;

    cout << "the Total cost for Product (C) is: " << Third_Total << endl;
    
    cout << "the Total cost for all products are: " << total_cost << endl;

    return 0;
}
