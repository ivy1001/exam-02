#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}
char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    int word_count;
    int len;
    char **result;

    i = 0;
    k = 0;
    j = 0;
    len = ft_strlen(str);
    word_count = 0;
    while (i < len)// to count words
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))// we skip white spaces
            i++;
        if (str[i])//count how many words we have
        {
            while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
                i++;
            word_count++;
        }
    }
    result = malloc(sizeof(char*) *(word_count + 1));
    if (result == NULL)
        return(NULL);
      i = 0;
    while (i < len)
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))// we skip white spaces
            i++;
		if (str[i] == '\0')
			break ;
        if (str[i])
        {
            j = i;
            while (str[j] && (str[j] != ' ' && str[j] != '\t' && str[j] != '\n'))
                j++;
            result[k] = malloc(sizeof(char) * (j - i + 1));
            if (result[k] == NULL)
                return(NULL);
            strncpy(result[k], str + i ,j - i);
            result[k][j - i] = '\0';
            i = j;
            k++;
           
        }
    }
    result[k] = NULL;
    return result;
}


int main()
{
	int	i;
	char	**str =ft_split("    ");

	i = 0;
	while (str[i])
	{
		printf("%s \n", str[i]);
		i++;
	}
}