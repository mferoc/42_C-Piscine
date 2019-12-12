#include <stdio.h>

int		ft_strlcat(char *dest, char *src, int size);

int main () {
   char str1[] = "romario no aquario";
   char str2[] = "aquariano";

   printf("FT_STRLCAT:::: %d\n\n", ft_strlcat(str1, str2, 10));
   
   return(0);
}
