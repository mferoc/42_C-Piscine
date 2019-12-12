unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;

    len = 0;
    while (*src != '\0' && len < size)
	{
		*dest = *src;
		src++;
		dest++;
        len++;
	}
	*dest = *src;
	return (len);
}
