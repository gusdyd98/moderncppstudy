//�ִ� ����� ���α׷� �����ϱ�
// : ���� ���� �ΰ��� �־����� ��, �� ���� �ִ������� ����ϰ� ����ϴ� ���α׷��� �ۼ��϶�.
// : �ִ�������?
// : �� ���� ������ �־����� ��, �� ���� ������ ��� �߿� �������� ���� ����� �ְ�, �� �������� ���� ��� �� ���� ū ���� �ִ������Դϴ�.



#include<iostream>
#include<string>

using namespace std;

int main()
{
	int nNum_1=0, nNum_2=0;
	int nMaxNum; 
	int nMaxCommonNum=1; 
	string s_com_num="";

	cout << "���� ���� �ΰ��� �Է����ּ��� (ex. 10 20<����>)" << endl;
	cin >> nNum_1, nNum_2;

	if (nNum_1 < nNum_2)
	{
		nMaxNum = nNum_2;
	}
	else
	{
		nMaxNum = nNum_1;
	}

	for (int i = 1; i <= nMaxNum; i++)
	{
		if (nNum_1 % i == 0 && nNum_2 % i == 0)
		{
			s_com_num += to_string(i);
			if (nMaxCommonNum < i)
			{
				nMaxCommonNum = i;
			}
		}
	}

	cout << "�� ���� " << nNum_1 << " �� " << nNum_2 << "�� �ִ� ������� " << nMaxCommonNum << "�Դϴ�." << endl;
	cout << endl << "�߰���, �� ���� " << nNum_1 << " �� " << nNum_2 << "�� ��������� " << endl << " : " << s_com_num << "�Դϴ�." << endl;

	return 0;
}
