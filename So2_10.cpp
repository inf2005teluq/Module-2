#include <iostream>
using namespace std;
main()
{
int num1, num2, num3, num4, num5, plus_faible, plus_grand;
cout << "Entrer cinq entiers : ";
cin >> num1 >> num2 >> num3 >> num4 >> num5;
plus_grand = num1;plus_faible = num1;
if (num1 > plus_grand)plus_grand = num1;
if (num2 > plus_grand)plus_grand = num2;
if (num3 > plus_grand)plus_grand = num3;
if (num4 > plus_grand)plus_grand = num4;
if (num5 > plus_grand)plus_grand = num5;
if (num1 < plus_faible)plus_faible = num1;
if (num2 < plus_faible)plus_faible = num2;
if (num3 < plus_faible)plus_faible = num3;
if (num4 < plus_faible)plus_faible = num4;
if (num5 < plus_faible)plus_faible = num5;
cout << "Le nombre le plus élevé est : " << plus_grand << endl<< "Le nombre le plus faible est : " << plus_faible << endl;
return 0;
}
