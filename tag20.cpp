#include <iostream>
#include <string>
#include <new>
using namespace std;

class Test{
public:
    string name;
    double  grade;
    //konstruktor schaffen
    //standard konstruktor
    Test(){
        name = "Unbekannt";
        grade = 3.4;
    }
    //konstruktor mit parameter

     Test(string name, double grade) : name(name), grade(grade) {
         cout << "Konstruktor ist ausgerufen!" << endl;
    }
     void print(){
        cout << "Mein Namen ist " << name << " und mein grade ist " << grade << endl;
    }

};
int main(){
    //class object schaffen
    //konstruktor wird automatisch ausgerufen
    Test test1("Julian", 3.4);

    test1.print();
    Test test2;
    test2.print();

    int grosse;
    cout << "Bitte geben Sie grosse ein: ";
    cin >> (grosse);
    //create dynamische speicher
    int *array = new int[grosse];
    //array fuellen mit for loop
    for (int i = 0; i < grosse; i++){
        cout <<i+1 << ".Element: ";
        cin >> (array[i]);
    }
//array ausgeben
cout <<"---------------------------------------------------------" << endl;
   for (int i = 0; i < grosse; i++){
       cout <<i+1 << ".Element: " << array[i] << endl;

}
cout <<"---------------------------------------------------------" <<endl;


delete [] array;










    return 0;
}
