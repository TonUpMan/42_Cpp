#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook{

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    add_contact(void);
        void    search_contact(void);
        void    print_list(void);
        void    print_contact(int i);

    private:
        int     nbr_contact;
        Contact contacts[7];
};


#endif