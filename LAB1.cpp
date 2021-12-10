//TASK 1:
#include<iostream>
using namespace std;
int main()
{
	int arr[10], count = 0;
	cout << "Enter no of values you want to enter(less than 10): " << endl;
	cin >> count;
    //TAKING INPUT
    for (int i = 0; i < count; i++)
    {
        cout << "Enter Array: ";
        cin >> arr[i];
    }
    //Sorting ARRAY
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count ; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
   //Largest Value
    cout << "Largest value: " << arr[0] << endl;
    //Smallest Value
    cout << "Smallest value: " << arr[count - 1] << endl;
    //Mid Value
    if (count % 2 == 0)
    {
        int median =( arr[count / 2] + arr[(count / 2) + 1] ) / 2;
        cout << "Mid Value: " << median << endl;
    }
    else
    {
        cout << "Mid value: " << arr[count / 2] << endl;
    }

	system("pause");
	return 0;
}






//TASK 2:
#include<iostream>
using namespace std;
int main()
{
	float item1, item2, item3;
	cout << "Price of Item 1: " << endl;
	cin >> item1;
	cout << "Price of Item 2: " << endl;
	cin >> item2;
	cout << "Price of Item 3: " << endl;
	cin >> item3;
	for (int i = 1; i <= 7; i++)
	{
		item1 = item1 - item1 / 10;
		cout << "Price of product 1 after Day " << i << ":" << item1 << endl;
	}
	for (int i = 1; i <= 7; i++)
	{
		item2 = item2 - item2 / 10;
		cout << "Price of product 2 after Day " << i << ":" << item2 << endl;
	}
	for (int i = 1; i <= 7; i++)
	{
		item3 = item3 - item3 / 10;
		cout << "Price of product 3 after Day " << i << ":" << item3 << endl;
	}

	system("pause");
	return 0;
}





//TASK 3:
#include <iostream>  
using namespace std;
void fibonacci(int n)
{
	int n1 = 0, n2 = 1, n3;
	cout << n1 << " " << n2 << " "; //printing 0 and 1    
	for (int i = 2; i < n; ++i) //loop starts from 2 because 0 and 1 are already printed    
	{
		n3 = n1 + n2;
		cout << n3 << " ";
		n1 = n2;
		n2 = n3;
	}
	cout << endl << "Largest Fibonacci No is: " << n3 << endl;
}
int main()
{
	int number;
	cout << "Enter the number of elements: ";
	cin >> number;
	fibonacci(number);
	system("pause");
	return 0;
}





//TASK 4:
#include <iostream>  
using namespace std;
void reverse(int n)
{
	int rev = 0, rem = 0;
	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	cout << "Reversed Number = " << rev << endl;
}
int main()
{
	int number;
	cout << "Enter the number: ";
	cin >> number;
	reverse(number);
	system("pause");
	return 0;
}





//TASK 5:
#include<iostream>
#include<iomanip>
using namespace std;
float smallest(float arr[5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr[4];
}
int main()
{
    float arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i] >> setprecision(2);
    }
    cout << "Smallest Number is :" << smallest(arr);
    system("pause");
    return 0;
}





//TASK 6:
#include<iostream>
using namespace std;
int main()
{
    double alpha[50];
    //First 25
    for (int i = 0; i < 25; i++)
    {
        alpha[i] = i * i;
    }
    //Last 25
    for (int i = 25; i < 50; i++)
    {
        alpha[i] = i * i * i;
    }
    //Printing Array
    for (int i = 0; i < 50;)
    {
        cout << alpha[i] << " ";
        i++;
        if (i % 10 == 0)
        {
            cout << endl;
        }
    }
    system("pause");
    return 0;
}