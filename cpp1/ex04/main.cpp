
#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
#include <sstream>

void    error_handle(void){

    std::cout << "something was wrong" << std::endl;
    exit(1);
}

void    check_arg(char **av){

    std::string str;

    for(int i = 1; i < 4; i++){
        str = av[i];
        if(str.empty())
            error_handle(); 
    }
}

int main(int ac, char **av){

    std::fstream    fin, fout;
    int             pos = 0;
    std::string     str, s1, s2;

    if(ac == 4)
    {
        check_arg(av);
        str = av[1];
        fin.open(str.c_str());
        str.append(".replace");
        fout.open(str.c_str(), std::fstream::out | std::fstream::app);
        s1 = av[2];
        s2 = av[3];
        while(getline(fin, str))
        {
            pos = str.find(s1);
            if(pos > 0)
            {
                while(1)
                {
                    pos = str.find(s1);
                    if(pos == -1)
                        break ;
                    str.erase(pos, s1.length());
                    str.insert(pos, s2);
                }
            }
            fout << str << std::endl;
        }
    }
    return (0);
}
