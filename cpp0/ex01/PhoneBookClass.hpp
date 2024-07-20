#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include "ContactClass.hpp"
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>

class PhoneBook{

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void        add_contact(void);
        void        search_contact(void);
        void        print_list(void);
        void        print_contact(int i);

    private:
        int     nbr_contact;
        int     full;
        Contact contacts[8];
};

int only_space(std::string str);
int get_index(int nbr, int full);
int check_name(std::string str);
int check_nick(std::string str);
int check_number(std::string str);
int check_secret(std::string str);
std::string get_name(std::string str);
std::string get_nick(void);
std::string get_number(void);
std::string get_secret(void);
std::string reduce_len(std::string str);

#endif