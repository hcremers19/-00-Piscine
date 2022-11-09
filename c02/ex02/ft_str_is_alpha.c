/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:42:29 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 11:42:32 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z'))
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

	str = "ABCabc";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
*/