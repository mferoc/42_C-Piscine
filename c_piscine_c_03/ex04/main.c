#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main () {
   char *haystack = "romario no aquario";
   char *needle = "no";

   printf("Achou:::: %s\n\n", ft_strstr(haystack, needle));
   
   return(0);
}
