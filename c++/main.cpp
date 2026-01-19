#include <iostream>
#include <string>
#include <stdlib.h>

int main() {

        //stocker les information comme machin=machin en python
        double nbr1;
        double nbr2;
        std::string equation;
        
        //la on demande si ont fait une adition soustraction etc flm de tout dire
        system("clear");
        std::cout << "=========================================" << std::endl;
        std::cout << "====Bienvenue sur la calculatrice 2000====" << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "===========que veut tu faire ?===========" << std::endl;
        std::cout << "=                                     ==" << std::endl;
        std::cout << "= [+] Addition      [-] Soustraction  ==" << std::endl;
        std::cout << "= [*] Multiplication [/] Division     ==" << std::endl;
        std::cout << "=                                     ==" << std::endl;
        std::cout << "========================================" << std::endl;
    
        
        // vu qu'ont demande un truc bah ont attend la reponse
        std::cin >> equation;
        
        //ont demande les numero
        std::cout << "choisissez le premier numero " << std::endl;
        std::cin >> nbr1;
        std::cout << "super maintenant le 2 eme " << std::endl;
        std::cin >> nbr2;
        std::cout << "super maintenant ont va faire marcher le super calculateur par ia attention ca peut exploser" << std::endl;
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        
        // et ont fait le calcule
        if (equation == "*"){
            std::cout << "mhhh je crois que ca fait " << nbr1  * nbr2 << std::endl;
        }
        else if (equation == "+"){
            std::cout << "mhhh je crois que ca fait " << nbr1  + nbr2 << std::endl;
        }
        
        else if (equation == "-"){
            std::cout << "mhhh je crois que ca fait " << nbr1  - nbr2 << std::endl;
        }
        
        else if (equation == "/"){
            std::cout << "mhhh je crois que ca fait " << nbr1  / nbr2 << std::endl;
        }
        //si il c'est tromper quelque part
        else std::cout << "attend attend attend ta fait une erreur la non ?" << std::endl;
        
    
    
}
