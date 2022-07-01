#include <iostream>
#include <fstream>
#include <deque>
#include <algorithm>
using namespace std;
void main()
{
	deque<float> X; /*1)Create first sequence that have the type of elements of(option 11, deque, float). First sequence Х created blank.*/
	ifstream fin;
	fin.open("1.txt");
	int k;
	while (fin >> k)
	{
		X.push_back(k);	/*2)Fill first sequence from the file 1.txt*/
	}
	fin.close();
	X.push_front(10);
	ofstream fout;
	fout.open("2.txt");
	for (int i = 0; i < X.size(); i++)
	{
		fout << X[i] << " ";
	}
	fout << X[0] << " " << X[X.size() - 1] << " "; /*3)For the vector, add one more elements to the end of the sequence, for the deque - to the beginning . Record the result in file 2.txt. Write the first and the last elements of the sequence in the file 2.txt.*/
	deque<float> Y;	/*4)Create a second sequence.*/
	Y.assign(X.begin(), X.end());
	for (int i = 0; i < Y.size(); i++)
	{
		fout << Y[i] << " ";
	}										/*5)Assign the values of the elements of the first sequence to the values of the second sequence using the assing function.Record the result in file 2.txt*/
	float znach;
	cout << "Enter an element value: " << endl; cin >> znach;
	for (int i = 0; i < Y.size(); i++)
	{
		if (Y[i] == znach)
		{
			cout << "\nElement position: " << i << endl;		/*6)Find the position of the elements whose value is entered from the keyboard int the second sequence. Record the result in file 2.txt.*/
			fout << i;
		}
	}
	sort(Y.begin(), Y.end());
	for (int i = 0; i < Y.size(); i++)
	{
		fout << Y[i] << " ";								/*7)Arrange the first five elements of the second sequence. Record the result in file 2.txt.*/
	}
	X.erase(X.end() - 3, X.end());
	for (int i = 0; i < X.size(); i++)
	{
		fout << X[i];								/*8)Remove the last three elements from the first sequence. Record the result in file 2.txt.*/
	}
	fout.close();
	X.swap(Y);
	cout << "\nDeque X:" << endl;
	deque<float>::iterator it1;
	for (it1 = X.begin(); it1 != X.end(); it1++)
		cout << *it1 << " ";
	cout << "\nDeque Y:" << endl;
	deque<float>::iterator it2;
	for (it2 = Y.begin(); it2 != Y.end(); it2++)
		cout << *it2 << " ";			
	
	/*9)Swap the contents of the first and second sequence using the appropriat function of the container class. Display the result on the screen using iterators.*/
	float ser, sum, dob;
	ser = sum = 0;
	dob = 1;
	for (int i = 0; i < X.size(); i++)
	{
		sum = sum + X[i];
	}
	ser = sum / X.size();
	for (int i = 0; i < X.size(); i++)
	{
		if(X[i]<ser)
		{
			dob = dob * X[i];
		}
	}
	cout << "\nSum =" << sum<<endl;
	cout << "\nAverage value is = " << ser << endl;	 /*10)the arithmetic mean of the first sequence. Display the result on the screen.*/
	cout << "Product of the elements: "<<dob << endl;;
														 //cout << sumv(X);	/* 11)Display the result of the function on the screen*/
}


