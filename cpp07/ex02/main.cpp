#include "Array.hpp"
int main() {
    try {
        Array<int> arr(5);
        for (unsigned int i = 0; i < arr.size(); ++i) {
            arr[i] = i;
        }

        for (unsigned int i = 0; i < arr.size(); ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        std::cout << arr[6] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
