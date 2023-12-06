// main.cpp

#include "OnlineShop.h"

int main() {
    OnlineShop onlineShop;
    onlineShop.loadProducts();

    while (true) {
        std::cout << "1. Display available products\n"
                  << "2. Add a product to the cart\n"
                  << "3. View cart\n"
                  << "4. Checkout\n"
                  << "5. Save and exit\n";

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                onlineShop.displayProducts();
                break;
            case 2:
                onlineShop.addToCart();
                break;
            case 3:
                onlineShop.viewCart();
                break;
            case 4:
                onlineShop.checkout();
                break;
            case 5:
                onlineShop.saveState();
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
}
