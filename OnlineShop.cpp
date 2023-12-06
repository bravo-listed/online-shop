// OnlineShop.cpp

#include "OnlineShop.h"

void OnlineShop::loadProducts() {
    inventory.loadProducts();
}

void OnlineShop::displayProducts() {
    inventory.displayProducts();
}

void OnlineShop::addToCart() {
    inventory.displayProducts();
    int productId, quantity;
    std::cout << "Enter the ID of the product to add to the cart: ";
    std::cin >> productId;
    std::cout << "Enter the quantity: ";
    std::cin >> quantity;
    cart.addItem(inventory.getProductById(productId), quantity);
}

void OnlineShop::viewCart() {
    cart.displayCart();
}

void OnlineShop::checkout() {
    double totalAmount = cart.calculateTotal();
    std::cout << "Total amount to pay: $" << totalAmount << std::endl;
    // Additional checkout logic can be added here
    std::cout << "Checkout successful. Thank you for shopping!\n";
}

void OnlineShop::saveState() {
    inventory.saveProducts();
    cart.saveCart();
}
