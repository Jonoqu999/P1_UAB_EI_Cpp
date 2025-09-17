#include <iostream>

using namespace std;

int main(){
    float N1,N2,N3;
    float media;

    cin >> N1 >> N2 >> N3;
    media = (N1+N2+N3)/3.0f;
    cout << "La mitjana de les tres notes " << N1 << ", " << N2 << " i "<< N3 << " es " << media << endl;

    return 0;
}