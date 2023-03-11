#include <unistd.h>

int	 ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
void	revprint(char *str)
{
	int i;
	i = ft_strlen(str) - 1;
	while(str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
}
int main (int ac, char **av)
{
	if (ac == 2)
	{
		revprint(av[1]);
	}
	write(1, "\n", 1);
}