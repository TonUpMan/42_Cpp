#include "Span.hpp"

int main(){
    srand(time(0));
    {
        std::cout << "////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "//////////////////// basic test \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.print();
            std::cout << "shortest: " <<  sp.shortestSpan() << std::endl;
            std::cout << "longest: " << sp.longestSpan() << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "//////////////////// range test \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Span sp = Span(5);
            std::vector<int> test;
            int random;
            for(int i = 0; i < 5; i++){
                random = rand() % 50;
                test.push_back(random);
            }
            sp.fill_span(test.begin(), test.end());
            sp.print();
            std::cout << "shortest: " << sp.shortestSpan() << std::endl;
            std::cout << "longest: " << sp.longestSpan() << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "/////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "//////////////////// big range test \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "/////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        try{
            Span sp = Span(10000);
            std::vector<int> test;
            int random;
            for(int i = 0; i < 10000; i++){
                random = rand() % 50000;
                test.push_back(random);
            }
            sp.fill_span(test.begin(), test.end());
            std::cout << "shortest: " << sp.shortestSpan() << std::endl;
            std::cout << "longest: " << sp.longestSpan() << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    {
        std::cout << std::endl;
        std::cout << "////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "//////////////////// error test \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << "////////////////////////// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\" << std::endl;
        std::cout << std::endl;
        Span sp = Span(5);
        try{
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(26);
            sp.print();
            std::cout << "shortest: " <<  sp.shortestSpan() << std::endl;
            std::cout << "longest: " << sp.longestSpan() << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        try{
            std::vector<int> test;
            int random;
            for(int i = 0; i < 10000; i++){
                random = rand() % 50000;
                test.push_back(random);
            }
            sp.fill_span(test.begin(), test.end());
            std::cout << "shortest: " << sp.shortestSpan() << std::endl;
            std::cout << "longest: " << sp.longestSpan() << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }

    return 0;
}