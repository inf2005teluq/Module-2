// Utilisation de la structure de répétition do/while// #include <iostream.h> pour windows
#include <iostream>
using namespace std;
main()
{
int produit = 1 ;
int test = 1;
do {
produit += (produit * test) ;
cout << " Somme des produits : " << produit <<endl;
test ++;
} 
while (test<=10);
return 0;
}
