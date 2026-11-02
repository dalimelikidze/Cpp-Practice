#include <iostream>
#include <string>

using namespace std;


int main (){
    //variable anlegen
    /*
    int alter ;
    string myname;
    string text;
    //user abfragen wie alt man ist und wie man heisst
    cout << "Wie alt bist du?" << endl;
    cin >> alter;
    cout << "Wie heisst du? " << endl;
    cin >> myname;
    cout << "Schreib bitte einen Text? ";
    cin >> text;

    //variable ausgeben
    cout << "Mein alter ist: " << alter << "und mein Name ist " << myname << endl;
    cout << "Das ist Text: " << text << endl;
    */


 //string concatination
 /*
 string wort1 = "love me ";
 string wort2 = "my darliing";
 //cout << wort1 + wort2 << endl;
 //using append function
 string common_wort = wort1.append(wort2);
 cout << common_wort << endl;
 cout << "Length  of the wort  ist: " << common_wort.length() << endl;
 string fullname ;
 cout << "Geben Sie Ihr Nahme ein?" << endl;
 getline(cin,fullname);
 cout << "Your fullname: " << fullname << endl;
 int x = 23;
 if (x > 18) {
     cout << "Du kannst in die Wahl gehen!" << endl;
}
int y = 10; int i = 0; int f = 5;
 do
 { cout << i << endl;

     i++;

}
while(i < y);
cout << endl;
for (int i = 0; i < f; i++){
    cout << i << endl;

}+



*/
 /*
 //input valiedirung

 int i = 0; int zahl = 8;
 do
 {
     cout << "Geben Sie eine positvive Zahl ein: " << endl;
     cin >> zahl;
}while(zahl < 0);
cout << "Zahl ist: " << zahl << endl;
 */
/*
 //countdown programm
 int countdown = 5;
 while (countdown > 0) {

     cout << countdown << endl;
     countdown--;


}
cout << "Happy new year!" << endl;
*/
/*
//print nur gerade Zahlen
int i = 0;
while (i <= 10){
    cout << i <<endl;
    i+=2;
}

*/
/*
int dice = 1;
while (dice <= 6){
    if (dice < 6){
        cout << "No mathch!" << endl;
    }
        else {
            cout << "Match hoorey!" << endl;
        }
        dice++;
}
*/

//for loop

for (int i = 0; i < 6; i++){
    cout << i << endl;

}
cout << endl;
//print even numbers
for (int i = 0; i < 10; i+=2){
    cout << i << endl;
}

//sum in for loop
int sum = 0;
for (int  i = 0; i < 20; i++){
    sum += i;

}
cout << "Summe ist: " << sum <<endl;



//countdown
for (int i = 10; i > 0; i--)
{
    cout << i << endl;
}
//for each loop in arrays
// create the arrays
int numbers [5] = {10,20,30,40,50};
for (int num : numbers){
    cout << num << endl;
}
//loop through the char
string greeeting = "Hello";
for (char c : greeeting){
    cout << c << endl;
}


//power of two

for (int i = 2; i <= 512; i*=2)
{
    cout << i << endl;
}

















    return 0;
}
