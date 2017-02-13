#include <iostream>
using namespace std;
int main (){
int  srok,summ,proc,procend;
cout << "Введите срок вклада:";
cin >> srok;
cout << "Введите сумму вклада:";
cin >> summ;
if (srok <= 30){
	if(summ <= 100000){
		proc = summ*0.9;
	} else 
	if(summ >100000){
		proc = summ*0.9;
	}
}
if (srok > 31 && srok <120){
	if(summ <= 100000){
		proc = summ*1.02;
	} else 
	if(summ >100000){
		proc = summ*1.03;
	}
}
if (srok >121 && srok < 240){
	if(summ <= 100000){
		proc = summ*1.06;
	} else 
	if(summ >100000){
		proc = summ*1.08;
	}
}
if (srok > 240 && srok <365){
	if(summ <= 100000){
		proc = summ*1.12;
	} else 
	if(summ >100000){
		proc = summ*1.15;
	}
}
cout << "Начисленные проценты" << proc;
}
