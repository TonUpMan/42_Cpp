#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i;
    int j;
    char c;

    i = 1;
    if(ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                c = toupper(av[i][j]);
                std::cout << c;
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }   
}
