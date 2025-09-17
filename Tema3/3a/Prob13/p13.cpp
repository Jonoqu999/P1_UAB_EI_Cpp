#include <iostream>

using namespace std;

int main(){
    float cel,res;
    cin >> cel;

    res = ((9/5.0f)*cel)+32;

    cout << cel << " graus Celsius son " << res << " graus Fahrenheit" << endl;

    return 0;
}