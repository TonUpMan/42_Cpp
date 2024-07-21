
#include "sed.hpp"

void    error_handle(void){

    std::cout << "something was wrong" << std::endl;
    exit(1);
}

void    check_arg(char **av){

    std::string str;
    int         i;

    for(i = 1; i < 4; i++){
        str = av[i];
        if(str.empty())
            error_handle(); 
    }
}

std::string replace_str(std::string s1, std::string s2, std::string str){

    std::string result;
    size_t      pos, save;

    while(str[pos]){
        save = 0;
        pos = str.find(s1);
    }
}

int main(int ac, char **av){

    std::fstream    file;
    size_t          pos = 0;
    std::string     str, s1, s2;

    if(ac == 4){
        check_arg(av);
        file.open(av[1]);
        s1 = av[2];
        s2 = av[3];
        while(getline(file, str)){
            pos = str.find(s1);
            if(pos)
                str = replace_str(s1, s2, str);
        }
    }
}
