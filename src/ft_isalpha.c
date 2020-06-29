int	ft_isalpha(int c)
{
	if (c >= 65 && c < 123)
	{
		if (!(c >= 91 && c <= 96))
			return 1;
	}
	return 0;
}
