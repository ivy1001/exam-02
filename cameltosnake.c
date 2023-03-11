#include <unistd.h>

void	cameltosnake(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A'  && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
			write(1, "_", 1);
		}
		write(1, &str[i], 1);
		i++;
		
	}
}
int main (int ac, char **av)
{
	if (ac ==2)
	{
		cameltosnake(av[1]);
	}
	write (1, "\n", 1);
}