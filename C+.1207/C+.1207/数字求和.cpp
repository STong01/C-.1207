#include <iostream>
using namespace std;

class Solution {
public:
	int Add(int n1, int n2)
	{
		while (n2)
		{
			int p;
			p = n1^n2;                  //�����ڰ�λ���
			n2 = (n1&n2) << 1;         //��λ'��'������һλ�������λ
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