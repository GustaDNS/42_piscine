#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_rev_print(char *str)
{
	int i = 0;
	int len;

	len = ft_strlen(str);
	len -= 1;
	while(i < len)
	{
		char temp;
		temp = str[i];
        str[i] = str[len];
        str[len] = temp;
		i++;
		len--;
	}
	return(str);
}

int main()
{
	char str[] = "gustavo";
	ft_rev_print(str);
	printf("%s\n", str);
    return (0);
}