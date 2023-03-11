#include <unistd.h>

void roostring(char *str)
{
	int i;
	int end;
	int start;
	int flag;
	i = 0;

	while (str[i] == ' '|| str[i] == '\t')
		i++;
	start = i;
	while (str[i] && (str[i] != ' '&& str[i] != '\t') )//skip 1st word
		i++;
	end = i;
	while (str[i] == ' '|| str[i] == '\t')// for the space after the first word
		i++;
	while (str[i])
	{
		while((str[i] == ' ' && str[i + 1] == ' ') || (str[i] == '\t' && str[i + 1] == '\t'))
			i++;
		if(str[i] == ' ' || str[i] == '\t')
			flag = 1;
		write(1, &str[i], 1);
		i++;
	}
	if (flag != 0 && flag != start)
        write(1, " ", 1);
    while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}
int main (int ac, char **av)
{
	if (ac > 1)
	{
		roostring(av[1]);
	}
	write(1, "\n", 1);
}	