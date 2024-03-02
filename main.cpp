#include <iostream>
using namespace std;

int main() {

    int a=1;
    int b=0;
    int sumapar=0;
    int sumaimpar=0;

    while (a<=50){
        sumaimpar+=a;
        a+=2;
    }
        cout<<"LA SUMA DE  LOS NUMEROS IMPARES DE 0 A 50 ES: "<<sumaimpar<<endl;

    while (b<=50){
        sumapar +=b;
        b+=2;
    }
        cout<<"LA SUMA DE LOS NUMEROS PARES DE 0 A 50 ES: "<<sumapar<<endl;

    return 0;
}
