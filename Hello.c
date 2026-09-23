#include <stdio.h>
int main(void)
{
	greeting(“Developer A,B,C !!”);
	return 0;
}
//pring a greeting
int greeting(const char *name)
{
	printf("Hello, %s!\n", name);
	return 0;
}

