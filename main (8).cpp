#include <iostream>
#include <vector>
#include <string>

std::vector<int> linear_search_product(const std::vector<std::string>& products, const std::string& targetProduct) {
    std::vector<int> indices;

    for (int i = 0; i < products.size(); i++) {
        if (products[i] == targetProduct) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::vector<std::string> productList = { "ProductA", "ProductB", "ProductC", "ProductB", "ProductD", "ProductB" };
    std::string targetProduct = "ProductB";

    std::vector<int> result = linear_search_product(productList, targetProduct);

    if (result.empty()) {
        std::cout << "Product not found in the list." << std::endl;
    } else {
        std::cout << "Product '" << targetProduct << "' found at indices: ";
        for (int index : result) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
