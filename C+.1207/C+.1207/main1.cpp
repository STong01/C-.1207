#include <iostream>
#include <vector>
using namespace std;


//����֮�е�Ԫ�س��ִ����������鳤�ȵ�һ��
class Gift {
public:
	int getValue(vector<int> gifts, int n) 
	{
		if (gifts.size() == 0)
		{
			return 0;
		}

		else if (gifts.size() < n)
		{
			return 0;
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n - 1 - i; j++)
				{
					if (gifts[j] > gifts[j + 1])
					{
						int tmp = gifts[j];
						gifts[j] = gifts[j + 1];
						gifts[j + 1] = tmp;
					}
				}
			}

			int sum = 0;
			for (int i = 0; i < n; i++)
			{
				if (gifts[i] == gifts[n / 2])
				{
					sum += 1;
				}
			}

			if (sum >(n / 2))
			{
				return gifts[n / 2];
			}
			else
				return 0;
		}
	}
};

int main1()
{

	system("pause");
	return 0;
}
