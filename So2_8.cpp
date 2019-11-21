#include <iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
main()
{
int compteur;
cout<<"\n"<<"Première boucle";
for (compteur= 1 ; compteur <= 50; compteur++)
  {
if (compteur == 25)
break;
cout << " " << compteur;
  }
cout<<"\n"<<"boucle suivante";
for (compteur = 50; compteur >= 1; compteur--) 
  {
if (compteur == 25)
break;
cout <<" "<< compteur;
  }
return 0;
}
