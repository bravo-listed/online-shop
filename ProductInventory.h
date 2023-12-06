// ProductInventory.h

#ifndef PRODUCTINVENTORY_H
#define PRODUCTINVENTORY_H

#include <vector>
#include "Product.h"

class ProductInventory {
public:
    void loadProducts();
    void displayProducts();
    Product* getProductById(int productId);
    void saveProducts();

private:
    std::vector<Product> products;
};

#endif // PRODUCTINVENTORY_H
