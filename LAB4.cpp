//TASK 1:
#include<iostream>
using namespace std;
void sort(int arr[], int size)
{
    //Sorting Array
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    //Output Array
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int numArr[10], n = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter array: ";
        cin >> n;
        if (n >= 100 && n <= 999)
        {
            numArr[i] = n;
        }
        else
        {
            cout << "Invalid Input. Number must bee greater than 100 and less than 999. Enter again" << endl;
            cin >> numArr[i];
        }
    }
    sort(numArr, 10);
    system("pause");
    return 0;
}





//TASK 2:
#include<iostream>
using namespace std;
void linearSearch(int arr[10])
{
	int min = arr[0], n = 0;
	//Searching Minimum
	for (int i = 0; i < 10; i++) 
	{
		if (arr[i] < min) 
		{
			min = arr[i];
			n = i;
		}
	}
	cout << "BY LINEAR SEARCH: " << endl;
	cout << "Minimum Element is : " << min << " at index: " << n << endl;
	//Searching Maximum
	int max = arr[0];
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			n = i;
		}
	}
	cout << "Maximum Element is : " << max << " at index: " << n << endl;
}

void binarySearch(int arr[10])
{
	//Sorting Array
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "BY BINARY SEARCH: " << endl;
	cout << "Minimum number is: " << arr[1] << " at index 0." << endl;
	cout << "Maximum number is: " << arr[10] << " at index 9." << endl;

}
int main()
{
	int arr[10], n;
	//Taking Input
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter array: ";
		cin >> arr[i];
	}
	linearSearch(arr);
	binarySearch(arr);
    system("pause");
    return 0;
}





//TASK 3:
#include<iostream>
using namespace std;
int main()
{
    int firstvalue = 5, secondvalue = 15, * p1, * p2;
    // p1 = address of firstvalue
    p1 = &firstvalue;
    cout << p1 << endl;
    // p2 = address of secondvalue
    p2 = &secondvalue;
    cout << p2 << endl;
    // value pointed by p1 = 10
    *p1 = *p1 + 5;
    cout << *p1 << endl;
    // value pointed by p2 = value pointed by p1
    *p2 = *p1;
    cout << *p2 << endl;
    // p1 = p2 (address of pointer is copied)
    p1 = p2;
    cout << p1<< endl;
    // value pointed by p1 = 20
    *p1 = 20;
    cout << *p1 << endl;
    // print firstvalue, secondvalue
    cout << firstvalue << endl;
    cout << secondvalue << endl;

    system("pause");
    return 0;
}





//TASK 4:
#include<iostream>
using namespace std;
int main()
{
	double balance[5] = { 1000.0, 2.01, 3.4, 17.0, 50.40 };
	double* p;
	p = balance;
	for (int i = 0; i < 5; i++)
	{
		cout << "ptr + " << i << " = " << *(p + i) << endl;
	}
}






//TASK 6:
#include<iostream>
using namespace std;
int main()
{
    int arr[5] = { 3,9,1,15,3 };
    int* ptr = arr;
    cout << "For Increment: " << endl;
    //Increment the address
    for (int i = 0; i < 5; i++)
    {
        cout << "Address of index " << i << " = " << ptr << endl; 
        cout << "Value of index " << i << " = " << *ptr << endl; 
        ptr++;
    }
    cout << endl << "For Decrement: " << endl;
    //Decrement the address
    int* ptrd = arr + 4;
    for (int i = 5; i > 0; i--) 
    {
        cout << "Address of index " << i << " = " << ptrd << endl;
        cout << "Value of index " << i << " = " << *ptrd << endl;
        --ptrd;
    }
}





//TASK 7:
#include <iostream>
using namespace std;

bool primaryCheck(int* num)
{
    bool n = true;
    if (*num == 0 || *num == 1)
    {
        n = false;
    }

    for (int i = 2; i <= *num / 2; ++i)
    {
        if (*num % i == 0)
        {
            n = false;
            break;
        }
    }
    return n;
}

int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;
    int* ptr = &n;
    if (primaryCheck(ptr))
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
    return 0;
}