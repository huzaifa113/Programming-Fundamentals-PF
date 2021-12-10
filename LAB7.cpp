//TASK 1:
#include<iostream>
using namespace std;
int sum(int n)
{
	if (n == 1) //Base Case
	{
		return 1;
	}
	else
	{
		return n + sum(n - 1); //Recursive Case
	}
}
int main()
{
	int n;
	cout << "Enter number: "; //Taking Input
	cin >> n;
	cout << sum(n); //Function Calling
}




//TASK 2:
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if ((n == 1) || (n == 0)) //Base Case
    {
        return n;
    }
    else
    {
        return(fibonacci(n - 1) + fibonacci(n - 2)); //Recursive Case
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";  //Taking Input
    cin >> n;
    cout << endl << "Fibonnaci Series: ";
    for (int i = 0; i < n; i++)   
    {
        cout << " " << fibonacci(i); //Function Calling
    }
}

 



//TASK 3:
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char aux, char destination)
{
	if (n == 0) //Base Case
	{
		return;
	}
	else       //Recursive Case
	{
		towerOfHanoi(n - 1, source, destination, aux);
		cout << "Move disk " << n << " from rod " << source << " to rod " << aux << endl;
		towerOfHanoi(n - 1, destination, aux, source);
	}	
}

int main()
{
	int n; 
	cout << "Enter number of disks: " << endl;
	cin >> n; // Number of disks
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
	return 0;
}





//TASK 4:
#include <iostream>
using namespace std;

struct Car
{
	char carName[20];
	char carModel[20];
	int yearModel;
	double cost;
};

int main()
{
	Car c1 = { "TOYOTA", "MUSTANG", 2000, 25000 };  //Initializing 
	Car c2 = { "HONDA", "CIVIC", 2008, 30000 };
	cout << "CAR 1: " << endl;
	cout << "NAME:  "<< c1.carName << endl;
	cout << "MODEL:  " << c1.carModel << endl;
	cout << "YEAR:  " << c1.yearModel << endl;
	cout << "COST:  " << c1.cost << endl << endl;

	cout << "CAR 2: " << endl;
	cout << "NAME:  " << c2.carName << endl;
	cout << "MODEL:  " << c2.carModel << endl;
	cout << "YEAR:  " << c2.yearModel << endl;
	cout << "COST:  " << c2.cost << endl;

	if (c1.cost > c2.cost)
	{
		cout << c1.carName << " "<< c1.carModel << " is expensive than " << c2.carName << " " << c2.carModel << endl;
	}
	else
	{
		cout << c2.carName << " "<< c2.carModel << " is expensive than " << c1.carName <<  " " << c1.carModel << endl;
	}
}





//TASK 5:
#include <iostream>
using namespace std;

struct Distance
{
	int feet;
	int inches;
};

int main()
{
    Distance d1, d2, d3; 
    cout << "Enter feet: "; //Taking input of first distance 
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inches;

    d2 = { 10, 5 }; //initializing second distance

    d3.feet = d1.feet + d2.feet; //initializing third distance
    d3.inches = d1.inches + d2.inches;

    // changing to feet if inch is greater than 12
    if (d1.inches > 12)
    {
        // extra feet
        int extra = d1.inches / 12;

        d1.feet += extra;
        d1.inches -= (extra * 12);
        cout << "DISTANCE 1: " << d1.feet << "." << d1.inches << endl;
    }
    else
    {
        cout << "DISTANCE 1: " << d1.feet << "." << d1.inches << endl;
    }

    if (d3.inches > 12)
    {
        // extra feet
        int extra = d3.inches / 12;

        d3.feet += extra;
        d3.inches -= (extra * 12);
        cout << "DISTANCE 3: " << d3.feet << "." << d3.inches << endl;
    }    
    else
    {
        cout << "DISTANCE 3: " << d3.feet << "." << d3.inches << endl;
    }
}





//TASK 6:
#include <iostream>
using namespace std;

struct machine
{
	string name;
	float cost;
	int number;
};
int main()
{
	machine* cola = new machine;
	machine* rootBeer = new machine;
	machine* grapeSoda = new machine;
	machine* creamSoda = new machine;

	cola->name = "Cola";
	cola->cost = .75;
	cola->number = 20;

	rootBeer->name = "Root Beer";
	rootBeer->cost = .75;
	rootBeer->number = 20;

	grapeSoda->name = "Grape Soda";
	grapeSoda->cost = .80;
	grapeSoda->number = 20;

	creamSoda->name = "Cream Soda";
	creamSoda->cost = .80;
	creamSoda->number = 20;

	int n;
	float amount, profit = 0;
	cout << "Enter Drink No: " << endl;
	cout << "1. Cola" << endl;
	cout << "2. Root Bear" << endl;
	cout << "3. Grape Soda" << endl;
	cout << "4. Cream Soda" << endl;
	cout << "5. Exit" << endl;
	cin >> n;

	if (n == 1)
	{
		if (cola->number > 0)
		{
			cout << "Cola is $0.75" << endl;
			cout << "Enter amount: ";
			cin >> amount;
			if (0 < amount < 1)
			{

			}
			else
			{
				cout << "Invalid amount. Enter again!";
				cin >> amount;
			}
			amount -= 0.75;
			profit += 0.75;
			cout << "Your change is: " << amount << endl;
			cola->number--;
		}
		else
		{
			cout << "Ypur Drink is out of stock!" << endl;
			main();
		}
	}

	if (n == 2)
	{
		if (rootBeer->number > 0)
		{
			cout << "Cola is $0.75" << endl;
			cout << "Enter amount: ";
			cin >> amount;
			if (0 < amount < 1)
			{

			}
			else
			{
				cout << "Invalid amount. Enter again!";
				cin >> amount;
			}
			amount -= 0.75;
			profit += 0.75;
			cout << "Your change is: " << amount << endl;
			rootBeer->number--;
		}
		else
		{
			cout << "Your Drink is out of stock!" << endl;
			main();
		}
	}

	if (n == 3)
	{
		if (grapeSoda->number > 0)
		{
			cout << "Cola is $0.80" << endl;
			cout << "Enter amount: ";
			cin >> amount;
			if (0 < amount < 1)
			{

			}
			else
			{
				cout << "Invalid amount. Enter again!";
				cin >> amount;
			}
			amount -= 0.80;
			profit += 0.80;
			cout << "Your change is: " << amount << endl;
			grapeSoda->number--;
		}
		else
		{
			cout << "Your Drink is out of stock!" << endl;
			main();
		}
	}

	if (n == 4)
	{
		if (creamSoda->number > 0)
		{
			cout << "Cola is $0.80" << endl;
			cout << "Enter amount: ";
			cin >> amount;
			if (0 < amount <  1)
			{

			}
			else
			{
				cout << "Invalid amount. Enter again!";
				cin >> amount;
			}
			amount -= 0.80;
			profit += 0.80;
			cout << "Your change is: " << amount << endl;
			creamSoda->number--;
		}
		else
		{
			cout << "Your Drink is out of stock!" << endl;
			main();
		}
	}

	if (n == 5)
	{
		exit(0);
	}

	cout << "Total Profit is: $" << profit;
}





//TASK 7:
#include<iostream>
using namespace std;
int main()
{
	int a,c;
	int* b;
	cout << "enter value: " << endl;
	cin >> a;
	b = &a;
	c = *b;
	cout << c << endl;
	system("pause");
	return 0;
}
 




//TASK 8:
#include<iostream>
using namespace std;
int main()
{
	int arr[10], counter = 0, arr1[10] = { 0 }, a = 0;
	cout << "enter your array: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> *(arr+i);
	}
	cout << "your array is: ";
	for (int i = 0; i < 10; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl << "Number having greater number than themselves: ";
	for (int i = 0; i < 10; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			if (*(arr + i) < *(arr + j))
			{
				counter++;
			}
		}
		if (counter >= 2)
	
		{
			cout << *(arr + i) <<" ";
		}
		counter = 0;
	}
	system("pause");
	return 0;
}
 




//TASK 9:
#include<iostream>
using namespace std;
int main()
{
	int arr[10],temp=0;
	cout << "enter your array: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> *(arr+i);
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j <= 5; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		for (int i = 10; i > 5; i--)
		{
			for (int j = i-1; j >=5; j--)
			{
				if (arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i];
	}
	system("pause");
	return 0;
}