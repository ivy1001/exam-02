#include <unistd.h>

void	filter(char *str)
{
	int i = 0;
	int j;
	int k;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				k = j;
				while (str[k])
				{
					str[k] = str[k + 1];
					k++;
				}
				j--;
			}
			j++;
		}
		i++;
	}
}
void	inter(char *s1, char *s2)
{
	int i = 0;
	int j;
	filter(s1);
	filter(s2);
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				write(1, &s1[i], 1);
			j++;
		}
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	write(1, "\n", 1);
}