#include <iostream>
#include <string>
using namespace std;

int main(){
    /*
    int age = 23;
    int *ptr = &age;
    cout << "Das ist address: " << ptr <<endl;
    cout << "Das ist address von age: " << &age << endl;
    //dereferencing
    cout << "my age ist: " <<age << endl;
    cout << "Das ist mein age mit pointer: " << *ptr << endl;
    //um dynamische memory zu erzeugen wir mussen new keyword benutzen
    int *num = new int;
    *num = 23;
     cout << "my age is: " << *num << endl;
     //delete dynamisch erzeugtes memory
     delete num;
     */
    //array fuellen und dynamische erzeugen
    int grosse = 0;
    cout << "bitte grosse der Array einngebn?" << endl;
    cin >> (grosse);
    //check if array >= 0;
    //check it through do while loop
    do
    {
    if (grosse <= 0){
        cout << "Grosse muss > 0 sein!" << endl;
    }
    }while(grosse > 0);

    //meory dynamisch erzeugen
    int *arrays = new int[grosse];
   cout << "Bitte fuellen die Array aus!" << endl;
    //array fuellen
    for (int i = 0; i < grosse; i++){
        cout << i +1 << ".Element ";
        cin >> (arrays[i]);
    }
//zur kontrole werte ausgeben
//auszugebende werte
cout << "auszugebende Werte!" << endl;
for (int i = 0; i < grosse; i++){
    cout << i+1 << ".Element: " << arrays[i] << endl;
}

delete [] arrays;
arrays = nullptr;

    return 0;
}
