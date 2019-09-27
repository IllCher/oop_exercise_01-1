#include <iostream>
#include "Position.h"
#include <cmath>

using namespace std;

int main() {
    
    double W, L;  //Широта и долгота
    double S, S1, S2;
    int R;
    W = 55.811152;  //Координаты МАИ
    L = 37.501312;
    Position MAI = Position (W, L);
    cout << "Введите значения широты (|x|<91) и долготы (|x|<181) первой точки\n";
    cin >> W >> L;
    Position A = Position(W, L);
    cout << "Введите значения широты (|x|<91) и долготы (|x|<181) второй точки\n";
    cin >> W >> L;
    Position B = Position(W, L);
    Position C;
    
    
    cout << "Результаты сложения:\n";
    C = A.add(B);
    C.print();
    
    cout << "Результаты вычитания:\n";
    C = A.inc(B);
    C.print();
    int a;
    std::cin >> a;
    cout << "Результаты умножения:\n";
    C = A.mult(B);
    C.print();
    
    cout << "Результаты деления:\n";
    C = A.div(B);
    C.print();

    cout << "Результаты сравнения расстояний от МАИ до точек:\n";
    S1 = A.comp(MAI);
    cout << "Расстояние до первой точки: " << S1 << " км" << std::endl;
    S2 = B.comp(MAI);
    cout << "Расстояние до второй точки: " << S2 << " км" << std::endl;
    if (S1 > S2) {
        cout << "Вердикт: до второй точки ближе.\n";
    } else {
        if (S2 > S1) {
            cout << "Вердикт: до первой точки ближе.\n";
        } else {
            cout << "Вердикт: одинаково.\n";
        }
    }
         
    return 0;
}
