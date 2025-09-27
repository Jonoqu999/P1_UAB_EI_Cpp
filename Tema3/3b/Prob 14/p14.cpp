#include <iostream>

using namespace std;

int main(){
    int anyNeix,edat;
    cin >> anyNeix;

    edat = 2025 - anyNeix;

    cout << "Tens " << edat << " anys i ets ";
    if (edat < 18){
        cout << "menor d'edat." << endl;
    } else {
        cout << "major d'edat." << endl;
    }
}