/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:25:43 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 10:30:10 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c);

void	first_last_row(int n)
{
	int i;

	i = 0;
	ft_putchar('o');
	while (i < n - 2)
	{
		ft_putchar('-');
		i++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	cases(int x, int y)
{
	int i;

	if (x < 1 || y < 1)
		return ;
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x == 1 && y > 1)
	{
		i = 0;
		ft_putchar('o');
		ft_putchar('\n');
		while (i < y - 2)
		{
			ft_putchar('|');
			ft_putchar('\n');
			i++;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x > 1 && y == 1)
		first_last_row(x);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (x > 1 && y > 1)
	{
		first_last_row(x);
		while (i < y - 2)
		{
			ft_putchar('|');
			while (j < x - 2)
			{
				ft_putchar(' ');
				j++;
			}
			j = 0;
			ft_putchar('|');
			ft_putchar('\n');
			i++;
		}
		first_last_row(x);
	}
	else
		cases(x, y);
}
