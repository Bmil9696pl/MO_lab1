#include <iostream>

using namespace std;

int main() {
    int licznikD = 0, licznikF = 0;
    double niD = 1.0, plusD = 2.0;
    float niF = 1.0, plusF = 2.0;
    while (plusF > 1.0){
        niF = niF / 2;
        plusF = niF + 1.0;
        if (plusF > 1.0){
            licznikF++;
        }
    }
    while (plusD > 1.0){
        niD = niD / 2;
        plusD = niD + 1.0;
        if (plusD > 1.0){
            licznikD++;
        }
    }
    cout << "float:" << endl;
    cout << "Liczba bitow mantysy: " << licznikF << " Epsilon maszynowy: " << niF * 2 << endl;
    cout << "double:" << endl;
    cout << "Liczba bitow mantysy: " << licznikD << " Epsilon maszynowy: " << niD * 2 << endl;
    return 0;
}