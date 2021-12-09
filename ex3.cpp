#include <iostream>
#include<math.h>
using namespace std;
    class Complex{//l'appele de la fonction complex
        public:
           float img;
           float reel;
        Complex(float r=0,float i=0){//constructeur
            img=i;
            reel=r;
        }
        Complex afficher(){//fonction afficher
            cout<<"("<< reel<<")"<<"+ ("<<img<<"i)";
        }
        Complex addition(Complex C1,Complex C2){//fonction de la somme 
            Complex S;
            S.reel=C1.reel+C2.reel;
            S.img=C1.img+C2.img;
            return S;
        }
        Complex soustraction(Complex C1,Complex C2){//fonction de la soustraction
            Complex A;
            A.reel=C2.reel-C1.reel;
            A.img=C2.img-C1.img;
            return A;
        }
        Complex multiplication(Complex C1,Complex C2){//fonction de la multiplication
            Complex M;
            M.reel=(C1.reel * C2.reel)-(C1.img * C2.img);
            M.img=(C1.reel * C2.img)+(C1.img * C2.reel);
            return M;
        }
        Complex division(Complex C1,Complex C2){//fonction dela division 
            Complex D;
            D.reel=((C1.reel*C2.reel)+(C1.img*C2.img))/((C2.reel*C2.reel)+(C2.img*C2.img));
            D.img=(((-C1.reel)*C2.img)+(C2.reel*C2.reel))/((C2.reel*C2.reel)+(C2.img*C2.img));
            return D;
        }        
    }; 
int main(){
    float a;float b;float c;float d;
    cout<<"la forme generale est: "<<endl<<"C1=a+bi"<<endl<<"C2=c+di"<<endl;//juste pour afficher la forme generale de nombre complex
    cout<<"entrer la valeur de a:";
    cin >> a;
    cout<<"entrer la valeur de b:";
    cin >> b;
    cout<<"entrer la valeur de c:";
    cin >> c;
    cout<<"entrer la valeur de d:";
    cin >> d;
    Complex C2(a,b);
    Complex C1(c,d);
    Complex x;
    //tout sa pour appeler les fonction dans la class 
    cout<<"C1=";
    C1.afficher();
    cout<<endl<<"C2=";
    C2.afficher();
    cout<<endl;
    x=x.addition(C1,C2);
    cout<<"C1+C2=";
    x.afficher();
    cout<<endl;
    x=x.soustraction(C1,C2);
    cout<<"C2-C1=";
    x.afficher();
    cout<<endl;
    x=x.multiplication(C1,C2);
    cout<<"C2*C1=";
    x.afficher();
    cout<<endl;
    x=x.division(C1,C2);
    cout<<"C1/C2=";
    x.afficher();
    cout<<endl;
    // x.egalite();
    return 0;
}   
