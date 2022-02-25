#include <stdio.h>
#include <string.h>
void get_next(int* next, char* p)
{
	next[0] = -1;
	int k = -1;
	int j = 0;
	while (j < strlen(p)-1)
	{
		if (k == -1 || p[j] == p[k])
		{
			j++;
			k++;
			next[j] = k;
		}
		else
			k = next[k];
	}
}
void kmp_search(char* t, char* p, int* next)
{
	int m = strlen(t);
	int n = strlen(p);
	int i = 0;
	int j = 0;
	while (i<m)
	{
		if (j == n - 1 && t[i] == p[j])
		{
			printf("%d\n", i - j);
			j = next[j];
		}
		if (t[i] == p[j])
		{
			i++; j++;
		}
		else
		{
			j = next[j];
			if (j == -1)
			{
				i++; j++;
			}
		}
	}
}
int main()
{
	int i = 0;
	char* p = "ababcabaa";
	char* t = "abababcabaaab";
	int next[9];
	get_next(next, p);
	//for (i; i < 9; i++)
	//{
	//	printf("%d ", next[i]);
	//}
	kmp_search(t, p, next);
	return 0;
}