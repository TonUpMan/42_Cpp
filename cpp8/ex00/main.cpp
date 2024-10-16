#include "easyFind.hpp"

int main(){

    {
        try{
            std::list<int> tab;
            tab.push_back(2);
            tab.push_back(4);
            tab.push_back(6);
            tab.push_back(8);
            tab.push_back(10);
            ::easyfind(tab, 6);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        try{
            std::vector<int> tab;
            tab.push_back(2);
            tab.push_back(4);
            tab.push_back(6);
            tab.push_back(8);
            tab.push_back(10);
            ::easyfind(tab, 23);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }

}