/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 22:02:26 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/26 22:02:28 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(int size, char **strs)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			len++;
			j++;
		}
		j = 0;
		i++;
	}
	return (len);
}

int	ft_lensep(char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (sep[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_p(int size, char **strs, char *sep, char *p)
{
	int		i;
	int		j;
	int		ip;

	i = 0;
	j = 0;
	ip = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			p[ip++] = strs[i][j];
			j++;
		}
		j = 0;
		i++;
		while (sep[j] && i < size)
		{
			p[ip++] = sep[j];
			j++;
		}
	}
	p[ip] = '\0';
	return (p);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;

	if (size == 0)
		return ((char *)(malloc(1)));
	p = malloc(sizeof(char)
			* (ft_len(size, strs) + 1 + (size * ft_lensep(sep))));
	if (!p)
		return ((char *)(malloc(1)));
	p = ft_p(size, strs, sep, p);
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	int		size;
	char	**strs;
	char	*sep;
	int		i;

	size = 0;
	i = 0;
	strs = (char **)malloc(sizeof(char *) * 4);
	while (i < size)
	{
		strs[i] = malloc(sizeof(char) * 20);
		i++;
	}
	strs[0] = "\0";
	strs[1] = "\0";
	strs[2] = "\0";
	sep = "\0";
	printf("%s\n", ft_strjoin(size, strs, sep));
	free(strs);
}
*/