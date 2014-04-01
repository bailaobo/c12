#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strcpy1(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* tmp = dest;
	while((*dest++ = *src++) != '\0');
	return tmp;
}

char* my_strcpy2(char* dest, const char* src)
{
	assert(dest != NULL && src != NULL);
	char* s = (char*) src;
	long delt = dest - src;
	while((s[delt] = *s++) != '\0');
	return dest; 
}

int main(void)
{
	char* a = "abcd";
	char b[5];
	char c[5];
	char d[5];
	
	strcpy(b, a);
	my_strcpy1(c, a);
	my_strcpy2(d, a);

	printf("b = %s, c = %s, d = %s\n", b, c, d);
	return 0;

}
