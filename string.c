#include <stdio.h>
#include <string.h>
#include<conio.h>

int main()
{
	char str[20];
	char search[20];
	char *ptr;
	clrscr();
	printf("Enter main string:\n");
	gets(str);
	printf("Enter sub string:\n");
	gets(search);
		/* strstr() function searches the first occurance
	of a sub string in main string
	it return the pointer to it, if found
	*/
	ptr = strstr(str, search);

	if (ptr != NULL) /* Substring found */
	{
		printf("'%s' contains '%s'\n", str, search);
	}
	else /* Substring not found */
	{
		printf("'%s' doesn't contain '%s'\n", str, search);
	}

	getch();
	return 0;
}
