#include "Span.hpp"

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
    if(_n < 2)
        throw(std::runtime_error("not enought value in span"));
    int shortest, actual_shortest;
    std::list<int>::iterator lhs, rhs;
    _span.sort();
    _span.reverse();
    lhs = _span.begin();
    rhs = _span.begin();
    rhs++;
    shortest = *lhs - *rhs;
    for (int i = 1; rhs != _span.end(); i++){
        lhs++;
        rhs++;
        actual_shortest = *lhs - *rhs;
        if(actual_shortest < shortest)
            shortest = actual_shortest;
    }
    return(shortest);
}

int     Span::longestSpan(){
    if(_n < 2)
        throw(std::runtime_error("not enought value in span"));
    _span.sort();
    return(*_span.end() - *_span.begin());
}

//void    Span::fill_span(int min, int max){
//
//}

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