#include<stdio.h>
#include<wchar.h>
#include<locale.h>

int main()
{
	char a[] = "hello world";
	char *b = "wmsj100 haha";
	wchar_t c = L'中';
	wchar_t d = L'国';
//	puts(a);
//	printf("%s %s", a, b);
	setlocale(LC_ALL, "zh_CN");
	putwchar(d);
	wprintf(L"%lc %lc", c,d);
	return 0;

}
