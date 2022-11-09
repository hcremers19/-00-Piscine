void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;
	int	c_start_end;

	line = 1;
	while (line < y + 1)
	{
		column = 1;
		while (column < x + 1)
		{
			c_start_end = (column == 1 || column == x);
			if (c_start_end && line == 1)
				ft_putchar('A');
			else if (c_start_end && line == y)
				ft_putchar('C');
			else if ((line == y || column == x) || (line == 1 || column == 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
