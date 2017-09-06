#include<iostream>

using namespace std;

int arr[1001][3];
int dp[1001][3];

int Color(int num, int color)
{
	if (num == 1)
	{
		dp[1][color] = arr[1][color];
		
		return dp[1][color];
	}

	int a = 0;
	int b = 0;

	if (color == 0)
	{
		a = Color(num - 1, 1) + arr[num][0];
		b = Color(num - 1, 2) + arr[num][0];
	}

	if (color == 1)
	{
		a = Color(num - 1, 0) + arr[num][1];
		b = Color(num - 1, 2) + arr[num][1];
	}

	if (color == 2)
	{
		a = Color(num - 1, 0) + arr[num][2];
		b = Color(num - 1, 1) + arr[num][2];
	}

	if (a > b)
	{
		dp[num][color] = b;
	}
	else {
		dp[num][color] = a;
	}
	
	return dp[num][color];
}

int main()
{
	int num = 0;
	cin >> num;

	for (int i = 1; i < num+1; i++)
	{
		cin >> arr[i][0];
		cin >> arr[i][1];
		cin >> arr[i][2];
	}

	int min = Color(num, 0);
	for (int i = 0; i < 3; i++)
	{
		if (min > Color(num, i))
		{
			min = Color(num, i);
		}
	}
	cout << min << endl;
}
