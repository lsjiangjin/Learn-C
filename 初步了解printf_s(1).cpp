#include <stdio.h>

int main()
{
	int ch;

	for (ch = 75; ch <= 100; ch++) {
		printf_s("ASCII 值 = %d, 字符 = %c\n", ch, ch);
	}

	return(0);
}
