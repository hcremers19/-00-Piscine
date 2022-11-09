int	*split_arguments(char *str, int *views);

void    put_row(int map[6][6], int row, int *views, int index)
{
	int col;

	col = 1;
	while (col <= 4)
	{
		map[row][col] = views[index];
		col++;
		index++;
	}
}

void    put_col(int map[6][6], int col, int *views, int index)
{
	int row;

	row = 1;
	while(row <= 4)
	{
		map[row][col] = views[index];
		row++;
		index++;
	}
}

void    put_zero(int map[6][6])
{
	int	row;
	int	col;

	map[0][0] = 0;
	map[0][5] = 0;
	map[5][0] = 0;
	map[5][5] = 0;
	row = 1;
	while (row <= 4)
	{
		col = 1;
		while (col <= 4)
		{
			map[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	ft_map_init(int map[6][6], char *str)
{
	int		views[17];

	split_arguments(str, views);
	put_row(map, 0, views, 0);
	put_row(map, 5, views, 4);
	put_col(map, 0, views, 8);
	put_col(map, 5, views, 12);
	put_zero(map);

}
