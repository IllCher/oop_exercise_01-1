#include "Position.h"
#include <iostream>
#include <inttypes.h>
#include <cmath>
#define PI 3.14159265

Position::Position() {
    this->W = 0;
    this->L = 0;
}

Position::Position(double W, double L) {
    this->W = W;
    this->L = L;
}

Position Position::add(Position B) {  //Сумма
    Position C {(this->W)+(B.W), (this->L)+(B.L)};
    return C;
}

Position Position::inc(Position B) {  //Разность
    Position C {(this->W)-(B.W), (this->L)-(B.L)};
    return C;
}

Position Position::mult(Position B) {  //Произведение
    Position C {(this->W)*(B.W), (this->L)*(B.L)};
    return C;
}

Position Position::div(Position B) {  //Деление
    Position C {(this->W)/(B.W), (this->L)/(B.L)};
    return C;
}

double Position::comp(Position MAI) {  //Подсчёт расстояния
    double S;
    int R = 6371;  //Среднее значение радиуса Земли
    S = R * acos(sin((this->W) * PI / 180) * sin((MAI.W) * PI / 180) + cos((this->W) * PI / 180) * cos((MAI.W) * PI / 180) * cos(fabs(((this->L) - MAI.L) * PI / 180))); 
    //Формулка для нахождения расстояния между точками при наличии их координат в градусах S=R*arccos(sin(W1)sin(W2)+cos(W1)cos(W2)cos(|L1-L2|))
    return S;
}

void Position::print() {
    std::cout << this->W << "; " << this->L << std::endl;
}


