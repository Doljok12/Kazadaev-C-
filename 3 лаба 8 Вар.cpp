#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_CTYPE,"rus");
    int x, y;
    cout << "Введите x: ";
    cin >> x;

    if (x <= 8) {
        y = acos(exp(-abs(x))); 
    } else if (x > 8 && x < 9) {
        y = cos(pow(x , 5) / (7 + pow(x , 2))); 
    } else { 
        y = pow(x , 8) + pow(x , x - 10); 
    }
    cout << "y = " << y << endl;

    return 0;
}