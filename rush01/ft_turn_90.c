void	ft_roll(int *a, int *b, int *c, int *d)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = *c;
	*c = *d;
	*d = temp;
}

void	ft_turn_90(int (*t)[6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6 / 2)
	{
		j = 0;
		while (j < (6 + 1) / 2)
		{
			ft_roll(&t[i][j], &t[5 - j][i], &t[5 - i][5 - j], &t[j][5 - i]);
			j++;
		}
		i++;
	}	
}
