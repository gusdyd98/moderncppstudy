// moderncpp009_ans.cpp : 소인수 분해하고 소인수 출력하기
//

#include <iostream>
#include <vector>

using namespace std;

std::vector<unsigned long long> prime_factors(unsigned long long n)
{
	std::vector<unsigned long long> factors;

	while (n % 2 == 0)
	{
		factors.push_back(2);
		n = n / 2;
	}

	for (unsigned long long i = 3; i <= std::sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			factors.push_back(i);
			n = n / i;
		}
	}

	if (n > 2)
		factors.push_back(n);

	return factors;
}

int main()
{
	unsigned long long number = 0;

	std::cout << "number:";
	std::cin >> number;
	auto factors = prime_factors(number);

	std::copy(std::begin(factors), std::end(factors), std::ostream_iterator<unsigned long long>(std::cout, " "));

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
