#include <iostream>
#include "deposit.h"
#include "deposit.c"

using namespace std;

int main (){
int  srok,summ,proc;
checking(srok,summ,proc);
cout << endl << "Срок вклада: " << srok<<endl;
cout << "Начисленные проценты: " << proc<<endl;
}
