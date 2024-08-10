/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdeviann <qdeviann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:27:00 by qdeviann          #+#    #+#             */
/*   Updated: 2024/08/10 08:27:08 by qdeviann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){

    std::string str =  "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;

    std::cout << "Address: " << std::endl;
    std::cout << "memory address of string is: " << &str << std::endl;
    std::cout << "memory address of pointer is: " << strPTR << std::endl;
    std::cout << "memory address of reference is: " << &strREF << std::endl;

    std::cout << "Value: " << std::endl;
    std::cout << "value of string is: " << str << std::endl;
    std::cout << "value of pointer is: " << *strPTR << std::endl;
    std::cout << "value of reference is: " << strREF << std::endl;
    
}