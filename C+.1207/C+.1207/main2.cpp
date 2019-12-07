#include <iostream>
#include<vector>
using namespace std;

//最大连续子数组之和
void test(int n, vector<int>p)
{
	int tmp = p[0];
	int sum = 0;

	for (int i = 0; i < p.size(); i++)
	{
		sum += p[i];

		if (sum > tmp)
			tmp = sum;

		if (sum < 0)
			sum = 0;

	}

	cout << tmp << endl;
}

int main2()
{
	int n;
	vector<int> p;

	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			p.push_back(tmp);
		}

		test(n, p);
	}
	

	
	system("pause");
	return 0;
}