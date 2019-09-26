#include <iostream>
#include "Position.h"
#include <cmath>

int main() {
    
    double W, L;  //Широта и долгота
    double S, S1, S2;
    int R;
    W = 55.811152;  //Координаты МАИ
    L = 37.501312;
    Position MAI = Position (W, L);
    std::cout << "Введите значения широты (|x|<91) и долготы (|x|<181) первой точки\n";
    std::cin >> W >> L;
    Position A = Position(W, L);
    std::cout << "Введите значения широты (|x|<91) и долготы (|x|<181) второй точки\n";
    std::cin >> W >> L;
    Position B = Position(W, L);
    Position C;
    
    
    std::cout << "Результаты сложения:\n";
    C = A.add(B);
    C.print();
    
    std::cout << "Результаты вычитания:\n";
    C = A.inc(B);
    C.print();
    
    std::cout << "Результаты умножения:\n";
    C = A.mult(B);
    C.print();
    
    std::cout << "Результаты деления:\n";
    C = A.div(B);
    C.print();

    std::cout << "Результаты сравнения расстояний от МАИ до точек:\n";
    S1 = A.comp(MAI);
    std::cout << "Расстояние до первой точки: " << S1 << " км" << std::endl;
    S2 = B.comp(MAI);
    std::cout << "Расстояние до второй точки: " << S2 << " км" << std::endl;
    if (S1 > S2) {
        std::cout << "Вердикт: до второй точки ближе.\n";
    } else {
        if (S2 > S1) {
            std::cout << "Вердикт: до первой точки ближе.\n";
        } else {
            std::cout << "Вердикт: одинаково.\n";
        }
    }
         
    return 0;
}
