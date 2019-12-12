#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main()
{
	char *string_true = "ApenasCaracteresPermitidos";
	char *string_false = "";

	printf("str_true: %d, str_false: %d", ft_str_is_alpha(string_true), ft_str_is_alpha(string_false));
}	