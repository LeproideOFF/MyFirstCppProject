#include "main.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>



void credit() {
    std::string leave;
    
    system("clear");
    std::cout << "========================================" << std::endl;
    std::cout << "====             Credits            ====" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "======== j'ai pas encore de nom ========" << std::endl;
    std::cout << "=                                     ==" << std::endl;
    std::cout << "=     Leproide : C++                  ==" << std::endl;
    std::cout << "=     sans chatgpt (pour une fois)    ==" << std::endl;
    std::cout << "=                                     ==" << std::endl;
    std::cout << "=     [L] quitter                     ==" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cin >> leave;
    
    if (leave == "l"){
        home();
    }
    
}
