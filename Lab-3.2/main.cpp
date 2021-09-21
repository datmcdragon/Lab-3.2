// Lab_03_2.cpp
// < Enver Seytumerov >
// Laboratory work 3.2
// Варіант 22
#include <iostream>
using namespace std;
int main()
{
 double x; // arg
 double a; // var
 double b; // var
 double c; // var
 double F; // exist
 cout << "a = "; cin >> a;
 cout << "b = "; cin >> b;
 cout << "c = "; cin >> c;
 cout << "x = "; cin >> x;

 // first
 if ((x+5)<0 && c==0)
 F = ((1/a*x)-b);
 if ((x+5)>0 && c!=0)
 F = ((x-a)/x);
 if (((x+5)<0 && c==0) && ((x+5)>0 && c!=0))
 F = ((10*x)/(c-4));
 cout << endl;
 cout << "1) F = " << F << endl;
 // second
    if ((x+5)<0 && c==0)
        F = ((1/a*x)-b);
     else
     if ((x+5)>0 && c!=0)
     F = ((x-a)/x);
     else
         F = ((10*x)/(c-4));;
     cout << "2) F = " << F << endl;
     cin.get();
     return 0;
    }
