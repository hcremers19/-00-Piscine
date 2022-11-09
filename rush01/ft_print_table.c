void	ft_putnbr(int nb);
void	ft_putchar(char chr);

void	ft_print_table(int (*tableau)[6])
{
	int	i;
	int	j;
	int	nombre;

	i = 1;
	j = 1;
	while (i < 5)
	{
		while (j < 5)
		{
			nombre = tableau[i][j];
			ft_putchar(' ');
			ft_putnbr(nombre);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
