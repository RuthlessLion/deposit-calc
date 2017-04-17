#include "deposit.c"
#include <iostream>

using namespace std;

int main (){
	int ye,date,d,c;
	cout << "Введите сумму: ";
	scanf("%d",&ye);cout << endl;
	if (ye<10){cout << "Некорректная сумма"; return 0;};
	cout << "Введите срок: ";
	scanf("%d",&date);cout << endl;
	if ((date>365)||(date<=0)){cout << "Некорректная дата"; return 0;};
	if (ye<100) d=1;
		else d=2;
	if (date<=30) c=one(d,ye);
    	if ((date<=120) && (date>=31)) c=two(d,ye);
	if ((date<=240) && (date>=121)) c=three(d,ye);
	if ((date<=365) && (date>=241)) c=four(d,ye);
	cout << "Сумма по итогу: ";
	cout << c;
	return 0;
}
