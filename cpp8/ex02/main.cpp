#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int>    mstack;
    std::list<int>      lst;
    std::cout << "/////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "//////////////////// fill list & mutantstack \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << "/////////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
    std::cout << std::endl;
    std::cout << "list push 5, 17" << std::endl;
    std::cout << "mstack push 5, 17" << std::endl;
    lst.push_front(5);
    lst.push_front(17);
    mstack.push(5);
    mstack.push(17);
    std::list<int>::iterator test = lst.begin();
    std::cout << std::endl;
    std::cout << "mstack top: " << mstack.top() << std::endl;
    std::cout << "list top: " << *test << std::endl;
    std::cout << std::endl;
    std::cout << "list pop" << std::endl;
    std::cout << "mstack pop" << std::endl;
    mstack.pop();
    lst.pop_front();
    std::cout << std::endl;
    std::cout << "mstack size: ";
    std::cout << mstack.size() << std::endl;
    std::cout << "list size: ";
    std::cout << lst.size() << std::endl;
    std::cout << std::endl;
    std::cout << "list push back 3, 5, 737, 0" << std::endl;
    std::cout << "mstack push 3, 5, 737, 0" << std::endl;
    std::cout << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    ++it;
    --it;
    ++lit;
    --lit;
    std::cout << "mstack: " << std::endl;
    while (it != ite)
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << std::endl;
    std::cout << "list: " << std::endl;
    while (lit != lite)
    {
        std::cout << " " << *lit;
        ++lit;
    }
    std::cout << std::endl;
    std::stack<int> s(mstack);
    return(0);
}