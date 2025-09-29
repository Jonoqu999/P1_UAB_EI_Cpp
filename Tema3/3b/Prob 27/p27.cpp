#include <iostream>

using namespace std;

int main(){
    float n1,n2,n3,n4,nc;

    cin >> n1 >> n2 >> n3 >> n4;
    nc++;
    if (n1 > n2){
        nc++;
        if (n1 > n3){
            nc++;
            if (n1 > n4){
                cout << "El numero mes gran de la serie es " << n1 << ". Comparacions: " << nc << endl;
            } else {
                cout << "El numero mes gran de la serie es " << n4 << ". Comparacions: " << nc << endl;
            }
        } else {
            nc++;
            if (n3 > n4){
                cout << "El numero mes gran de la serie es " << n3 << ". Comparacions: " << nc << endl;
            } else {
                cout << "El numero mes gran de la serie es " << n4 << ". Comparacions: " << nc << endl;
            }
        }
    } else {
        nc++;
        if (n2 > n3){
            nc++;
            if (n2 > n4){
                cout << "El numero mes gran de la serie es " << n2 << ". Comparacions: " << nc << endl;
            } else {
                cout << "El numero mes gran de la serie es " << n4 << ". Comparacions: " << nc << endl;
            }
        } else {
            nc++;
            if (n3 > n4){
                cout << "El numero mes gran de la serie es " << n3 << ". Comparacions: " << nc << endl;
            } else{
                cout << "El numero mes gran de la serie es " << n4 << ". Comparacions: " << nc << endl;
            }
        }
    }
}