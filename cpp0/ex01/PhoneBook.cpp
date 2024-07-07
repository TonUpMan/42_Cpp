
#include "PhoneBookClass.hpp"

PhoneBook::PhoneBook(void){
    nbr_contact = 0;
    return ;
}

PhoneBook::~PhoneBook(void){
    return ;
}

void    PhoneBook::add_contact(void){

    std::string str;

    if (nbr_contact == 7)
        nbr_contact = 0;
    std::cout << "enter first name: " << std::endl;
    std::cin >> str;
    if (!str.length()){
        std::cout << "Error: Required fields" << std::endl;
        return ;
    }
    contacts[nbr_contact].set_first(str);
    std::cout << "enter last name: " << std::endl;
    std::cin >> str;
    if (!str.length()){
        std::cout << "Error: Required fields" << std::endl;
        return ;
    }
    contacts[nbr_contact].set_last(str);
    std::cout << "enter nickname: " << std::endl;
    std::cin.ignore(1, '\n');
    std::getline(std::cin ,str);
    if (!str.length()){
        std::cout << "Error: Required fields" << std::endl;
        return ;
    }
    contacts[nbr_contact].set_nickname(str);
    std::cout << "enter number phone: " << std::endl;
    std::cin >> str;
    if (!str.length()){
        std::cout << "Error: Required fields" << std::endl;
        return ;
    }
    contacts[nbr_contact].set_number(str);
    std::cout << "enter darkest secret: " << std::endl;
    std::cin.ignore(1, '\n');
    std::getline(std::cin, str);
    if (!str.length()){
        std::cout << "Error: Required fields" << std::endl;
        return ;
    }
    contacts[nbr_contact].set_secret(str);
    contacts[nbr_contact].set_index(nbr_contact);
    nbr_contact++;
}

void    PhoneBook::print_contact(int i){

    std::cout << contacts[i].get_first() << std::endl;
    std::cout << contacts[i].get_last() << std::endl;
    std::cout << contacts[i].get_nickname() << std::endl;
    std::cout << contacts[i].get_number() << std::endl;
    std::cout << contacts[i].get_secret() << std::endl;
}

void    PhoneBook::print_list(void){

    int i;

    for(i = 0; i < nbr_contact; i++){
        std::cout << std::setw(10);
        std::cout << contacts[i].get_index() << " | ";
        std::cout << std::setw(10);
        std::cout << contacts[i].get_first() << " | "; 
        std::cout << std::setw(10);
        std::cout << contacts[i].get_last() << " | ";
        std::cout << std::setw(10);
        std::cout << contacts[i].get_nickname();
        std::cout << std::endl;
    }   
}

void    PhoneBook::search_contact(void){

    std::string input;
    int         select;

    if(!nbr_contact)
    {
        std::cout << "no contact register" << std::endl;
        return ;
    }
    print_list();
    std::cout << "choose a contact, index n°: " << std::endl;
    std::cin >> input;
    select = std::stoi(input);
    if(select >= 0 && select <= nbr_contact)
        print_contact(select);
    else
    {
        std::cout << "error: invalid index" << std::endl;
        return ;
    }
}

int main(void){

    PhoneBook   repertoire;
    std::string str;

    while(1)
    {
        std::cout << "choose an option: ADD, SEARCH or EXIT" << std::endl;
        std::cin >> str;

        if(str == "ADD")
            repertoire.add_contact();
        else if(str == "SEARCH")
            repertoire.search_contact();
        else if(str == "EXIT")
        {
            std::cout << "good bye!" << std::endl;
            break ;
        }
        else
            std::cout << str << " : not valide option" << std::endl;
    }
}
