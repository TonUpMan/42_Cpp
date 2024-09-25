#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137){
    std::cout << "ShrubberyCreation form has been requested" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : AForm(cpy){
    *this = cpy;
    std::cout << "ShrubberyCreation form has been requested(copy)" << std::endl; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreation form has been destruted" << std::endl;
}

ShrubberyCreationForm const &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cpy){
    if(this != &cpy){
        target = cpy.target;
    }
    return(*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if(executor.getGrade() > getGradeExec())
        throw(GradeTooLowException());
    if(!getBool())
        throw(FormNotSign());
    std::fstream fout;
    std::string filename = target + "_shrubbery";
    fout.open(filename.c_str(), std::fstream::out);
    if(!fout.is_open()){
        std::cout << "somethings was wrong with Open!" << std::endl;
        return ;
    }
    fout << "               * *               " << std::endl;
    fout << "            *    *  *            " << std::endl;
    fout << "       *  *    *     *  *        " << std::endl;
    fout << "      *     *    *  *    *       " << std::endl;
    fout << "  * *   *    *    *    *   *     " << std::endl;
    fout << "  *     *  *    * * .#  *   *    " << std::endl;
    fout << "  *   *     * #.  .# *   *       " << std::endl;
    fout << "   *     \"#.  #: #\" * *    *     " << std::endl;
    fout << "  *   * * \"#. ##\"       *        " << std::endl;
    fout << "    *       \"###               " << std::endl;
    fout << "              \"##               " << std::endl;
    fout << "               ##.               " << std::endl;
    fout << "               .##:              " << std::endl;
    fout << "               :###              " << std::endl;
    fout << "               ;###              " << std::endl;
    fout << "             ,####.              " << std::endl;
    fout << "/\\/\\/\\/\\/\\/\\/######.\\/\\/\\/\\/\\/\\/\\ " << std::endl;
    fout.close();
    std::cout << executor.getName() << " executed " << getName() << std::endl;
}
