#include<string>
#include<iostream>

using namespace std;


template <class T,class T1> void SWAP(T &a, T1 &b) 
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}



int main()
{
	float a = 5.0;
	int b = 3;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	SWAP(a, b);
	cout <<"Swapped:" <<endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
}