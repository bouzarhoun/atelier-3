#include <iostream>
using namespace std;
class personne{//cree la class personne
 private:
     string nom;
     string prenom;
     int datenaissance;
 public:
personne(string n,string p,int d){//constructeur
    nom=n;
    prenom=p;
    datenaissance=d;}
 void afficher(){//la fonction afficher
 cout<<"nom:"<<nom<<endl;
 cout<<"prenom:"<<prenom<<endl;
 cout<<"date de naissance:"<<datenaissance<<endl; }};
 class employe:public personne {//la class employe 
    private :
       int salaire;
     public :
   employe(string n,string p,int d,int s):personne(n,p,d){//constucteur de la fonction employe
             salaire=s;}
        void afficher(){
       personne::afficher();
    cout<<"salaire:"<<salaire;}};
 class chef:public employe{//class chef
        private:
          string service;
        public :
    chef(string n,string p,int d,int s,string se):employe(n,p,d,s){//constucteur de la fonction chef
            service=se;}
         void afficher(){
         employe::afficher();
         cout<<endl;
         cout<<"service: "<<service<<endl;
         }};
        class directeur:public chef {//cree la calss directeur
          private:
           string societe;
          public :
    directeur(string n,string p,int d,int s,string se,string so):chef(n,p,d,s,se){//constucteur de la fonction directeur
                 societe=so;}
           void afficher(){
           chef::afficher();
           cout<<"l'associete est "<<societe<<endl;}};
int main(){
    cout<<"l'employe:"<<endl;
    employe m1("ismail","bouzarhoun",2001,15000);
    m1.afficher();
    cout<<endl;
    cout<<endl;
    cout<<"chef"<<endl;
    chef c1("anass","mroubae",2000,16000,"develoer");
    c1.afficher();
    cout<<endl;
    cout<<"directeur:"<<endl;
    directeur d1("adam","maouan",2003,12000,"developer","W3");
    d1.afficher();
    return 0;
}