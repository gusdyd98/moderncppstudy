#pragma once		//
#include <iostream>
#include <string>

class Valid_IPv4
{
private:
	std::string str_ipv4_buffer;

public:
	void   get_ipv4(void);
	void   print_ipv4(void);
	bool   check_valid_ipv4(void);

};
