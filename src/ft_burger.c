
#include "libft.h"

char	*ft_burger(const char *s1, char c, const char *s2)
{
	char *ret;
	char *tmp;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	tmp = ret;
	if (!ret)
		exit(1);
	while (*s1)
		*tmp++ = *s1++;
	*tmp++ = c;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = 0;
	return(ret);
}
