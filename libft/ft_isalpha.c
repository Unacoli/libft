int	ft_isalpha(char c)
{
	if (c < 'A' || c > 'z' || (c < 'a' && c > 'Z'))
		return (0);
	else
		return (1);
}
