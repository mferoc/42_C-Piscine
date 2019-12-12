#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (unsigned char)s1[i] == (unsigned char)s2[i]
			&& i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);

}


int main() {
	printf("%d\n\n", ft_strncmp("matheusadsf0", "matheus\0", 10));
	printf("%d\n\n", strncmp("matheusadsf\0", "matheus\0", 10));
}
