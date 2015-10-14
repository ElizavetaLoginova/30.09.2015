#include <iostream>
using namespace std;
int main()
{
	while (true)
	{
		double sum = 0;
		long long n;
		while (true)
		{
			cout << "Enter your number: " << endl;
			cin >> n;
			if (n > 0) break;
			cout << "Error!" << endl;
		}

		int k;
		while (true)
		{
			cout << "Enter number for replacing: " << endl;
			cin >> k;
			if (k > 0 && k < 10) break;
			cout << "Error!" << endl;
		}

		int p;
		while (true)
		{
			cout << "Enter number to be replaced: " << endl;
			cin >> p;
			if (p > 0 && p < 10) break;
			cout << "Error!" << endl;
		}

		int a = n % 10;

		while (n)
		{
			if (a == p)
				a = k;
			else
				a = a;

			sum = a + sum*10;
			n = n / 10;
		}
	

	cout << "Result is: " << sum;

	system("pause");
	system("cls");
	}
return 0;
}