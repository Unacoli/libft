int ft_isprint(char c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}
