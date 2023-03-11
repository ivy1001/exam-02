#include <unistd.h>

void	epurstr(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			flag = 1;
		if (!(str[i] == ' ' || str[i] == '\t'))
		{
			if (flag != 0)
			{
				write(1, " ", 1);
			}
			flag = 0;
			write(1, &str[i], 1);
		}
		i++;
	}
}
int main (int ac, char **av)
{
	if (ac == 2)
	{
		epurstr(av[1]);
	}
	write(1, "\n", 1);
}