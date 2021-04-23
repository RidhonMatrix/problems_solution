#include <iostream>
using namespace std;
void lotto(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				for (int l = k + 1; l < n; l++)
				{
					for (int m = l + 1; m < n; m++)
					{
						for (int o = m + 1; o < n; o++)
						{
							printf("%d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[o]);
						}
					}
				}
			}
		}
	}
}
void input(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int a[50];
	int n;
	int i=1;
	while (cin >> n && n != 0)
	{
		input(a, n);
		if(i!=1) printf("\n");
		i++;
		lotto(a, n);
	}
}
