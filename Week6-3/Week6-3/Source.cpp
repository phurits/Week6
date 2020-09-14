#include<iostream>
using namespace std;
int wordlen(char* ptr);

int main()
{
	char a[999];
	cin >> a;
	int i = 0, k = 0;
	int n = wordlen(&a[0]);
	int x = 0;
	while (x <= n)
	{
		if (a[x] >= 48 && a[x] <= 57)
		{
			cout << a[x];
			k =  k +(a[x]-48);
			i++;
		}
		else if (i > 0)
		{
			printf(" = %d  ", k);
			k = 0;
			i = 0;
		}
		x++;
	}
	return 0;
}


int wordlen(char* ptr)
{
	int a = 0;
	while (ptr[a] != '\0')
	{
		a++;
	}
	return a;
}
