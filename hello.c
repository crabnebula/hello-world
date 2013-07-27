#include <stdio.h>
#include <config.h>

int main(void)
{
	puts("hello,world!");
	puts("this is " PACKAGE_STRING ".");
	return 0;
}
