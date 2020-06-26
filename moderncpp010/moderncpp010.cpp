// moderncpp010.cpp : 십진수 -> 이진수 -> 그레이코드 -> 복호화된 그레이코드 구현 프로그램
//     이진수화 : binary

#include <iostream>
#include <string>
#include <vector>

using namespace std;

unsigned long long find_max_bit(unsigned long long n)
{
    int i = 0;
    int nTmpNum = 0;
    int nMaxJisu = 0;
    unsigned long long ret = 0;

    nTmpNum = n;
    while (nTmpNum >= 1)
    {
        nMaxJisu++;

        nTmpNum = (int) (nTmpNum / 2);
    }

    ret = (unsigned long long) nTmpNum;

    return ret;
}

std::vector<unsigned long long> binary_factors(unsigned long long n)
{
    std::vector<unsigned long long> factors;

    int bi_Num;
    for (int i = 0; i < find_max_bit(n) ; i++)
    {
        bi_Num = nNum >> i & 0x1;
        cout << bi_Num;
        factors.push_back(bi_Num);
    }

    return factors;
}

int main()
{
    int nNum;

    cout << "0 ~ 31 중 하나의 수를 입력하세요." << endl;
    cin >> nNum;

    while (nNum < 0 || nNum > 31)
    {
        cout << "입력한 수(" << nNum << ")는 0 ~ 31 의 수가 아닙니다." << endl;
        cout << "0 ~ 31 중 하나의 수를 입력하세요." << endl;
        cin >> nNum;
    }

    int bi_Num;
    int gray_Num;

	auto factors = binary_factors(nNum);

	cout << "입력한 수 " << nNum << " 의 이진수 = ";
    for (int i = 0; i < 5; i++)
    {
        cout << (nNum >> i & 0x1);
    }
    cout << "\n";


	cout << "입력한 수 " << nNum << " 의 그레이코드 = ";
    for (int i = 0; i < 5; i++)
        cout << (nNum >> i & 0x1);
    cout << "\n";
        
    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
