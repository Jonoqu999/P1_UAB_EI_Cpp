#include <iostream>

using namespace std;

int main(){
    float salari = 0;
    int anys = 0;
    cin >> salari >> anys;

    if (anys < 3){
        salari *= 1.01;

    } else if (anys < 5){
        salari *= 1.02;

    } else {
        salari *= 1.035;

    }

    cout << "El salari final es: " << salari << endl;

    return 0;
}