#include <iostream>
using namespace std;

void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);


void swapValues(int &n1, int &n2)
{
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
    return;
}
void swapValues(int &n1, int &n2, int &n3)
{
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = n3;
    n3 = tmp;
    return;
}

void swapValues(int &n1, int &n2, int &n3, int &n4)
{
    int tmp1, tmp2;
    tmp1 = n2;
    tmp2 = n1;
    n1 = n4;
    n2 = n3;
    n3 = tmp1;
    n4 = tmp2;
    return;
}