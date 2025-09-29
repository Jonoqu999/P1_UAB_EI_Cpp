#include <iostream>

using namespace std;

int main(){
    float Teoria,Seminaris,Practiques,NotaFinal = 0;

    cin >> Teoria >> Seminaris >> Practiques;

    NotaFinal = 0.4 * Teoria + 0.3 * Seminaris + 0.3 * Practiques;
    cout << "La nota final es " << NotaFinal << " - ";

    if (NotaFinal < 5){
        cout << "SUSPES" << endl;
    } else if (NotaFinal < 7){
        cout << "APROVAT" << endl;
    } else if (NotaFinal < 9){
        cout << "NOTABLE" << endl;
    } else if (NotaFinal < 10){
        cout << "EXCEL.LENT" << endl;
    } else {
        cout << "MATRICULA D'HONOR" << endl;
    }

    return 0;
}