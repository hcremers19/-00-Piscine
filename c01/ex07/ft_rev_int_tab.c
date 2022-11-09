/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 21:25:10 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/14 10:28:39 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	index_end;
	int	temp;
	int	stp;

	stp = 0;
	index = 0;
	index_end = size - 1;
	while (stp < (size / 2))
	{
		temp = tab[index];
		tab[index] = tab[index_end];
		tab[index_end] = temp;
		index++;
		index_end--;
		stp++;
	}
}
/*
int main()
{
	int	tab[5];
	int	size;
	int	index;

	tab[0] = 6;
	tab[1] = 0;
	tab[2] = 4;
	tab[3] = 7;
	tab[4] = 5;
	size = 5;
	index = 0;

	while (index < (size - 1))
	{
		printf("%d", tab[index]);
		index++;
	}
	if (index == (size - 1))
	{
		printf("%d\n", tab[index]);
		index = 0;
	}
	
	ft_rev_int_tab(tab, size);
	
	while (index < (size - 1))
	{
		printf("%d", tab[index]);
		index++;
	}
	if (index == (size - 1))
	{
		printf("%d\n", tab[index]);
		index = 0;
	}
}
*/