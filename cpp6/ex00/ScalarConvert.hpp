#ifndef SCALARCONVERT_HPP
#define SCALARCONVERT_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <climits>

class ScalarConvert{

    public:
        static void convert(std::string arg);
    
    private:
        ScalarConvert();
        ScalarConvert(ScalarConvert const &);
        ~ScalarConvert();
        ScalarConvert const &operator=(ScalarConvert const &);

};

#endif