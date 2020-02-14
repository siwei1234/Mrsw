#include<stdio.h>
#include<string.h>
int judge(char x) {
	int ret = -1;
	if ((x >= 'a' && x <= 'z') || (x >= '0' && x <= '9'))
		ret = (int)x;
	else if (x >= 'A' && x <= 'Z')
		ret = (int)x + 32;
	return ret;
}
int isPalindrome(char * s) {
	int len = strlen(s);
	if (len == 0)
		return 1;
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		while (left <= right && judge(s[left]) == -1)
			left++;
		while (left <= right && judge(s[right]) == -1)
			right--;
		if (left <= right)
		{
			if (judge(s[left]) != judge(s[right]))
				return -1;
			left++;
			right--;
		}
	}
	return 1;
}
int main()
{
	char* s = "A man, a plan, a canal: Panama";
	printf("%d", isPalindrome(s));
	return 0;
}