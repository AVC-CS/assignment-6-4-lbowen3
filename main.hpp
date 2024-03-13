#include <iostream>
using namespace std;

void swapValues(int &n1, int &n2);
void swapValues(int &n1, int &n2, int &n3);
void swapValues(int &n1, int &n2, int &n3, int &n4);


void swampValues(int &n1, int &n2)
{
    n1 = n2;
    n2 = n1;
    return;
}
void swampValues(int &n1, int &n2, int &n3)
{
    n1 = n2;
    n2 = n3;
    n3 = n1;
    return;
}
void swampValues(int &n1, int &n2, int &n3, int &n4)
{
    n1 = n4;
    n2 = n3;
    n3 = n2;
    n4 = n1;
    return;
}