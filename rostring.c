#include <unistd.h>
#include <stdlib.h>

void	rostring(char *str)
{
	int i= 0;
	int start;
	int end;
	int flag = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while ((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '\t' && str[i + 1] == '\t'))
			i++;
		if (str[i] == ' ' || str[i] == '\t')
		{
			flag = 1;
		}
		write(1, &str[i], 1);
		i++;
	}
	if (flag)
		write(1, " ", 1);
	while (start < end)
	{
		write (1, &str[start], 1);
		start++;
	}
}
int main (int ac, char **av)
{
	if (ac > 1 && av[1][0])
	{
		rostring(av[1]);
	}
	write(1, "\n", 1);
}