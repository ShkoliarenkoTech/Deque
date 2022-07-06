/*#include<iostream>
#include<string>

using namespace std;

template <typename T>
void func(T &a, T &b) 
{
	swap(a, b);
}

void SWAP(int *c, int *d) 
{
	cout << "C = " << *c << endl;
	cout << "D = " << *d << endl;
	cout << "-----------------------------------------------" << endl;
	swap(*c, *d);
}
void reverse(int *pa, int *pb) 
{
	int temp = *pb;
	*pb = *pa;
	*pa = temp;
}

void main() 
{
	int a = 1, b = 9;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "===============================================" << endl;
	reverse(&a,&b);
	cout <<"a = "<<a<< endl;
	cout << "b = " << b << endl;
	cout << "New one" << endl << endl;

	int c = 5;
	int d = 10;
	SWAP(&c, &d);
	cout << "C = " << c << endl;
	cout << "D = " << d << endl;
}*/


//---------------------------------------------------------------------------------------------TEMPLATE SWAPPED FUNCTION---------------------------------------------------------------------------------------

#include<string>
#include<iostream>

using namespace std;


template <class T, class T1> void SWAP(T &a, T1 &b) 
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}



int main()
{
	float a = 5.0;
	char b = 'a';
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
	SWAP(a, b);
	cout <<"Swapped:" <<endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl;
}