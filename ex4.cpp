#include <iostream>
using namespace std;
class mere{//cree la class mere
public:
  void display(){//la fonction display de mere
    cout << "mere"<<endl;
  }
};
class fille:public mere{//cree class hierte de fille 
public:
  void display(){//la fonction display de fille
    cout<<"fille"<<endl;
  }
};
int main (){
  mere M;
  M.display();
  fille F;
  F.display();
  return 0;
}