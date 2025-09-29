#include <iostream>

using namespace std;

int main(){
    int any = 0;
    cin >> any;

    if ((any%4 == 0) && ((any%100 != 0) || (any%400 == 0))){
        cout <<  "A l'any " << any << " febrer te 29 dies" << endl;
    } else {
        cout <<  "A l'any " << any << " febrer te 28 dies" << endl;
    }

    return 0;
}