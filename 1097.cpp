#include<iostream>
using namespace std;



int main()
{

	int n,a,b;
	int arr[20][20] = {};

	//cin
	for (int i = 1; i <=19; i++)
	{
		for (int j = 1; j <=19; j++)
		{
			cin >> arr[i][j];

		}
	}

	//swap


	cin >> n;

	for (int k = 1; k <= n; k++)
	{
		cin >> a >> b;
		for (int i = 1; i <=19; i++)
		{
			if (arr[a][i] == 0) { arr[a][i] = 1; }
			else if (arr[a][i] == 1) { arr[a][i] = 0; }

		}

		for (int i = 1; i <=19; i++)
		{
			if (arr[i][b] == 1) { arr[i][b] = 0; }
			else if (arr[i][b] == 0) { arr[i][b] = 1; }

		}


	}
		//print
		for (int i = 1; i <= 19; i++)
		{
			for (int j = 1; j <= 19; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}
	
}









