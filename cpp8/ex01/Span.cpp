#include "Span.hpp"

/////////////////////////////////////////////////////////////////////////////////////////////
void    Span::print(){
    std::cout << "size: " << _span.size() << std::endl;
    for(std::vector<int>::iterator it = _span.begin(); it != _span.end(); it++){
        std::cout << *it << std::endl;
    }
    std::cout << "--------------------------------------------" << std::endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////

Span::Span(){}

Span::Span(unsigned int n) : _n(n){
    std::cout << "span constructed" << std::endl; 
}

Span::Span(Span const &cpy){
    *this = cpy;
}

Span::~Span(){
    std::cout << "span destruted" << std::endl;
}

Span const &Span::operator=(Span const &cpy){
    if(this != &cpy){
       *this = cpy;
    }
    return(*this);
}

void    Span::addNumber(int add){
    if(_span.size() == _n)
        throw(std::runtime_error("span is full"));
    _span.push_back(add);
}

int     Span::shortestSpan(){
    
    std::vector<int>::iterator lhs, rhs;
    int shortest = longestSpan(), tmp = 0;

    std::sort(_span.begin(), _span.end());
    lhs = _span.begin();
    rhs = _span.begin() + 1;
    for(int i = 0; i < static_cast<int>(_span.size()) - 1; i++){
        tmp = *rhs - *lhs;
        if(tmp < shortest)
            shortest = tmp;
        rhs++;
        lhs++;
    }
    return(shortest);
}

int     Span::longestSpan(){
    
    std::vector<int>::iterator it;

    std::sort(_span.begin(), _span.end());
    it = _span.end();
    it--;
    return(*it - *_span.begin());
}

void    Span::fill_span(std::vector<int>::iterator min, std::vector<int>::iterator max){
    if(_span.size() + std::distance(min, max) > _n)
        throw(std::runtime_error("span canno't receive all values"));
    _span.insert(_span.begin(), min, max);
}


/*
Créez une classe Span pouvant stocker un maxium de N entiers. N est une variable de
type entier non-signé et sera le seul paramètre passé au constructeur.
Cette classe aura une fonction membre appelée addNumber() afin d’ajouter un seul
nombre à la Span. On l’utilisera pour remplir cette dernière. Toute tentative d’ajouter
un nouvel élément s’il y en a déjà N autres stockés jettera une exception.
Ensuite, implémentez deux fonctions membres : shortestSpan() et longestSpan()
Elles devront respectivement trouver la plus petite distance et la plus grande distance
entre les nombres stockés, puis la retourner. S’il n’y a aucun nombre stocké, ou juste un,
aucune distance ne peut être trouvée. Par conséquent, jetez une exception.
Bien sûr, implémentez vos propres tests qui devront être bien plus complets que celui
donné ci-dessous. Testez votre Span avec au moins 10 000 nombres. Vous pouvez tester
avec plus de nombres, c’est encore mieux.
*/