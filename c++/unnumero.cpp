#include "main.hpp"
#include "calc.hpp"
#include "unnumero.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
void unnumero(){
    
    double nbr3;
    std::string choix103;
    
    system("clear");
    std::cout << "=========================================" << std::endl;
    std::cout << "====Bienvenue sur la calculatrice    ====" << std::endl;
    std::cout << "=========================================" << std::endl;
    std::cout << "===========que veut tu faire ?===========" << std::endl;
    std::cout << "=                                     ==" << std::endl;
    std::cout << "= [s] racine carré                    ==" << std::endl;
    std::cout << "= [M] retour                            ==" << std::endl;
    std::cout << "=                                     ==" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cin >> choix103;
    
    if (choix103 == "s"){
        std::cout << "quelle est votre numero" << std::endl;
        std::cin >> nbr3;
        std::cout << "normalement ca fait " << sqrt(nbr3) << std::endl;
        std::cout << "appuyez sur 'e' pour retourner au menu " << std::endl;
        std::cin >> choix103;
        if (choix103 == "m"){
            unnumero();
        }
    
        
    }
    else if (choix103 == "m"){
        calculatrice();
    }
}
