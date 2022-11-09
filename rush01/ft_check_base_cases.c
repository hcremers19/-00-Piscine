void	ft_turn_90(int (*tab)[6]);
void	ft_initiate_clues(int (*tab)[6])
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
				tab[i][j] = 91111;
			j++;
		}
		i++;
	}
}

void	ft_default(int (*tab)[6], int i, int j)
{
	while (i + 1 < 5)
	{
		tab[j][i + 1] = i + 1;
		i++;
	}
}

void	ft_check(int (*tab)[6])
{
	int	index;

	index = 1;
	while (index < 5)
	{
		if (tab[index][0] == 4 && tab[index][5] == 1)
			ft_default(tab, 0, index);
		if (tab[index][0] == 3 && tab[index][5] == 2)
			tab[index][3] = 4;
		if (tab[index][0] == 1)
			tab[index][1] = 4;
		if (tab[index][0] == 1 && tab[index][5] == 2)
		{	
			tab[index][1] = 4;
			tab[index][4] = 3;
		}
		index++;
	}
}

void	ft_check_base_cases(int (*tab)[6])
{
	int	i;

	i = 1;
	ft_initiate_clues(tab);
	while (i < 5)
	{
		ft_check(tab);
		ft_turn_90(tab);
		i++;
	}
}
