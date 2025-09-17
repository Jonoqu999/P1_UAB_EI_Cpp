#include <iostream>

using namespace std;

int main(){
    int x = 0;
    bool res = false;
    cin >> x;

    res = (0 < x) && (x < 10);
    cout << "El resultat de la comparacio es: " << res << endl;

    return 0;
}