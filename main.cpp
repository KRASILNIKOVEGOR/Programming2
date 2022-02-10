#include <iostream>

class Train{
private:
    double m0;
    double p, v, x = 0;
public:
    Train(double m) {
         m0 = m;
    }
    void move(double dt) {
            x = x + v * dt;
    }

    void accelerate(double dp) {
            v = v + dp /m0;
    }

    double getX() {
            return x;
    }

};

int main() {
    Train t(10);
    t.accelerate(1); // Скорость стала 0.1
    t.move(1);
    std::cout << "Current X: " << t.getX() << std::endl;
    t.move(1);
    std::cout << "Current X: " << t.getX() << std::endl;
    t.accelerate(-2); // Скорость стала -0.1
    t.move(3);
    std::cout << "Current X: " << t.getX() << std::endl;
}