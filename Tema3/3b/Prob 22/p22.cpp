#include <iostream>

using namespace std;

int main(){
    float nUnitats,preu,cost = 0;

    cin >> nUnitats >> preu;

    cost = nUnitats * preu * 1.07;

    if (cost < 500){
        cost *= 1;
    } else if (cost < 1000){
        cost *= 0.95;
    } else{
        cost *= 0.90;
    }

    cout << "L'import final de la compra son " << cost << " euros." << endl;

    return 0;
}