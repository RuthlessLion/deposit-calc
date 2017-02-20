#include <iostream>
using namespace std;
int main (){
int  srok,summ,proc,procend;
for (;;){
cout << endl << "Введите срок вклада:" << endl;
cin >> srok;
if (srok <= 0 || srok >365){
	cout << "Введён неправильный срок вклада"<<endl;
	break;
}
cout << "Введите сумму вклада:"<<endl;
cin >> summ;
if (summ <= 10000){
	cout << "Введёна неправильная сумма вклад"<<endl;
	break;
}
if (srok > 0 && summ > 0){
	if ((srok <= 30) && (srok > 0)){
	if(summ <= 100000){
		proc = summ*0.9;
	} else 
	if(summ >100000){
		proc = summ*0.9;
	}
}
if ((srok >= 31) && (srok <=120)){
	if(summ <= 100000){
		proc = summ*1.02;
	} else 
	if(summ >100000){
		proc = summ*1.03;
	}
}
if ((srok >=121) && (srok <=240)){
	if(summ <= 100000){
		proc = summ*1.06;
	} else 
	if(summ >100000){
		proc = summ*1.08;
	}
}
if ((srok >= 241) && (srok <=365)){
	if(summ <= 100000){
		proc = summ*1.12;
	} else 
	if(summ >100000){
		proc = summ*1.15;
	}
}
cout << endl << "Срок вклада: " << srok<<endl;
cout << "Начисленные проценты: " << proc<<endl;
}
}
}
