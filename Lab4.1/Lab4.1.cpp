#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N, i = 1, k = i;
	double S;

	cout << "N = "; cin >> N;
	S = 0;
	while(i <= N)
	{
		S += cos(sin(1.*i))/(1+cos(1.*i)* cos(1. * i));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = k;
	do{
		S += cos(sin(1. * i)) /(1 + cos(1. * i) * cos(1. * i));
		i++;
	} while(i <= N);
	cout << S << endl;
	S = 0;
	i = k;
	for(i=1; i <= N; i++)
	{
		S += cos(sin(1. * i)) / (1 + cos(1. * i) * cos(1. * i));
	}
	cout << S << endl;
	S = 0;
	i = k;
	for(i=N; i >= 1; i--)
	{
		S += cos(sin(1. * i)) / (1 + cos(1. * i) * cos(1. * i));
	}
	cout << S << endl;
	return 0;
}