#include <iostream>
using namespace std;

class Solution {
public:
	int Add(int n1, int n2)
	{
		while (n2)
		{
			int p;
			p = n1^n2;                  //异或等于按位相加
			n2 = (n1&n2) << 1;         //按位'与'再左移一位等于求进位
			n1 = p;
		}
		return n1;
	}
};


int main()
{

	system("pause");
	return 0;
}