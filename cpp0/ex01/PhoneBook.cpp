#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    nbr_contact = 0;
    full = 0;
}

PhoneBook::~PhoneBook(){}

void    PhoneBook::print_contact(int i){

    std::cout << "first name:     " << contacts[i].get_first() << std::endl;
    std::cout << "last name:      " << contacts[i].get_last() << std::endl;
    std::cout << "nickname:       " << contacts[i].get_nickname() << std::endl;
    std::cout << "phone number:   " << contacts[i].get_number() << std::endl;
    std::cout << "darkest secret: " << contacts[i].get_secret() << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::print_list(){

    std::string str;

    std::cout << "|----------|------------|------------|------------|" << std::endl;
    std::cout << std::setw(10) << "index" << " | " << std::setw(10) << "firstname" << " | ";
    std::cout << std::setw(10) << "lastname" << " | " << std::setw(10) << "nickname" << " | " << std::endl;
    std::cout << "|----------|------------|------------|------------|" << std::endl;
    for(int i = 0; i < 8; i++){

        std::cout << std::setw(10) << (i + 1) << " | ";
        std::cout << std::setw(10) << reduce_len(contacts[i].get_first()) << " | ";
        std::cout << std::setw(10) << reduce_len(contacts[i].get_last()) << " | ";
        std::cout << std::setw(10) << reduce_len(contacts[i].get_nickname()) << " | " << std::endl;
        std::cout << "|----------|------------|------------|------------|" << std::endl;
    }
}

void    PhoneBook::search_contact(void){

    int index;

    if(nbr_contact == 0){
        std::cout << "no contacts registred" << std::endl;
        return ;
    }
    print_list();
    index = get_index(nbr_contact, full);
    print_contact(index - 1);
}

void    PhoneBook::add_contact(){

    if(nbr_contact == 8){
        nbr_contact = 0;
        full = 1;
    }
    contacts[nbr_contact].set_first(get_name("first name: "));
    contacts[nbr_contact].set_last(get_name("last name: "));
    contacts[nbr_contact].set_nickname(get_nick());
    contacts[nbr_contact].set_number(get_number());
    contacts[nbr_contact].set_secret(get_secret());
    contacts[nbr_contact].set_index(nbr_contact + 1);
    nbr_contact++;
    std::cout << "contact register" << std::endl;
}

int main(void){

    PhoneBook   phonebook;
    std::string input = "";

    while(1)
    {
        std::cout << "choose an option: ADD, SEARCH or EXIT" << std::endl;
        if(!getline(std::cin, input))
            exit(0);
        if(input == "EXIT"){
            std::cout << "Good Bye!" << std::endl;
            break ;
        }
        else if(input == "ADD")
            phonebook.add_contact();
        else if(input == "SEARCH")
            phonebook.search_contact();
        else if(!input.empty())
            std::cout << "invalid option!" << std::endl;
    }  
    return (0);
}