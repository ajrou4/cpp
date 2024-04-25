#include"easyfind.hpp"

int main(){
    try
    {
        std::vector<int> vec ;
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        int value = easyfind(vec, 5);
        std :: cout << value << std :: endl;
    }
    catch(const std::exception &e){
        std::cerr << "Error: "<< e.what() <<std::endl;
    }
    try
    {
        std::vector<int> vec ;
        for (int i = 1; i <= 7; i++) 
            vec.push_back(i); 
        int value = easyfind(vec, 9);
        std :: cout << value << std :: endl;
    }
    catch(const std::exception &e){
        std::cerr << "Error: "<< e.what() <<std::endl;
    }
    return 0;
}