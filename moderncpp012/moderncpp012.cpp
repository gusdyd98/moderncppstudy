// moderncpp012.cpp : 가장 긴 콜라츠 수열 출력 프로그램 구현하기
//    콜라츠 수열이란?
//  콜라츠 추측(Collatz conjecture)은 1937년에 처음으로 이 추측을 제기한 로타르 콜라츠의 이름을 딴 것으로 
//  3n+1 추측, 울람 추측, 혹은 헤일스톤(우박) 수열 등 여러 이름으로 불린다. 
//  콜라츠 추측은 임의의 자연수가 다음 조작을 거쳐 항상 1이 된다는 추측이다.
//  
//  짝수라면 2로 나눈다.
//  홀수라면 3을 곱하고 1을 더한다.
//  1이면 조작을 멈추고, 1이 아니면 첫 번째 단계로 돌아간다.
//  예를 들어, 6 에서 시작한다면, 차례로 6, 3, 10, 5, 16, 8, 4, 2, 1 이 된다.
//

#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long long> colartz_num(unsigned long long number)
{
    vector<unsigned long long> factors;

    factors.push_back(number);

    while (number > 1)
    {
        if (number % 2 == 0)
        {
            number = number / 2;
            factors.push_back(number);
        }
        else
        {
            number = number * 3 + 1;
            factors.push_back(number);
        }
    }

    return factors;
}
int main()
{
    unsigned long long num = 1000000; 
    unsigned long long nMaxNum = 0;
    unsigned long long nMaxLength = 0;

    for (unsigned long long i = 1; i <= num; i++)
    {
        auto colartz_suyul=colartz_num(i);
        if (nMaxLength < colartz_suyul.size())
        {
            nMaxLength = colartz_suyul.size();
            nMaxNum    = i; 
        }

    }

    auto colartz_suyul=colartz_num(nMaxNum);
    //auto colartz_suyul=colartz_num(837799);

	std::cout << "가장 긴 콜라츠 수열의 수는 " << nMaxNum << "이고, 수열의 길이는 " << nMaxLength << " 입니다." << endl;

	for (std::vector<unsigned long long>::iterator it = colartz_suyul.begin(); it != colartz_suyul.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
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
