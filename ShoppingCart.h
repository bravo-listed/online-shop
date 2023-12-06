// ShoppingCart.h

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include "Product.h"

class ShoppingCart {
public:
    void addItem(Product* product, int quantity);
    void displayCart();
    double calculateTotal();
    void saveCart();

private:
    struct CartItem {
        Product* product;
        int quantity;
    };

    std::vector<CartItem> items;
};

#endif // SHOPPINGCART_H
