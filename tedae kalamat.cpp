#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char a[100];
	int b[100];
	cout << "please enter sentence:";
	cin.get(a, 100);
	int k = 0, j = 0;
	for (int i = 0;a[i];i++)
	{
	
		if (a[i] == ' ')
		{
			b[j] = k;
			k = -1;
			j++;
		}
		k++;
	}
	cout << j++ << endl;
	for (int i = 0;i<j-1;i++)
	{
		cout << b[i] << ",";
	}

}

