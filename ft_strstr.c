#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	n;

	n = 0;
	c = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		if (str[c] == to_find[n])
		{
			while ((str[c + n] == to_find[n]) && (to_find[n] != '\0'))
			{
				if (to_find[n + 1] == '\0')
					return (&str[c]);
				n++;
			}
		}
		c++;
	}
	return (str);
}


int        main(void)
{
     char text[] = "please find me";
     char f[] = "";
     printf("%s\n", ft_strstr(text, f));
     printf("strstr: %s", strstr(text, f));
     return (0);
}
