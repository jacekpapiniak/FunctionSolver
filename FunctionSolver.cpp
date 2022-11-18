#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

int main()
{
    //1.1
    std::cout << "Zadanie 1.1";
    std::cout << std::endl;
    int x = -1;
    int y = 0;

    std::cout << "Podaj x: ";
    std::cin >> x;
    std::cout << std::endl << "Podaj y: ";
    std::cin >> y;
    std::cout << std::endl;

    if (x == 0) {
        std::cout << "X nie moze byc rowne 0!";
    }

    if (x == y) {
        std::cout << "X: " << x <<  " = " << "Y: " << y;
    }

    if (x > y) {
        std::cout << "X: " << x << " > " << "Y: " << y;
    }

    if (x < y) {
        std::cout << "X: " << x << " < " << "Y: " << y;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Zadanie 1.2";
    std::cout << std::endl;
    std::cout << std::endl;

    //1.2
    double value = 0.0;
    std::cout << "Value: ";
    std::cin >> value;
    std::cout<< std::endl;

    if (value >= -10.0 && value <= 0.0) { //When x <-10,0>
        std::cout << (3.0 / 2.0) * pow(value, 3) + (1.0 / 3.0 * value);
    }
    else if (value > 0.0 && value <= M_PI) { //When x (0,pi> & x > 0
        std::cout << 1.0 /(sin(value)+3.0);
    }
    else { //When x does not belong to any of the ranges 
        std::cout << -2.0 * value;
    }


    //1.3
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Zadanie 1.3";
    std::cout << std::endl;
    std::cout << std::endl;

    enum Dzialanie{
        Kula = 0,
        Walec = 1,
        Stozek = 2,
    };

    int wyborDzialania = 0;

    std::cout << "0 - Objetosc kuli" << std::endl;
    std::cout << "1 - Objetosc walca" << std::endl;
    std::cout << "2 - Objetosc stozka" << std::endl;
    std::cout << "Wybor: " << std::endl;
    std::cin >> x;
    std::cout << std::endl;
    

    double R = 0.0;
    double h = 0.0;

    switch ((Dzialanie) wyborDzialania)
    {
        case Kula:
            R = 0.0;
            std::cout << std::endl;
            std::cout << "Podaj promien (R): ";
            std::cin >> R;
            std::cout << "Objetosc kuli wynosi: " << 4.0/3.0 * M_PI * pow(R,3) << std::endl;
            break;
        case Walec:
            R = 0.0;
            h = 0.0;
            std::cout << std::endl;
            std::cout << "Podaj promien (R): ";
            std::cin >> R;
            std::cout << std::endl;
            std::cout << "Podaj wysokosc (H): ";
            std::cin >> h;
            std::cout << "Objetosc walca wynosi: " << M_PI * pow(R, 2) * h << std::endl;
            break;
        case Stozek:
            R = 0.0;
            h = 0.0;
            std::cout << std::endl;
            std::cout << "Podaj promien (R): ";
            std::cin >> R;
            std::cout << std::endl;
            std::cout << "Podaj wysokosc (H): ";
            std::cin >> h;
            std::cout << "Objetosc stozka wynosi: " << 1.0 / 3.0 * M_PI * pow(R, 2) * h << std::endl;
            break;
        default:
            break;
    }
}