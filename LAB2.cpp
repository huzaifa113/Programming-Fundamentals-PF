//TASK 1:
#include<iostream>
using namespace std;
int main()
{
	int x = 10.2, y = 20.8, z = 50.6;
	//(a) PART-------------
	if (!(z > 10))
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}
	//(b) PART-------------
	if (x <= 5 || y < 15)
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}
	//(c) PART-------------
	if ((x != 5) && (x != z))
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}
	//(d) PART-------------
	if (z >= x || (x + y >= z))
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}
	//(e) PART-------------
	if ((x <= y - 20) && (y >= z * 2) || (z / 2 - 2 != 20))
	{
		cout << true << endl;
	}
	else
	{
		cout << false << endl;
	}
	system("pause");
	return 0;
}

 



//TASK 2:
#include<iostream>
using namespace std;
int main()
{
	int x, y, z = 0;
	cout << "Enter previous reading: " << endl;
	cin >> x;
	cout << "Enter current reading: " << endl;
	cin >> y;
	if (x < y)
	{
		x = y - x;
		//Condition 1-------
		if (x <= 100)
		{
			x = x * 6;
			cout << "Total Bill is: " << x << endl;
		}
		//Condition 2-------
		else if (x > 100 && x <= 300)
		{
			z = x - 100;
			x = (100 * 6) + (z * 7.5) + (z * 7.5 * 10 / 100);
			cout << "Total Bill is: " << x << endl;
		}
		//Condition 3-------
		else if (x > 300)
		{
			z = x - 300;
			x = (100 * 6) + (200 * 7.5) + (z * 9) + (200 * 7.5 * 10 / 100) + (z * 20 / 100);
			cout << "Total Bill is: " << x << endl;
		}
	}
	else
	{
		cout << "Wrong readings entered." << endl;
	}
	system("pause");
	return 0;
}





//TASK 3:
#include<iostream>
using namespace std;
int main()
{
	char membership;
	int age;
	cout << "If member enter M/m anf if not enter N/n: " << endl;
	cin >> membership;
	cout << "Enter age: " << endl;
	cin >> age;
	//Condition 1-----
	if (membership == 'M' || membership == 'm')
	{
		if (age < 65)
		{
			cout << "Your Fee is $10: " << endl;
		}
		else if (age >= 65)
		{
			cout << "Your Fee is $5: " << endl;
		}
	}
	//Condition 2-----
	else if (membership == 'N' || membership == 'n')
	{
		cout << "Your Fee is $20: " << endl;
	}
	//Condition 3-----
	else
	{
		cout << "Invalid Input" << endl;
	}

	
	system("pause");
	return 0;
}

 



//TASK 5(a):
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter size: " << endl;
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

 



//TASK 5(b):
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter size: " << endl;
	cin >> x;
	for (int i = x; i >= 1; i--)
	{
		for (int j = 1; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

 



//TASK 5(c):
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter Size: " << endl;
	cin >> x;
	for (int i = x; i >= 1; i--)
	{
		for (int j = x; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}

 



//TASK 5(d):
#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter Size: " << endl;
	cin >> x;
	for (int i = x; i >= 1; i--)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		for (int k = x; k >= i; k--)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}