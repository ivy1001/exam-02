#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign  =1;
	long n = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (sign * n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long n;
	n = nb;

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
	ft_putchar (n + '0');
}
int	is_prime(int nb)
{
	int i = 3;
	if (nb <= 1)
		return (0);
	if (nb > 2 && nb % 2 == 0)
		return (0);
	while (i <(nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int sum = 0;
		int nb = ft_atoi(av[1]);
		while (nb > 0)
		{
			if (is_prime(nb--))
				sum += (nb + 1);
		}
		ft_putnbr(sum);
	}
	if (ac != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}