#include <stdlib.h>
#include <stdio.h>

int ft_len(int nb)
{
	long n;
	int	len;

	n = nb;
	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long nb;
	int len;
	int i;
	char *str;

	len = ft_len(n) - 1;
	i = 0;
	nb = n;
	str = malloc(sizeof(char) * ft_len(n) + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[i] = '-';
		nb = -nb;
		i++;
	}
	while (i <= len)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

int main ()
{
	printf("%s\n", ft_itoa(13268));
}