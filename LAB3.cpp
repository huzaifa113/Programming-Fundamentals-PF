//TASK 8:
#include <iostream>
using namespace std;
int main()
{
    int firstvalue = 5, secondvalue = 15;
    int *p1, * p2, ** p3, ** p4;

    // p1 = address of firstvalue
    p1 = &firstvalue;
    cout << p1 << endl;

    // p2 = address of secondvalue
    p2 = &secondvalue;
    cout << p2 << endl;

    // p3 = address of firstpointr
    p3 = &p1;
    cout << p3 << endl;

    // p4 = address of secondpointer
    p4 = &p2;
    cout << p4 << endl;

    // value pointed by p1 = 10
    *p1 = 10;
    cout << *p1 << endl;

    // value pointed by p2 = value pointed by p1
    *p2 = *p1;
    cout << *p2 << endl;

    // p1 = p2 (address of pointer is copied or not)
    p1 = p2;
    cout << p1 << " " << p2 << endl;

    // p3 =p4 (check address of pointer is copied or not)
    p3 = p4;
    cout << p3 << " " << p4 << endl;

    // value pointed by p1 = 20
    *p1 = 20;
    cout << *p1 << endl;

    // print firstvalue, secondvalue
    cout << "First Value: " << firstvalue << endl;
    cout << "Second Value: " << secondvalue << endl;

    return 0;
}
 

 


//TASK 9:
#include<iostream>
using namespace std;
int main()
{
	// (a) PART
	double numbers[10] = { 0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };

	// (b) PART
	double* nptr, d;
	nptr = &d;

	// (c) PART
	cout << "(c) Part:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl << endl;

	// (d) PART
	nptr = numbers;
	nptr = &numbers[0];

	// (e) PART
	cout << "(e) Part:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *(nptr + i) << " ";
	}
	cout << endl << endl;

	// (f) PART
	cout << "(f) Part:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *(numbers + 1) << " ";
	}
	cout << endl << endl;

	// (g) PART
	cout << "(g) Part:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << nptr[i] << " ";
	}
	cout << endl << endl;

	// (h) PART
	numbers[4];
	*(numbers + 4);
	nptr[4];
	*(nptr + 4);

	// (i) PART
	cout << "(i) Part:" << endl;
	nptr = numbers;
	cout << "&(nPtr + 8) = " << (nptr + 8) << endl;
	cout << "*(nPtr + 8) = " << *(nptr + 8) << endl << endl;

	// (j) PART
	cout << "(j) Part:" << endl;
	nptr = &numbers[5];
	cout << "&(nPtr -= 4) = " << (nptr -= 4) << endl;
	cout << "*(nPtr -= 4) = " << *nptr << endl << endl;

	system("pause");
	return 0;
}


 


//TASK 10:
#include <iostream>
using namespace std;
void print(int** a)
{
	cout << "Array is :" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int** matrix = new int* [3];
	for (int i = 0; i < 3; i++)
	{
		matrix[i] = new int[3];
	}
	cout << "Enter array: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix[i][j];
		}
	}
	print(matrix);
	return 0;
}

 



//TASK 11:
#include<iostream>
using namespace std;
void print(int* a)
{
	cout << "You entered Elements : ";
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	int* a;
	//(1)
	a = new int[5];
	//(2)
	cout << "Enter array: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	//(3)
	print(a);
	system("pause");
	return 0;
}