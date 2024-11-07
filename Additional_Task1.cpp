#include <iostream>

int main() {

    float Price_A = 50.0;
    float Price_B = 30.0;
    float Price_C = 20.0;

    int Quantity_A;
    int Quantity_B;
    int Quantity_C;
    int Payment_Method;
    
    std::cout << "Please enter the quantity for first item (50$ each): ";
    std::cin >> Quantity_A;
    std::cout << "Please enter the quantity for second item (30$ each): ";
    std::cin >> Quantity_B;
    std::cout << "Please enter the quantity for Third item (20$ each): ";
    std::cin >> Quantity_C;
    
    float Grand_Total = (Price_A * Quantity_A) + (Price_B * Quantity_B) + (Price_C * Quantity_C);
  
    std::cout << "Please select your payment method, Press (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    std::cin >> Payment_Method;

    double Fees_of_Transaction = (Payment_Method == 1) ? Grand_Total * 0.02 :
                            (Payment_Method == 2) ? Grand_Total * 0.03 :
                            0.0;

    double Grand_Total_After_Payment = Grand_Total + Fees_of_Transaction;
    
    std::cout << "Your Total before transaction was: " << Grand_Total << " $" << std::endl;
    std::cout << "The transaction fee is: " << Fees_of_Transaction << " $" << std::endl;
    std::cout << "Your Total after transaction fee is: " << Grand_Total_After_Payment << " $" << std::endl;

    return 0;
}
