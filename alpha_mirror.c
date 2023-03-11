#include <unistd.h>
void	alphamirror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - str[i] + 'A';
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a';
		write(1, &str[i], 1);
		i++;
	}
	write (1,"\n",1);
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		alphamirror(&av[1][i]);
	}
}