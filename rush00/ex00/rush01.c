void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;
	int	corner;
	int	last_c;

	line = 0;
	while (line++ < y)
	{
		column = 0;
		while (column++ < x)
		{
			corner = (line == 1 || line == y) && (column == 1 || column == x);
			last_c = (line == y && column == x) && (line != 1 && column != 1);
			if ((line == column || last_c) && corner)
				ft_putchar(47);
			else if (corner)
				ft_putchar(92);
			else if ((line == y || column == x) || (line == 1 || column == 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
