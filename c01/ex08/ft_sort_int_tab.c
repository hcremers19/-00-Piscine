/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:35:42 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/14 11:48:38 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	temp = 0;
	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
/*
int main()
{
	int tab[6];
	int	size;
	int	index;

	tab[0] = 10;
	tab[1] = 2;
	tab[2] = 7;
	tab[3] = 16;
	tab[4] = 4;
	tab[5] = 20;
	size = 6;
	index = 0;

	while (index < (size - 1))
	{
		printf("%d, ", tab[index]);
		index++;
	}
	if (index == (size - 1))
	{
		printf("%d\n", tab[index]);
		index = 0;
	}

	ft_sort_int_tab(tab, size);
	
	while (index < (size - 1))
	{
		printf("%d, ", tab[index]);
		index++;
	}
	if (index == (size - 1))
	{
		printf("%d\n", tab[index]);
		index = 0;
	}
}
*/