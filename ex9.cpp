#include <iostream>
using namespace std;
class Test {//class test
public :
    static int compter;//pour enregistre la la valeur 
    void call(){
        cout<< "la fonction call de classe Test a ete appelee "<<++compter<<" fois"<<endl;};};
int Test ::compter=0;
int main(){
    Test t1;
    Test t2;
    Test t3;
    t1.call();
    t2.call();
    t3.call();
    Test t4 ;
    t4.call();
    return 0;
}