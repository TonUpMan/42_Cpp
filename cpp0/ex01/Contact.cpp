#include "ContactClass.hpp"

Contact::Contact(void){
    return ;
}

Contact::~Contact(void){
    return ;
}

void    Contact::set_index(int index){
    this->index = index;
}

void    Contact::set_first(std::string first){
    this->first_name = first;
}

void    Contact::set_last(std::string last){
    this->last_name = last;
}

void    Contact::set_nickname(std::string nick){
    this->nickname = nick;
}

void    Contact::set_number(std::string number){
    this->phone_number = number;
}

void    Contact::set_secret(std::string secret){
    this->darkest_secret = secret;
}

int Contact::get_index(void) const{
    return (this->index); 
}

std::string Contact::get_first(void) const{
    return (this->first_name);
}

std::string Contact::get_last(void) const{
    return (this->last_name);
}

std::string Contact::get_nickname(void) const{
    return (this->nickname);
}

std::string Contact::get_number(void) const{
    return (this->phone_number);
}

std::string Contact::get_secret(void) const{
    return (this->darkest_secret);
}