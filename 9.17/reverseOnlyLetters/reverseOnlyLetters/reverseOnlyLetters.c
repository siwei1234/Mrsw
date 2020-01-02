#include<stdio.h>
#include<assert.h>
char * reverseOnlyLetters(char * S) {
	assert(S);
	int left = 0;
	int right = 0;
	while (*S != '\0')
	{
		right++;
		S++;
	}
	S = (S - right);
	right--;
	while (left < right)
	{
		if ((('A' <= S[left] && S[left] <= 'Z') || ('a' <= S[left] && S[left] <= 'z')) && (('A' <= S[right] && S[right] <= 'Z') || ('a' <= S[right] && S[right] <= 'z')))
		{
			char tmp = S[left];
			S[left] = S[right];
			S[right] = tmp;
			left++;
			right--;
		}
		else if (('A' <= S[left] && S[left] <= 'Z') || ('a' <= S[left] && S[left] <= 'z'))
		{
			right--;
		}
		else
		{
			left++;
		}
	}
	return S;
}
int main()
{
	char arr[] = "AaW;c?[";
	reverseOnlyLetters(arr);
	printf("%s", arr);
	return 0;
}