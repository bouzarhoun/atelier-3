#include <iostream>
using namespace std;
class Animal{//cree la class animal
	char nom;
	int age;
    public: 	
        void set_value();};
class Zebra: public Animal{	//sous class zebra
public:
    set_value(){
        cout<<"nom : ZEBRA"<<endl<<"l'age : 7ans"<<endl<<"lieu d'origine : america"<<endl;}};
class Dolphin: public Animal{//sous class dolphin
public:
    void set_value(){
        cout<<"nom : DOLPHIN"<<endl<<"l'age : 4ans"<<endl<<"lieu d'origine : philipine"<<endl;}};
int main(){
    Zebra Z;
    Dolphin D;
    Z.set_value();//l'appelle de la fonction  
    D.set_value();
    return 0;}