// Utilisation de break dans une structure for 
#include <iostream>
using namespace std;
main()
{
int x;
char tableau [6]={'t', 'e', 'l', 'u', 'q'};
for (int x = 0; x <=5; x++) 
  {
  if (x == 3)
  break;  
  // Sortir de la boucle si seulement x == 3// 0 = t// 1 = e// 2 = l
  cout << tableau[x] << " ";
  }
cout << endl << "Sortir de la boucle si x == 3"<< endl;
return 0;
}
