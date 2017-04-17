#ifndef DEPOSIT_C
#define DEPOSIT_C

#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int one(int &d, int ye);
int two(int &d, int ye);
int three(int &d, int ye);
int four(int &d, int ye);

int one(int &d, int ye){
	double s=ye;
	s=s/100*90;
	return s;
}

int two(int &d, int ye){
	int s=ye;
	double p;
	if (d==1)p = 0.02;
	if (d==2)p = 0.03;
	s=s+s*p;
	return s;
}

int three(int &d, int ye){
	int s=ye;
	cout << d<< endl;
	double p;
	if (d==1)p = 0.06;
	if (d==2)p = 0.08;
	s=s+s*p;
	return s;

}

int four(int &d, int ye){
	int s=ye;
	double p;
	if (d==1)p = 0.12;
	if (d==2)p = 0.15;
	s=s+s*p;
	return s;

}

#endif /*DEPOSIT_C*/