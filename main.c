#include "libft.h"

int main()
{
	char s1[50], s2[50];
	printf("Enter the first string: ");
	gets(s1);
	printf("Enter the second string: ");
	gets(s2);
	// strcpy(s1, s2);
	// strcat(s1, s2);
	// printf("s1=%s", s1);

	// printf("Length:%d \n", ft_strlen(s1));
	// printf("comparison of s1 and s2: %d", strcmp(s1, s2));
	printf("%s", strstr(s1, s2));

	return 0;
}
