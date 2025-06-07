#include <iostream>
#include <cmath>
using namespace std;

class PointChecker{
private:
    double x, y;
    
    double calculateA(){
        double numerator = pow(x, 1.0/5);
        double denominator = pow(x, 1.0/3) + 1;
        double fraction = numerator / denominator;
        double powered = pow(fraction, 9);
        return acos(powered);
    }
    
    double calculateC(){
        return 4 * log10(3 * x) + sqrt(abs(3 * x - 1)) + abs(x) * sin(2 * x);
    }
    
    double calculateB(){
        double c = calculateC();
        double log5c = log(c) / log(5);
        return pow(log5c, 2);
    }
    
    void calculateY(){
        y = calculateA() + calculateB();
    }
    
public:
    PointChecker(double xValue) : x(xValue), y(0){
        calculateY();
    }
    
    double getY() const{
        return y;
    }
    
    bool isInArea() const{
        return (x >= -5 && x <= 5 && y >= -5 && y <= 5);
    }
};

int main(){
    setlocale(LC_CTYPE, "rus");
    
    int x;
    cout << "Введите x: ";
    cin >> x;
    
    PointChecker point(x);
    
    cout << "y = " << point.getY() << "\n";
    if(point.isInArea()) {
        cout << "Точка принадлежит\n";
    } else {
        cout << "Точка не принадлежит\n";
    }

    return 0;
}