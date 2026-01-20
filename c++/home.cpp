#include "main.hpp"
#include "credit.hpp"
#include "calc.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>

void home(){
    
    std::string choix; 
    
    
    std::cout << "=========================================" << std::endl;
    std::cout << "====   bienvenue sur l'app sans nom  ====" << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "========voici les logiciels dispo========" << std::endl;
    std::cout << "=                                      ==" << std::endl;
    std::cout << "= [c] Calculatrice                     ==" << std::endl;
    std::cout << "=                                      ==" << std::endl;
    std::cout << "= [+] Credit                           ==" << std::endl;
    std::cout << "=                                      ==" << std::endl;
    std::cout << "=========================================" << std::endl;
    
    std::cin >> choix;
    
    if (choix == "c"){
        calculatrice();
    }
    else if (choix == "+"){
        credit();
    }
}
