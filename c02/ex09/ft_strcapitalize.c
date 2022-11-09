/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:34:51 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 16:34:55 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{	
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != 0)
	{
		if ('A' <= str[i - 1] && str[i - 1] <= 'Z')
			i++;
		else if ('a' <= str[i - 1] && str[i - 1] <= 'z')
			i++;
		else if ('0' <= str[i - 1] && str[i - 1] <= '9')
			i++;
		else if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = (str[i] - 32);
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "SALUT, COMMENT TU VAS ? 42MOTS QUARANTE-DEUX; CINQUANTE+ET+UN";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/