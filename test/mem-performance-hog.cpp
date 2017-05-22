#include <iostream>
using namespace std;


void memcache(int mem[], unsigned int len)
{
	std::cout << "cache start..." << std::endl;
	for(unsigned int i = 0; i < len; i++)
		mem[i] = i;
}

void memrandom(int mem[], unsigned int len)
{
	std::cout << "random start..." << std::endl;
	for(unsigned int i = 0; i < len; i++)
		mem[i%len] = i;
}

int main(int ac, char** av)
{
	std::cout << av[1] << std::endl;
	const unsigned int len = 10000;
	int a[len] = {0};
	if(strcmp(av[1], "cache") == 0)
		memcache(a, len);
	else if (strcmp(av[1] == "random") == 0)
		memrandom(a, len);
	return 0;
}
