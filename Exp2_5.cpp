// Structure de répétition for// #include <iostream.h>
#include <iostream>
using namespace std;
main() 
{
// Initialisation, condition de répétition et // incrémentation sontincluses dans l’en-tête de la// structure for
int produit;
for (int test = 1; test <= 10; test++)produit += (produit * test);
cout <<"Somme des produits : "<< produit <<endl;
return 0;
}
