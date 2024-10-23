#include "easyFind.hpp"

int main(){

    {
        try{
            std::cout << "///////////// \\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
            std::cout << "////////// list \\\\\\\\\\\\\\\\\\\\\\" << std::endl;
            std::cout << "///////////// \\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
            std::list<int> tab;
            std::cout << std::endl;
            std::cout << "add: 2, 4, 6, 8, 10 " << std::endl;
            tab.push_back(2);
            tab.push_back(4);
            tab.push_back(6);
            tab.push_back(8);
            tab.push_back(10);
            std::cout << std::endl;
            std::cout << "search: 6 " << std::endl;
            ::easyfind(tab, 6);
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        try{
            std::cout << "///////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
            std::cout << "////////// vector \\\\\\\\\\\\\\\\\\\\" << std::endl;
            std::cout << "///////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
            std::vector<int> tab;
            std::cout << std::endl;
            std::cout << "add: 2, 4, 6, 8, 10" << std::endl;
            tab.push_back(2);
            tab.push_back(4);
            tab.push_back(6);
            tab.push_back(8);
            tab.push_back(10);
            std::cout << std::endl;
            std::cout << "search: 23" << std::endl;
            ::easyfind(tab, 23);
            std::cout << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

}