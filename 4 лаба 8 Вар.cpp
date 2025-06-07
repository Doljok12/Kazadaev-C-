#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    
    int a, b;
    cout << "Введите количество элементов в массиве: ";
    cin >> a;
    
    vector<int> array(a);
    cout << "Введите элементы массива, через пробел: ";
    for (int i = 0; i < a; ++i) {
        cin >> array[i];
    }
    
    cout << "Введите произвольное число: ";
    cin >> b;
    
    int count = 0;
    for (int i = 0; i < a; ++i) {
        if (array[i] >= b && i % 2 != 0) {  
            count++;
        }
    }
    cout << "Количество элементов, удовлетворяющих условию: " << count << endl;
    
    return 0;
}