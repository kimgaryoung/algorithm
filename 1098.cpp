#include<iostream>
using namespace std;

int main()
{

	int h, w, n, l, d, x, y;
	int arr[100][100] = {};

	cin >> h >> w;
	for (int i = 1; i <= w; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			arr[j][i] = { 0 };
		}
	}

	cin >> n;


	for (int i = 1; i <= n; i++)
	{
		//input
		cin >> l >> d >> x >> y;


		for (int j = 1; j <= l; j++)
		{
			//d가 가로가 0
			if (d == 0 )
			{
				
				arr[y][x] = 1;
				y++;
			}
			//d가 세로가 1
			else if (d == 1 )
			{
				
				arr[y][x] = 1;
				x++;
			}
		

		}

	}

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{

			cout << arr[j][i] << " ";

		}
		cout << endl;
	}

}




