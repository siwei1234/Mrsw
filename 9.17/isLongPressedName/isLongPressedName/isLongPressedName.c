#include<stdio.h>
int isLongPressedName(char * name, char * typed) {
	while (*name && *typed)
	{
		if (*name == *typed)
		{
			name++;
			typed++;
		}
		else
		{
			typed++;
		}
	}
	if (!*name)
		return 1;
	return 0;
}
int main()
{
	char* name = "peter";
	char* typed = "ppetteerr";
	printf("%d", isLongPressedName(name, typed));
	return 0;
}