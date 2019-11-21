
//Post-décrémentation et pré-décrémentation
#include <iostream>
using namespace std;
main()
{
int x;
x=10;
cout << x << endl;cout << x--<< endl;
// Post-décrémentation : afficher x, puis      //décrémentation
cout << x << endl << endl;
x=10;
cout << x << endl;
cout << --x << endl;
// Pré-décrémentation : décrémenter x, puis// l’afficher
return 0;
}
