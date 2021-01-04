int	ft_isalpha(char c);

int	ft_isdigit(char c);

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}

