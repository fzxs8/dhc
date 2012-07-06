#include <stdio.h>

void newline(void);
void threeline(void);
int main(void)
{
	printf("天朝 你好!:\n");
	threeline();
	printf("换了三行.\n");
	threeline();
	return 0;
}

void newline(void)
{
	printf("华丽的换行=============\n");
}

void threeline(void)
{
	newline();
	newline();
	newline();
}

