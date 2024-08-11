/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:28:58 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/11 09:35:58 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
//#include <sstream>

void    error_handle(std::string str){

    std::cout << "something was wrong: " << str << std::endl;
    return ;
}

int    check_arg(char **av){

    std::string str;

    for(int i = 1; i < 4; i++){
        str = av[i];
        if(str.empty())
        {
            error_handle("empty argument");
            return(0); 
        }
    }
    return (1);
}

int main(int ac, char **av){

    std::fstream    fin, fout;
    int             pos = 0;
    std::string     str, s1, s2;

    if(ac == 4)
    {
        if(!check_arg(av))
            return (0);
        str = av[1];
        fin.open(str.c_str());
        if(!fin.is_open())
        {
            error_handle("is not a valide infile");
            return (0);
        }
        str.append(".replace");
        fout.open(str.c_str(), std::fstream::out);
        if(!fout.is_open())
        {
            fin.close();
            error_handle("is not a valide outfile");
            return (0);
        }
        s1 = av[2];
        s2 = av[3];
        std::getline(fin, str, '\0');
        if (s1 != s2)
        {
            while(pos < (int)str.length())
            {
                pos = str.find(s1, pos);
                if(pos < 0)
                    break;
                str.erase(pos, s1.length());
                str.insert(pos, s2);
                pos++;
            }
        }
        fout << str << std::endl;
        fin.close();
        fout.close();
    }
    else if (ac > 4 ||(ac < 4 && ac > 1))
        error_handle("number of arguments");
    return (0);
}
