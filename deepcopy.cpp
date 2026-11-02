#include <iostream>
#include <string>
#include <new>
using namespace std;

class DeepCopy{
private:
    int *daten;
    int grosse;
public:
    //konsttruktor mit paramenter;
    DeepCopy(int grosse, int *qulle){
        this ->grosse = grosse;
        daten = new int[grosse];
        for (int i = 0; i < grosse; i++){
            daten[i] = qulle[i];
        }
    }
    ~DeepCopy(){
        delete [] daten;
        cout << "Destruktor ist ausgeerufen!" << endl;
    }
    //deklaration von funktion
    void ausgeben();

};
//definition von funktion
void DeepCopy ::  ausgeben() {
        for (int i = 0; i < grosse; i++){
            cout << i+1 << ".Element:" << daten[i] << endl;
        }
}

int main(){
   int arr[4] = {1,2,3,4};

    DeepCopy dc1(4,arr);
    dc1.ausgeben();

    return 0;
}
