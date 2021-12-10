//TASK 7:
#include <iostream>
using namespace std;
int main()
{
	int row;
	cout << "Enter number of row of matrix: ";
	cin >> row;
	int* ptr = new int[row];   //array to store number of columns in each row;
	//declaration of array
	int** arr = new int* [row];   

	for (int i = 0; i < row; i++)
	{
		cout << "Enter number of colomns in row " << i << ": ";
		cin >> ptr[i];
		arr[i] = new int[ptr[i]];
	}

	//Input values in array
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < ptr[i]; j++)
		{
			cout << "Row " << i << ":- Enter value " << i * ptr[i] + j << ": ";
			cin >> arr[i][j];
		}
	}

	//Output values of array
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < ptr[i]; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
} 