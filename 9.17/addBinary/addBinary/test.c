#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * addBinary(char * a, char * b) {
	int La = strlen(a);
	int Lb = strlen(b);
	int asum = 0, bsum = 0, sum = 0;
	int prev = 0;
	int len = La > Lb ? La : Lb;
	char* ret = (char*)malloc(len + 2);
	ret[len + 1] = '\0';
	for (--La, --Lb; len >= 0; La--, Lb--, len--)
	{
		if (La < 0)
			asum = 0;
		else
			asum = a[La] - '0';
		if (Lb < 0)
			bsum = 0;
		else
			bsum = b[Lb] - '0';
		sum = asum + bsum + prev;
		prev = sum / 2;
		ret[len] = sum % 2 + '0';
	}
	if (ret[0] == '0')
		return &ret[1];
	return ret;
}
int main()
{
	char* a = "11101";
	char* b = "1101";
	char* ret = addBinary(a, b);
	printf("%s", ret);
	return 0;
}