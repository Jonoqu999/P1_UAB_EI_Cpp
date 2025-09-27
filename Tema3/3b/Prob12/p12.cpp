#include <iostream>

using namespace std;

int main(){
    int num1,num2 = 0;
    cin >> num1 >> num2;

    if (num1 > num2){
        int c = num2;
        num2 = num1;
        num1 = c;
    }

    cout << "El valor de num1 es " << num1 << " i el valor de num2 es " << num2 << endl;
}