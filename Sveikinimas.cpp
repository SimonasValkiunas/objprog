#include <iostream>



int main()
{
    std::string vardas;
    std::cout << "Iveskite savo varda" <<std::endl;
    std::cin >> vardas;

    int ilgis = vardas.length();

    auto paskutineRaide = vardas.back();

    char motVyr{'s'};
    int i{};
    while (i<=(ilgis+12))
    {
        std::cout <<"*";
        i++;
    }
    std::cout<<""<<std::endl;
    std::cout<<""<<std::endl;
    std::cout << "* Sveika";
    if (paskutineRaide == motVyr)
    {
        std::cout << motVyr;
    }
    std::cout<<", "<< vardas<< " *"<< std::endl;
    std::cout<<""<<std::endl;
    i=0;
    while (i<=(ilgis+12))
    {
        std::cout <<"*";
        i++;
    }

    return 0;
}
