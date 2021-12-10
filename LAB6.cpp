//TASK 1:
#include<iostream>
using namespace std;
int main()
{

	//a) 
	// Pointer is not pointing any address. Initialize it first. 
	int* number, n;
	number = &n;
	cout << number << endl;

	//b)
	// Data types of pointers are different. Pointer can only point to address of variable of same data type.
	double* realPtr;
	double reaPtr = 6.98;
	realPtr = &reaPtr;
	double* integerPtr;
	integerPtr = realPtr;

	//c) 
	// Pointer cannot store the value of variable. It must point just to an address
	int* x, y;
	x = &y;

	//d) 
	// Loop was not correct.
	char s[] = "this is a character array";
	for (int i = 0; s[i] != '\0'; i++)
	{
		cout << *s << ' ';
	}

	//e) 
    // Data types of pointers are different. Pointer can only point to address of variable of same data type and initialize it.
	short* numPtr, result;
	short nuPtr=6.98;
	numPtr = &nuPtr;
	short* genericPtr = numPtr;
	result = *genericPtr + 7;

	//f)
	// Simple variable cannot cannot copy directly from an address. First save value to another variable.
	double x = 19.34;
	double xPtr = x;
	cout << xPtr << endl;
}





//TASK 2:
#include<iostream>
#include<fstream>
using namespace std;
void Copy(char arr[5])
{
	char c1Array[5];
	fstream obj;
	obj.open("copy.txt", ios::out);
	for (int i = 0; i < 5; i++)
	{
		c1Array[i] = arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		obj << c1Array[i];
	}
	obj.close();
}
int main()
{
	char cArray[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> cArray[i];
	}

	char cPtr[5];
	for (int i = 0; i < 5; i++)
	{
		cPtr[i] = cArray[i];
	}

	Copy(cPtr);
}





//TASK 3:
#include<iostream>
using namespace std;
void print(float arr[10])
{
	for (int i = 0; i < 10; i++)
	{ 
		cout << arr[i] << endl;
	}
}

int main()
{
	float* a;
	float* floPtr = new float[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Enter array: ";
		cin >> floPtr[i];
	}

	print(floPtr);

	delete floPtr;
}


 


//TASK 4:
#include<iostream>
using namespace std;
int* SortFun(int arr[], int size)
{
	int* cpyArr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cpyArr[i] = arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (cpyArr[j] < cpyArr[j + 1])
			{
				int temp = cpyArr[j];
				cpyArr[j] = cpyArr[j + 1];
				cpyArr[j + 1] = temp;
			}
		}
	}
	return cpyArr ;
}

int main()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter array: ";
		cin >> arr[i];
	}

	int* ptr = SortFun(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << ptr[i];
	}
}

 



//TASK 5:
#include<iostream>
using namespace std;
int main()
{
	int* ptr = new int[999], n;
	for (int i = 0; i < 999; i++)
	{
		cout << "Enter Array: ";
		cin >> n;
		if (n == -1)
		{
			int* ptr1 = new int[i];
			for (int i = 0; i < i; i++)
			{
				ptr1[i] = ptr[i];
			}
		}
		else
		{
			cin >> ptr[i];
		}
	}
}