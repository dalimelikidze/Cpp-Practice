#include <iostream>
#include <string>

using namespace std;
//define function;
void greeting (){
    cout << "Hello  how are you doing?" << endl;
}

int mul (int x, int y){
    return x*y;
}



int main(){
    int x, y;
    cout << "Enter the erste zahl: ";
    cin >> (x);
    cout << "Enter the zweite zahl? ";
    cin >> (y);
    int result = mul(x,y);
    cout << "resultat: " << x << '*' << y << '=' << result << endl;

//function aufrufen
    greeting();

    return 0;
}
