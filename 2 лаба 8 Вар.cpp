#include <iostream>
using namespace std;

int main(){
     setlocale(LC_CTYPE,"rus");
    
    int a;
    cout << "Введите натурально шестизначное число: ";
    cin >> a;
    
    int sum = 0;
    int b = a;
    while (b > 0) {
        sum += b % 10;
        b /= 10;
    }
    
    int c = (a / 10) % 10;
    
    cout << "Число: " << a << endl;
    cout << "Сумма всех цифр: " << sum << endl;
    cout << "Цифра десятков: " << c << endl;
    cout << "Сумма цифр десятков: " << c << endl; 

    return 0;
}