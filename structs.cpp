#include <iostream>
#include <string>
using namespace std;

//create structs

struct Auto {
    string name;
    int baujahr;
    string marke;


};


int main (){

    //creat struct object
    Auto traumAuto;
    traumAuto.name = "Tesla";
    traumAuto.baujahr = 2006;
    traumAuto.marke = "common";
    cout << "Ich habe ein " << traumAuto.name << endl;


    return 0;
}
