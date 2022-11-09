void	ft_clear_clues(int (*tab)[6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (tab[i][j] / 90000)
				tab[i][j] = 0;
			j++;
		}
		i++;
	}
}
