#include <iostream>

using namespace std;

int main() {
    cout << "Valor de x >> ";
    int x;
    cin >> x;
    float res = 2/(x-4.0f);
    cout << "Resultat: " << res << endl;
    res = (5-x)/(3*(x+3.0f));
    cout << "Resultat: " << res << endl;

    return 0;
}