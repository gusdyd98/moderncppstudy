#include "CValid_IPv4.h"

//using namespace std;

void Valid_IPv4::get_ipv4(void)
{
	std::string str_ip;

	std::cout << "IPv4 형식의 IP를 입력하세요. " << std::endl;
	std::cin  >> str_ip;

	Valid_IPv4::str_ipv4_buffer = str_ip;

	return ; 
}

bool   Valid_IPv4::check_valid_ipv4(void);
{
	bool  ret = true ;
	std::string str_ip;

	return ret;
}

void   Valid_IPv4::print_ipv4(void)
{
	std::cout << Valid_IPv4::str_ipv4_buffer;
	return ;
}
