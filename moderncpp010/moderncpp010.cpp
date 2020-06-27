// moderncpp010.cpp : 십진수 -> 이진수 -> 그레이코드 -> 복호화된 그레이코드 구현 프로그램
//     이진수화 : binary

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int find_max_bit(int n)
{
    int i = 0;
    int nTmpNum = 0;
    int nMaxJisu = 0;
    int ret = 0;

    nTmpNum = n;
    while (nTmpNum >= 1)
    {
        nMaxJisu++;

        nTmpNum = (int) (nTmpNum / 2);
    }

    ret = (int) nMaxJisu;

    return ret;
}

std::vector<int> binary_factors(int n)
{
    std::vector<int> factors;

	cout << "find_max_bit : " << find_max_bit(n) << endl;

    factors.reserve(find_max_bit(n));

    int bi_Num;
    for (int i = 0; i < find_max_bit(n) ; i++)
    {
        bi_Num = n >> i & 0x1;
        cout << bi_Num;
        factors.push_back(bi_Num);
        cout << " : size : " << factors.size() << endl;
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


    auto factors = binary_factors(nNum);

    cout << "factors.size() = " << factors.size() << endl;

    cout << "입력한 수 " << nNum << " 의 이진수 = ";

//    for (auto it = factors.begin(); it != factors.end(); ++it)
//        cout << ' ' << *it;
//    cout << endl;

    vector<int>::size_type iter;
    for (iter = factors.size() - 1; (int)iter >= 0; iter--)
    {
        cout << factors[iter] << " ";
    }
    cout << endl;


    cout << "입력한 수 " << nNum << " 의 그레이코드 = ";

    vector<int> gray_factors;

    for (iter = factors.size() - 1; (int)iter >= 0; iter--)
    {
        if (iter == factors.size() - 1)
        {
            gray_factors.push_back(factors[iter]);
            cout << factors[iter] << " ";
        }
        if (iter < factors.size() - 1)
        {
            gray_factors.push_back(factors[iter + 1] ^ factors[iter]);
            cout << (factors[iter + 1] ^ factors[iter]);
        }
    }
    cout << endl;

    for (iter = 0 ; iter < gray_factors.size() ; iter++)
    {
        cout << gray_factors[iter] << " ";
    }
    cout << endl;

    cout << "입력한 수 " << nNum << " 의 그레이코드 복호화 = ";

    vector<int> gray_to_bin_factors;

    for (iter = 0;  iter < gray_factors.size(); iter++)
    {
        if (iter == 0 )
        {
            gray_to_bin_factors.push_back(gray_factors[iter]);
            cout << gray_factors[iter] << " ";
        }
        if (iter > 0 && iter < gray_factors.size() )
        {
            gray_to_bin_factors.push_back(gray_to_bin_factors.back() ^ gray_factors[iter]);
            cout << (gray_to_bin_factors.back());
        }
    }
    cout << endl;

    for (iter = 0 ; iter < gray_to_bin_factors.size(); iter++)
    {
        cout << gray_to_bin_factors[iter] << " ";
    }
    cout << endl;

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
