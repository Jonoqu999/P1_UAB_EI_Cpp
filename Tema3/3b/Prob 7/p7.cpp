#include <iostream>

using namespace std;

int main(){
    int tasca;

    cout << "Menu" << endl << "1-Opcio 1" << endl << "2-Opcio 2" << endl << "3-Opcio 3" << endl;

    cin >> tasca;

    switch (tasca){
    case 1:
        cout << "Fent tasca " << tasca << endl;
        break;
    case 2:
        cout << "Fent tasca " << tasca << endl;
        break;
    case 3:
        cout << "Fent tasca " << tasca << endl;
        break;
    default:
        cout << "Opcio incorrecta" << endl;
        break;
    }
    
    return 0;
}