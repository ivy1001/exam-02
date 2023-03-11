#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if(s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}
int main ()
{
	printf("%zu\n", ft_strcspn("i am uwu", "uwu"));
}