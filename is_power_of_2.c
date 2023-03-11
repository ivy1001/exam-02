int	    is_power_of_2(unsigned int n)
{
	unsigned int i;
	i = 1;
	if (n == 1)
		return(1);
	while (i <= n / 2)
	{
		if (i == n / 2)
			return(1);
		i = i * 2;
	}
	return(0);
}
int main()
{
	printf("%d\n", is_power_of_2(1));
}