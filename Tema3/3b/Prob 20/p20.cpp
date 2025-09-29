#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if ((n1+n2==n3) || (n1+n3==n2) || (n2+n3==n1)){
        cout << "IGUALS" << endl;
    
    } else {
        cout << "DIFERENTS" << endl;
    }

    return 0;
}