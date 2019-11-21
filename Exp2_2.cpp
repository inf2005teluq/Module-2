#include <iostream> 
// pour Linux pour Windows ajoutez le .h
using namespace std ;
main()
{ 
  char nom [20], prenom [20], ville [25] ;
  cout << "Quelle est votre ville actuelle : " ;
  cin >> ville ;cout << "Donnez votre nom et votre prénom : " ;
  cin >> nom >> prenom ;
  cout << "Bonjour cher " << prenom << " "<< nom << " qui habite à " << ville ;
}
