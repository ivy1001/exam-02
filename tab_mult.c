#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int n = 0;
	int sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return(sign * n);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	int n;
	n  = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + '0');
}
int main (int ac, char **av)
{
	int i;
	int nbr;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(av[1]);
		while (i <=9 )
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i = i + 1;
		}

	}
}