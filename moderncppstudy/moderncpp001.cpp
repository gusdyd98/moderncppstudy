#include<iostream>
#include<string>

using namespace std;

int main()
{
	int nNum;

	int nDiv1 = 3;
	int nDiv2 = 5;

	int nSum=0;

	string sInputNum="";

	cout << "���ڸ� �Է��ϼ���. 1���� �ش� ���ڱ��� " << nDiv1 << " �Ǵ� " << nDiv2 << " �� ������ �������� ���ڵ��� ���� �����ְڽ��ϴ�.: ";
	cin >> nNum;

	nSum = 0;
	for (int i = 1; i <= nNum; i++)
	{
		if (i % nDiv1 == 0 || i % nDiv2 == 0)
		{
			nSum += i;

			sInputNum += to_string(i) + " ";
		}
	}

	cout << "�Է��� ���� " << nNum << "���� " << nDiv1 << " �Ǵ� " << nDiv2 << " �� ������ �������� ���ڵ��� ������ �����ϴ�." << endl;
	cout << "  : " << sInputNum << endl;
	cout << "�� ���ڵ��� �� : " << nSum << endl;

	return 0;

}