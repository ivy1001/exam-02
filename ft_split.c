#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (i < n && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s1);
}
char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int len = ft_strlen (str);
	int wordcount = 0;
	char **result;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wordcount++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
				i++;
	}
	result = malloc(sizeof(char *) * (wordcount + 1));
	if (result == NULL)
		return(NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
				i++;
		if  (i > j)
		{
			result[k] = malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(result[k++], &str[j], i - j);
		}
	}
	result[k] = NULL;
    return result;
}
