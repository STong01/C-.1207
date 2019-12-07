#include <iostream>
#include <algorithm>
using namespace std;

//判断a，b，c三边能否构成一个三角形
void test1(double a, double b, double c)
{
	if (a > b && a > c)
	{
		if (b <= c)
		{
			double tmp = b;
			b = c;
			c = tmp;
		}
	}
	else
	{
		double p = a;
		double q = min(b, c);
		a = max(b, c);
		b = max(p, q);
		c = min(p, q);
	}

	double M = b + c;
	double N = a;
	if (M > N)
	{
		cout << "Yes"<<endl;
	}
	else
		cout << "No"<<endl;
	
}

void test2(double a, double b, double c)
{
	if (a + b > c && b + c > a && a + c > b)
	{
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;

}

int main()
{
	double a, b;
	double c;
	while (cin >> a >> b >> c)
	{
		test2(a, b, c);
	}

	system("pause");
	return 0;
}