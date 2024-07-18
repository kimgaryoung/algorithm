#include<iostream>
using namespace std;

int main()
{

	int n, x, y;
	cin>>n;
	
	int arr[20][20] = {};

	for (int i = 0; i <n; i++)
	{
		cin >> x >> y;
		arr[x][y] = 1;
	}


	for (int i = 1; i <20; i++)
	{
		for (int j = 1; j < 20; j++)
		{
			cout << arr[i][j]<<" ";
		}
		cout << "\n";
	}




}