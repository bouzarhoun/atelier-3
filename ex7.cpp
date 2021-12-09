#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d {//la class vecteur3d
	float x;
	float y;
	float z;
	public:
	vecteur3d(float a = 0,float b=0,float c=0):x(a),y(b),z(c){}//constructeur
	void afficher() {
		cout << "("<<x<<","<<y<<","<<z<<")" << endl;}
	vecteur3d somme(const vecteur3d & v) {//la fonction pour fait la somme
		vecteur3d s;
		s.x=x+v.x;
		s.y=y+v.y;
		s.z=z+v.z;
		return s;
		}
	float produit(const vecteur3d &v){//la fonction pour fait la somme
		return x*v.x + y*v.y + z*v.z;}
	bool coincide(const vecteur3d &v){
		return (x==v.x&&y==v.y &&z==v.z);}
	float norme(){
		return sqrt(x*x+y*y+z*z);}
	vecteur3d normax(vecteur3d v){
		if( this->norme()>v.norme())
		    return *this;	    
		return v;}
	vecteur3d*normax(vecteur3d*v){
		if( this->norme() > v->norme())
		    return this;		    
		return v;}
	vecteur3d & normaxR(vecteur3d &v){
		if( this->norme() > v.norme())
		    return *this;		    
		return v;}};
int main(){
	//l'affichage des fonctions
	vecteur3d v1(1,2,3);
	cout << "Vecteur V1";
	v1.afficher();
	vecteur3d v2(5,6,7);
	cout << "Vecteur V2";
	v2.afficher();
	cout<<endl;
	cout << "La somme v1+v2:";
	(v1.somme(v2)).afficher();
	cout << "Le produit v1*v2: " << v1.produit(v2) << endl;
	cout<<endl;
	cout << "Copier le vecteur V1 dans V3:" << endl;
	vecteur3d v3(v1);
	cout << "Vecteur V3";
	v3.afficher();
	if(v1.coincide(v3))
	    cout << " v1 et v3 coincident " << endl; 
	else
	    cout << "v1 et v3 ne coincident pas " << endl;
	
	cout<<endl;
	cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
	(v1.normax(v2)).afficher();
	cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
	(v1.normax(&v2))->afficher();
	cout << "Le vecteur qui a la plus grande norme est (par reference) :";
	(v1.normaxR(v2)).afficher();
	cout<<endl;
}