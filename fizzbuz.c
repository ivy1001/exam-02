#include <unistd.h>
void	ft_putchar(char c)
{
		write(1, &c, 1);
}
void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}
void	ft_putnbr_fd(int n)
{
	long	nb;

	nb = n;
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10);
		nb = nb % 10;
	}
	ft_putchar(nb + '0');
}

int main()
{
	int i;
	i = 1;
	while (i <= 100)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			if (i % 3 == 0)
			{
				ft_putstr("fizz");
			}
			if (i % 5 == 0)
			{
				ft_putstr("buzz");
			}
		}
		else
			ft_putnbr_fd(i);
		i++;
		write (1, "\n", 1);
	}
}