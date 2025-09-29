    #include <iostream>

using namespace std;

int main(){
    int anyNeix,edat;
    cin >> anyNeix;

    edat = 2025 - anyNeix;

    cout << "Tens " << edat << " anys i ets ";
    if (edat < 18){
        cout << "menor d'edat. ";

        if (edat > 12){
            cout << "Has acabat primaria." << endl;
        } else {
            cout << "Encara no has acabat primaria." << endl;
        }
    } else {
        cout << "major d'edat. ";

        if (edat < 67){
            cout << "Estas en edat de treballar." << endl;
        } else {
            cout << "Estas en edat de jubilacio." << endl;
        }
    }

    return 0;
}