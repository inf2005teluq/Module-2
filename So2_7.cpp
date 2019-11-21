#include <iostream>
#include <string.h>
using namespace std;
main ()
{
char lettre1, lettre2;
cout << "Entrer deux lettres minuscules comprises entre a et z : ";
cin >> lettre1 >> lettre2;
if (lettre1 == lettre2) 
cout << "Les lettres sont égales." << endl;
if (lettre1 > lettre2) 
cout << lettre1 << " La première lettre est la plus grande." << endl;
if (lettre2 > lettre1) 
cout << lettre2 << " La deuxième lettre est la plus grande." << endl;
return 0;
}
