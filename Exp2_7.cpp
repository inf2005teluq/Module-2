// Utilisation de continue dans une structure for 
#include <iostream>
using namespace std;
main()
{
char tableau [6]={'t', 'e', 'l', 'u', 'q'};
for (int x = 0; x <= 5; x++) 
  {
if (x == 3)
continue;
// Sauter le code restant de la boucle si // seulement x == 3// 0 = t// 1 = e// 2 = l// 3 = q
cout <<tableau[x] << " ";
  }
cout  <<  endl  <<  "Structure  continue  utilisée  pour  sauter  la valeur 3" << endl;
return 0;
}
