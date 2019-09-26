#ifndef Position_h
#define Position_h
#include <inttypes.h>

class Position {
    private:
    double W;
    double L;
    public:
    Position();
    Position(double W, double L);
    Position add(Position B);
    Position inc(Position B);
    Position mult(Position B);
    Position div(Position B);
    double comp(Position B);
    void print();
};
    
#endif   
