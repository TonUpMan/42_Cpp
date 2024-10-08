#include "iter.hpp"

int main(){
    {
        std::cout << "//////////////////// int array \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        int array[] = {436, 5, 2 ,89, 41};
        std::cout << std::endl;
        ::iter(array, 5, print<int>);
        std::cout << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << " incrementation " << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        ::iter(array, 5, increment<int>);
        ::iter(array, 5, print<int>);
        std::cout << std::endl;
    }
    {
        std::cout << std::endl;
        std::cout << "//////////////////// char array \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        char array[] = "test";
        std::cout << std::endl;
        ::iter(array, 5, print<char>);
        std::cout << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << " incrementation " << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        ::iter(array, 5, increment<char>);
        ::iter(array, 5, print<char>);
        std::cout << std::endl;
    }
        std::cout << std::endl;
}