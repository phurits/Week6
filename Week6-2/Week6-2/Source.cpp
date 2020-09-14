#include<iostream>
using namespace std;
int wordlen(char* ptr);

int main()
{
	char a[999];
	cin >> a;
	int n = wordlen(&a[0]);
	int x = 0;
	int j = 0;
	while (x < n)
	{
		if (a[x] >= 48 && a[x] <= 57)
		{
			cout << a[x];
			j++;
		}
		else if (j > 0)
		{
			cout << "  ";
			j = 0;
		}
		x++;
	}
	return 0;
}

int wordlen(char* ptr)
{
	int b = 0;
	while (ptr[b] != '\0')
	{
		b++;
	}
	return b;
}