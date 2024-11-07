#include <iostream>
#include <string>
#include <iomanip>

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
    
    float Total = (Price_A * Quantity_A) + (Price_B * Quantity_B) + (Price_C * Quantity_C);
  
    std::cout << "Please select your payment method, Press (1 for Credit Card, 2 for PayPal, 3 for Cash): ";
    std::cin >> Payment_Method;

    double Fees_of_Transaction = (Payment_Method == 1) ? Total * 0.02 :
                            (Payment_Method == 2) ? Total * 0.03 :
                            0.0;

    double Total_After_Payment = Total + Fees_of_Transaction;

    std::cout << "Please enter your customer type, Press (1 for Regular, 2 for VIP): ";
    std::cin >> Type_of_Customer;

    float finalAmount = (Type_of_Customer == 2) ? Total_After_Payment * 0.95 : Total_After_Payment;

    std::cout << "Please enter a coupon code (if available): ";
    std::cin >> Coupon_Code;

    double couponDiscount = (Coupon_Code == " Save 10% ") ? 10.0 : 0.0;

    double totalAfterCoupon = finalAmount - couponDiscount;

    std::cout << "Please enter your location, Press (1- Region (01), 2- Region (02), 3- Region (03)): ";
    std::cin >> location;

    float taxRate = (location == 1) ? 0.05 :
                     (location == 2) ? 0.10 :
                     0.08;

    double totalWithTax = totalAfterCoupon * (1 + taxRate);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "The whole Order Summary is:" << std::endl;

    std::cout << "********************************************" << std::endl;

    std::cout << "the Product A (x" << Quantity_A << "): $" << Price_A * Quantity_A << std::endl;

    std::cout << "the Product B (x" << Quantity_B << "): $" << Price_B * Quantity_B << std::endl;

    std::cout << "the Product C (x" << Quantity_C << "): $" << Price_C * Quantity_C << std::endl;

     std::cout << "The Subtotal is: " << Total << " $" << std::endl;

     std::cout << "the discount applied for (VIP or other) is: " << (Total - finalAmount) << " $" << std::endl;

    std::cout << "Your total before transaction was: " << Total << " $" << std::endl;

    std::cout << "The transaction fee is: " << Fees_of_Transaction << " $" << std::endl;

    std::cout << "Your total after transaction fee is: " << Total_After_Payment << " $" << std::endl;

    std::cout << "Your total after customer discount: " << finalAmount << " $" << std::endl;

     std::cout << "Discount Coupon is: " << couponDiscount << " $" << std::endl;

    std::cout << "The total after applying for your coupon is: " << totalAfterCoupon << " $" << std::endl;

    std::cout << "Your sales tax is: " << (totalWithTax - totalAfterCoupon) << " $" << std::endl;

    std::cout << "Your Total after applying sales tax is: " << totalWithTax << " $" << std::endl;

    std::cout << "**********************************************" << std::endl;

    std::cout << "the total Amount to Pay is: " << totalWithTax << " $" << std::endl;

    return 0;
}
