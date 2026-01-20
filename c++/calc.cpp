#include "main.hpp"
#include "calc.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath> //future update ;)
//la fonction calculatrice
void calculatrice() {

        //stocker les information comme machin=machin en python
        double nbr1;
        double nbr2;
        std::string equation;
        bool loop = true;
        
        do{
            //la on demande si ont fait une adition soustraction etc flm de tout dire
            system("clear");
            std::cout << "=========================================" << std::endl;
            std::cout << "====Bienvenue sur la calculatrice    ====" << std::endl;
            std::cout << "=========================================" << std::endl;
            std::cout << "===========que veut tu faire ?===========" << std::endl;
            std::cout << "=                                     ==" << std::endl;
            std::cout << "= [+] Addition      [-] Soustraction  ==" << std::endl;
            std::cout << "= [*] Multiplication [/] Division     ==" << std::endl;
            std::cout << "= [M] menu                            ==" << std::endl;
            std::cout << "=                                     ==" << std::endl;
            std::cout << "========================================" << std::endl;
            
            
            // vu qu'ont demande un truc bah ont attend la reponse
            std::cin >> equation;
            
            
            
            std::cout << " " << std::endl;
            std::cout << " " << std::endl;
            
            // et ont fait le calcule
            if (equation == "*"){
                //ont demande les numero
                std::cout << "choisissez le premier numero " << std::endl;
                std::cin >> nbr1;
                std::cout << "super maintenant le 2 eme " << std::endl;
                std::cin >> nbr2;
                std::cout << "mhhh je crois que ca fait " << nbr1  * nbr2 << std::endl;
            }
            else if (equation == "+"){
                //ont demande les numero
                std::cout << "choisissez le premier numero " << std::endl;
                std::cin >> nbr1;
                std::cout << "super maintenant le 2 eme " << std::endl;
                std::cin >> nbr2;
                std::cout << "mhhh je crois que ca fait " << nbr1  + nbr2 << std::endl;
            }
            
            else if (equation == "-"){
                //ont demande les numero
                std::cout << "choisissez le premier numero " << std::endl;
                std::cin >> nbr1;
                std::cout << "super maintenant le 2 eme " << std::endl;
                std::cin >> nbr2;
                std::cout << "mhhh je crois que ca fait " << nbr1  - nbr2 << std::endl;
            }
            
            else if (equation == "/"){
                //ont demande les numero
                std::cout << "choisissez le premier numero " << std::endl;
                std::cin >> nbr1;
                std::cout << "super maintenant le 2 eme " << std::endl;
                std::cin >> nbr2;
                std::cout << "mhhh je crois que ca fait " << nbr1  / nbr2 << std::endl;
            }
            else if (equation == "m" or "M"){
                home();
            
            }
                
            //si il c'est tromper quelque part
            else std::cout << "attend attend attend ta fait une erreur la non ?" << std::endl;
            
            std::cout << "voila c'est bon tu peut quitter" << std::endl;
            //restarttttt
        } while (loop == true);
    
}
