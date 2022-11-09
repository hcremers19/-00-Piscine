/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:06:49 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 14:06:52 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{	
		i++;
	}
	if (str[i] == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main()
{
	char	*str;

	str = "1234567890";
	printf("%d\n", ft_str_is_numeric(str));
	return (0);
}
*/