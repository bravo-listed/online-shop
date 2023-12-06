// ProductInventory.cpp

#include "ProductInventory.h"
#include <fstream>
#include <iostream>
#include "json.hpp"

using json = nlohmann::json;

void ProductInventory::loadProducts() {
    try {
        std::ifstream file("products.json");
        file >> products;
    } catch (const std::exception& e) {
        // Handle file loading error
    }
}

void ProductInventory::displayProducts() {
    std::cout << "Available Products:\n";
    for (const auto& product : products) {
        std::cout << product.getId() << ". " << product.getName() << " - $" << product.getPrice() << '\n';
    }
}

Product* ProductInventory::getProductById(int productId) {
    for (auto& product : products) {
        if (product.getId() == productId) {
            return &product;
        }
    }
    return nullptr;
}

void ProductInventory::saveProducts() {
    try {
        std::ofstream file("products.json");
        file << products;
    } catch (const std::exception& e) {
        // Handle file saving error
    }
}
