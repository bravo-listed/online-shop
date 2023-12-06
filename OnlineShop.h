// OnlineShop.h

#ifndef ONLINESHOP_H
#define ONLINESHOP_H

#include "ProductInventory.h"
#include "ShoppingCart.h"

class OnlineShop {
public:
    void loadProducts();
    void displayProducts();
    void addToCart();
    void viewCart();
    void checkout();
    void saveState();

private:
    ProductInventory inventory;
    ShoppingCart cart;
};

#endif // ONLINESHOP_H
