#include <iostream>
using namespace std;
class MyClass{ //creation de class
    public:
        string put;
        MyClass(string a)//constructeur
        {
            put=a;
            cout << "boujour "<< a<< endl;
        }
        
        ~MyClass()//destructeur
        {
            cout <<"by "<< put << endl ;
        }
};
int main(void) 
{
    cout<<"entrer le nom :";
    string b;
    cin >> b; //pour l'utilisateur entrer le nom 
    MyClass C1(b);
    return 0;
}
