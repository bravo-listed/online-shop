// ShoppingCart.cpp

#include "ShoppingCart.h"
#include <iostream>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

void ShoppingCart::addItem(Product* product, int quantity) {
    items.push_back({product, quantity});
}

void ShoppingCart::displayCart() {
    std::cout << "Shopping Cart:\n";
    for (const auto& item : items) {
        std::cout << item.product->getName() << " - Quantity: " << item.quantity << '\n';
    }
}

double ShoppingCart::calculateTotal() {
    double total = 0;
    for (const auto& item : items) {
        total += item.product->getPrice() * item.quantity;
    }
    return total;
}

void ShoppingCart::saveCart() {
    try {
        std::ofstream file("cart.json");
        json cartJson;
        for (const auto& item : items) {
            cartJson.push_back({{"productId", item.product->getId()}, {"quantity", item.quantity}});
        }
        file << cartJson;
    } catch (const std::exception& e) {
        // Handle file saving error
    }
}
