#include <unistd.h>
void	repeatalpha(char *str)
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <='Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				j = str[i] - '0';
				c = j - '0';
				j = c;
			}
			else if (str[i] >= 'A' && str[i] <='Z')
			{
				j = str[i] - '0';
				c = j + ' ';
				j = c - '0';
			}
			while (j)
			{
				write (1, &str[i], 1);
				j--;
			}
		}
		else
			write (1, &str[i], 1);
		i++;
	}
	
}
int main(int ac, char **av)
{
    if (ac == 2)
        repeatalpha(av[1]);
    write(1, "\n", 1);
    return (0);
}