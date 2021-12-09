#include <iostream>
using namespace std;
class Shape //creation de class
{
protected:
  float Largeur;
  float Hauteur;
public:
  Shape(float L, float H)//constructeur de class shape
  {
    Largeur = L;
    Hauteur = H;}};

class Rectangle:public Shape{
public:
  Rectangle(float L, float H):Shape(L, H) {}//sous class rectangle
  float area()//area de rectangle
  {
    return Largeur * Hauteur;}};
class Triangle:public Shape{
public:
  Triangle(float L, float H):Shape(L,H){}//sous class triagle
  float area()//area de triangle
  {
    return Largeur * Hauteur / 2;}};
int main (){
  float a;
  float b;
  cout<<"entrer la valeur de a:";
  cin>>a;
  cout<<endl<<"entrer la valeur de b:";
  cin>>b;
  cout<<endl;
  Rectangle area1(a,b);
  Triangle area2(a,b);
  cout << area1.area() << endl; //l'appelle de la fonction area de calculer  l'aire de rectangle
  cout << area2.area() << endl;  //l'appelle de la fonction area de calculer  l'aire de triangle  
  return 0;
}
