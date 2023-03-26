#include <unistd.h>

void	rot1(char *str)
{
	int i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
			str[i] = str[i] + 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] = str[i] - 25;
		write(1, &str[i], 1);
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac == 2)
	{
		rot1(av[1]);
	}
	write (1, "\n", 1);
}