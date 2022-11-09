#include <stdio.h>
void	ft_display_error(void);
int		ft_strlen(char	*str);
void	ft_map_init(int map[6][6], char *str);
void	ft_check_base_cases(int (*tableau)[6]);
void	ft_check_quatre(int (*tableau)[6]);
void	ft_print_table(int (*tableau)[6]);
void	ft_putchar(char chr);
void	ft_deduction(int (*tab)[6]);
void	ft_turn_90(int (*tab)[6]);
int		ft_replace_obvious(int (*tab)[6]);
void	ft_clear_clues(int (*tab)[6]);

/*
Check the format of argument passed from the terminal. 
Return 0 (False) if the argument is wrong,
return 1 (True) if the argument is correct.
*/
int	check_arguments(char *str)
{
	int	res;
	int	len;
	int	index;

	res = 1;
	len = ft_strlen(str);
	if (len != 31)
		return (0);
	index = 0;
	while (index < len && res == 1)
	{
		if (index % 2 == 0)
		{
			if (str[index] < '1' || str[index] > '4')
				res = 0;
		}
		else
		{
			if (str[index] != ' ')
				res = 0;
		}
		index++;
	}
	return (res);
}

void	start(int map[6][6])
{
	int	i;

	i = 0;
	ft_check_base_cases(map);
	ft_print_table(map);
	while (i < 1000)
	{
		ft_deduction(map);
		ft_replace_obvious(map);
		i++;
	}
	ft_clear_clues(map);
	ft_print_table(map);
	ft_putchar('\n');
}

int	main(int argc, char *argv[])
{	
	int	map[6][6];
	int	check;

	if (argc == 2)
	{
		check = check_arguments(argv[1]);
		if (check == 1)
		{
			start(map);
		}
		else
			return (0);
	}
	return (0);
}
