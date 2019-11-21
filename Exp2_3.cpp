// Programme en C++
include <iostream.h>
include <iomanip.h>
// initialisation des variablesint 
main() 
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
