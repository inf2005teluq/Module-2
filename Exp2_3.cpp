// Programme en C++
#include <iostream>
#include <iomanip>
// pour Linux pour Windows ajoutez le .h
using namespace std ;
// initialisation des variablesint 
int main() 
{
int somme =0;
int test =1;
while(test<=10)
{
somme +=(somme + test);
test++;
}
cout << "La somme est de :"<< endl;
cout << somme <<endl;
return 0;
}
