int	ft_bi_dec(int binary_nbr)
{
	int	nbr;
	int	base;
	int	rem;
	int	temp;

	nbr = 0;
	base = 1;
	temp = binary_nbr;
	while (temp)
	{
		rem = temp % 10;
		temp = temp / 10;
		nbr += rem * base;
		base = base * 2;
	}
	return (nbr);
}

void	ft_check_replace(int *clue)
{
	int	temp_clue;

	temp_clue = *clue % 10000;
	temp_clue = ft_bi_dec(temp_clue);
	if (temp_clue == 8)
		*clue = 4;
	else if (temp_clue == 4)
		*clue = 3;
	else if (temp_clue == 2)
		*clue = 2;
	else if (temp_clue == 1)
		*clue = 1;
}

void	ft_replace_obvious(int (*tab)[6])
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
				ft_check_replace(&tab[i][j]);
			j++;
		}
		i++;
	}
}
