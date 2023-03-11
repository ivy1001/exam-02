#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *tab;
	int i;
	int n;

	i = 0;
	n = end - start +1;
	if (start > end)
		return (ft_rrange(end, start));
	tab = (int *)malloc (sizeof(int) * n);
	if(tab)
	{
		while (i < n)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	return(tab);
}

int main ()
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 1;
	max = 3;
	size = max - min + 1;
	tab = ft_rrange(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}