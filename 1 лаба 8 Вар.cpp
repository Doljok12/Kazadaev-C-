#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_CTYPE,"rus");
    
    int x,y,a,b,c;
    cout <<"Введите x: ";
    cin >> x;

    a = pow(pow(x , 1 / 5) / (pow(x, 1 / 3) + 1),9);
    a = acos(a); 

    c = 4 * log10( 3 * x)+sqrt(abs(3 * x - 1)) + abs(x) * sin(2 * x);
    b = pow(log(c) / log(5),2); 
    y = a+b;

    cout <<"y = "<< y <<"\n";
    if(x >=-5 && x <= 5 && y >=-5 && y <= 5){
        cout <<"Точка принадлежит\n";
    } else{
        cout <<"Точка не принадлежит\n";
    }

    return 0;
}
