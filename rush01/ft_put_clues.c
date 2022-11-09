void	ft_put_clues(int (*tab)[6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (tab[i][j] == 0)
				tab[i][j] = 1111;
			j++;
		}
		i++;
	}
}
