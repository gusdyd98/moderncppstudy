// moderncpp005.cpp : ���� �Ҽ� ¦�� ����ϴ� ���α׷� �����ϱ�
//#���� �Ҽ� ¦? ...
// ���� �Ҽ��� "���̰� 6�� �Ҽ��� ��"�� ���ϴµ� ���� 6�� ����� six����, ��ƾ��� 6�� ���ϴ� sex���� �Դ�.
//
// ������, 5�� ����� ������ 5�� 1���� �Ҽ��̰�, 11�� �Ҽ��̴�.
//
//   11 - 5 = 6�̹Ƿ�(5, 11)�� ���� �Ҽ��� �ȴ�.
//
// ��ó: https://elwlsek.tistory.com/1044 [��¥�� ��¥�� �����]
//

#include <iostream>
#include <numeric>
#include <string>

bool find_sosu(int i);

using namespace std;
int main()
{
    int nNum1;
    int nSoSu1 = 0;
    int nSoSu2 = 0;
    string SexySosu =""; 

    cout << " ���� ������ �Է��ϼ���.(2�̻�) ";
    cin >> nNum1;

    for (int i = 2 ; i<= nNum1; i++)
    {
        if (find_sosu(i) == true)
        {
            nSoSu1 = i;
            for (int j = i + 1; j <= nNum1; j++)
			{
				if (find_sosu(j) == true)
				{
					nSoSu2 = j;

					if (nSoSu2 - nSoSu1 == 6)
					{
						SexySosu += "(" + to_string(nSoSu1) + "," + to_string(nSoSu2) + ")" + "\n";
						break;
					}

				}
			}
        }
    }

    cout << " �־��� �� " << nNum1 << " ���� ���� �� �� ���� �Ҽ����� " << endl << SexySosu << " �Դϴ�." << endl;
}

bool find_sosu(int nCurNum)
{
    int i;
    bool ret = false;
    for (i = nCurNum - 1; i >= 1; i--)
    {
        if (nCurNum % i == 0)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    if (i == 1) ret = true;
    else        ret = false;

    return ret;
}
