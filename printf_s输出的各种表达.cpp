#include <stdio.h>
int main()
{
	char ch = 'A';
	char str[20] = "www.runoob.com";
	float flt = 10.234;
	int no = 150;
	double dbl = 20.123456;
	printf_s("字符为 %c \n", ch);
	printf_s("字符串为 %s \n", str);
	printf_s("浮点数为 %f \n", flt);
	printf_s("整数为 %d\n", no);
	printf_s("双精度值为 %lf \n", dbl);
	printf_s("八进制值为 %o \n", no);
	printf_s("十六进制值为 %x \n", no);
	return 0;
}
