void	ft_turn_90(int (*tab)[6]);

void	ft_update_clues(int (*tab)[6], int i, int cas)
{
	int	j;
	int	condition;

	j = 1;
	while (j < 5)
	{
		condition = (tab[i][j] % (cas * 10) / cas);
		if (condition == 1 && tab[i][j] != 1)
			tab[i][j] -= cas;
		j++;
	}
}

void	ft_check_exist(int (*tab)[6])
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			if (tab[i][j] == 4)
				ft_update_clues(tab, i, 1000);
			if (tab[i][j] == 3)
				ft_update_clues(tab, i, 100);
			if (tab[i][j] == 2)
				ft_update_clues(tab, i, 10);
			if (tab[i][j] == 1)
				ft_update_clues(tab, i, 1);
			j++;
		}
		i++;
	}
}

void	ft_deduction(int (*tab)[6])
{
	int	i;

	i = 1;
	while (i < 5 )
	{
		ft_check_exist(tab);
		ft_turn_90(tab);
		i++;
	}
}
