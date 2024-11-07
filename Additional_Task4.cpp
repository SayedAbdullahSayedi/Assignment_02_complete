#include <iostream>
#include <string>

int main() {

    float Price_A = 50.0;
    float Price_B = 30.0;
    float Price_C = 20.0;

    int Quantity_A;
    int Quantity_B;
    int Quantity_C;
    int Payment_Method;
    int Type_of_Customer;
    int location;
    std::string Coupon_Code;
    
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

    double Total_After_Payment = Grand_Total + Fees_of_Transaction;

    std::cout << "Please enter your customer type, Press (1 for Regular, 2 for VIP): ";
    std::cin >> Type_of_Customer;

    float Final_Amount = (Type_of_Customer == 2) ? Total_After_Payment * 0.95 : Total_After_Payment;

    std::cout << "Please enter a coupon code (if available): ";
    std::cin >> Coupon_Code;

    double Coupoun_Discount = (Coupon_Code == " Save 10% ") ? 10.0 : 0.0;

    double TotalAfterCoupon = Final_Amount - Coupoun_Discount;

    std::cout << "Please enter your location, Press (1- Region (01), 2- Region (02), 3- Region (03)): ";
    std::cin >> location;

    float taxRate = (location == 1) ? 0.05 :
                     (location == 2) ? 0.10 :
                     0.08;

    double TotalWithTax = TotalAfterCoupon * (1 + taxRate);

    std::cout << "Your Total before transaction was: " << Grand_Total << " $" << std::endl;

    std::cout << "The transaction fee is: " << Fees_of_Transaction << " $" << std::endl;

    std::cout << "Your Total after transaction fee is: " << Total_After_Payment << " $" << std::endl;

    std::cout << "Your Total after customer discount: " << Final_Amount << " $" << std::endl;

     std::cout << "Discount Coupon is: " << Coupoun_Discount << " $" << std::endl;

    std::cout << "The Total after applying for your coupon is: " << TotalAfterCoupon << " $" << std::endl;

    std::cout << "Your sales tax is: " << (TotalWithTax - TotalAfterCoupon) << " $" << std::endl;

    std::cout << "Your Total after applying sales tax is: " << TotalWithTax << " $" << std::endl;

    return 0;
}
