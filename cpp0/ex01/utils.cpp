#include "PhoneBookClass.hpp"

std::string reduce_len(std::string str){

    if(str.length() > 10){
        str = str.substr(0,9) + ".";
    }
    return (str);
}

int only_space(std::string str){

    size_t i;

    for(i = 0; i < str.length(); i++){

        if(str[i] != 32)
            return (1);
    }
    return (0);
}

int get_index(int nbr, int full){

    std::string input;
    int         index;

    if(full)
        nbr = 8;
    while(1){
        
        std::cout << "select an index" << std::endl;
        std::cin >> input;
        if(input.length() != 1 || !isdigit(input[0])){
            std::cout << "bad index, try again" << std::endl;
            continue ;
        }
        std::stringstream ss(input);
        if(!(ss >> index) || index <= 0 || index > nbr){
            std::cout << "bad index, try again" << std::endl;
            continue ;
        }
        else
            break;
    }
    return (index);
}

int check_name(std::string str){

    size_t i;

    if (!str.length() || !only_space(str))
        return (0);
    for(i = 0; i < str.length(); i++){
        if(!isalpha(str[i]) && str[i] != 32)
            return (0);
    }
    return (1);
}

int check_nick(std::string str){

    size_t i;

    if (!str.length() || !only_space(str))
        return (0);
    for(i = 0; i < str.length(); i++){
        if(!isalnum(str[i]) && str[i] != 32)
            return (0);
    }
    return (1);
}

int check_number(std::string str){

    size_t i;

    if (!str.length() || !only_space(str) || str.length() != 10)
        return (0);
    for(i = 0; i < str.length(); i++){
        if(!isdigit(str[i]))
            return (0);
    }
    return (1);
}

int check_secret(std::string str){

    size_t i;

    if (!str.length() || !only_space(str))
        return (0);
    for(i = 0; i < str.length(); i++){
        if(!isprint(str[i]))
            return (0);
    }
    return (1);
}

std::string get_name(std::string str){

    std::string input;

    while(1)
    {
        std::cout << "enter " << str << std::endl;
        if(!getline(std::cin, input))
            exit(0);
        if (check_name(input))
            break ;
        else   
            std::cout << " invalid input" << std::endl;
    }
    return (input);
}

std::string get_nick(){

    std::string input;

    while(1)
    {
        std::cout << "enter a nickname: " << std::endl;
        if(!getline(std::cin, input))
            exit(0);
        if (check_nick(input))
            break ;
        else   
            std::cout << " invalid input" << std::endl;
    }
    return (input);
}

std::string get_number(){

    std::string input;

    while(1)
    {
        std::cout << "enter a phone number: " << std::endl;
        if(!getline(std::cin, input))
            exit(0);
        if (check_number(input))
            break ;
        else   
            std::cout << " invalid input" << std::endl;
    }
    return (input);
}

std::string get_secret(){

    std::string input;

    while(1)
    {
        std::cout << "enter a darkest secret: " << std::endl;
        if(!getline(std::cin, input))
            exit(0);
        if (check_secret(input))
            break ;
        else   
            std::cout << " invalid input" << std::endl;
    }
    return (input);
}