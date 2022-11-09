/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 20:32:39 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/26 20:32:41 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	*rng;
	int	i;

	if (min >= max)
	{
		return (0);
		rng = NULL;
	}
	len = max - min;
	rng = malloc(sizeof(int) * len);
	if (!rng)
		return (-1);
	i = 0;
	while (i < len)
	{
		rng[i] = min;
		min++;
		i++;
	}
	*range = rng;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 0;
	max = 2;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (i < (min - max))
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/