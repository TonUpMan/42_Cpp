#include "RPN.hpp"

std::string	regroup(char **av, int ac){
	std::string result = av[1];
	if(ac > 2){
		for(int i = 2; i < ac; i++){
			result.append(1, ' ');
			result.append(av[i]);
		}
	}
	return(result);
}

int main(int ac, char **av){

	if(ac > 1){
		RPN	calculat;
		std::string arg = regroup(av, ac);
		std::stringstream ss(arg);
		std::string buff;
		int	count = 0;
		int nbr = 0;
		for(int i = 0; i < static_cast<int>(arg.length()); i++){
			if(arg[i] == '+' || arg[i] == '-' || arg[i] == '*' || arg[i] == '/')
				count++;
			else if(isdigit(arg[i]))
				nbr++;
		}
		while(getline(ss, buff, ' ')){
			if(isdigit(buff[0]) || buff.length() > 1){
				int tmp = strtod(buff.c_str(), NULL);
				if(tmp > 9 || tmp < -9){
					std::cerr << "error: numbers need between -10 and 10" << std::endl;
					return(0);
				}
				if(tmp < 0)
					count--;
				calculat.add_number(tmp);
			}
			else{
				if(calculat.size() < 2 || (nbr - count) != 1){
					std::cerr << "error: expected => nbr nbr op" << std::endl;
					return(0);
				}
				int i = 0;
				std::string	op[] = {"+", "-", "*", "/"};
				while(i < 4){
					if(buff == op[i])
						break;
					i++;
				}
				switch (i)
				{
					case 0:
						calculat.add();
						break;
					case 1:
						calculat.sub();
						break;
					case 2:
						calculat.multi();
						break;
					case 3:
						calculat.div();
						break;
					default:
						std::cerr << "error: this operation isn't mandatory" << std::endl;
						return(0);
				}
				std::cout << "result: " << calculat.print() << std::endl;
			}
		}
	}
	else
		std::cerr << "error: number of arguments" << std::endl;
	return(1);
}