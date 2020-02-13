#include<stdio.h>
#include<string.h>
void reverse(char* s, int left, int right)
{
	while (left < right)
	{
		char tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		left++;
		right--;
	}
}
int compress(char* chars, int charsSize) {
	if (charsSize < 2)
		return charsSize;
	int ret = 0;
	for (int i = 0; i < charsSize; i++)
	{
		int count = 1;
		int c = chars[i];
		while ((i < charsSize - 1) && chars[i] == chars[i + 1])
		{
			count++;
			i++;
		}
		chars[ret++] = c;
		if (count == 1)
			continue;
		int sum = 0;
		int left = ret;
		while (count > 9)
		{
			int tmp = count % 10;
			count /= 10;
			chars[ret++] = tmp + '0';
			sum++;
		}
		chars[ret++] = count + '0';
		reverse(chars, left, left + sum);
	}
	return ret;
}
int main()
{
	char s[] = "abbbbbbbbbbbb";
	printf("%d\n", compress(s, 13));
	printf("%s", s);
	return 0;
}