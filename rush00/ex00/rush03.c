void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;
	int	l_start_end;

	line = 1;
	while (line < y + 1)
	{
		column = 1;
		while (column < x + 1)
		{
			l_start_end = (line == 1 || line == y);
			if (l_start_end && column == 1)
				ft_putchar('A');
			else if (l_start_end && column == x)
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
