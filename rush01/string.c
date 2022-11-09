int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_atoi(char c)
{
	int	num;

	num = 0;
	num += (c - 48);
	return (num);
}

/*
Split the argument to get all views values
*/
int	*split_arguments(char *str, int *views)
{
	int	str_index;
	int	views_index;
	int	elem;

	str_index = 0;
	views_index = 0;
	while (str[str_index] != '\0')
	{
		if (str[str_index] != ' ')
		{
			elem = ft_atoi(str[str_index]);
			views[views_index] = elem;
			views_index++;
		}
		str_index++;
	}
	views[views_index] = '\0';
	return (views);
}