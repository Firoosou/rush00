/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbourich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:20:27 by fbourich          #+#    #+#             */
/*   Updated: 2022/01/30 16:20:36 by fbourich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	largeur(int x, char d, char m, char f);
void	rush(int x, int y);

void	largeur(int x, char d, char m, char f)
{
	int	i ;

i = 1;
	while (i <= x)
	{
		if (i < x)
		{
			if (i == 1)
			{
				ft_putchar(d);
			}
			else
				ft_putchar(m);
		}
		if (i == x)
		{
			ft_putchar(f);
		}	
		i++;
	}
}

void	rush(int x, int y)
{
	int	i ;

i = 1;
	while (i <= y)
	{
		if (i < y)
		{
			if (i == 1)
			{
				largeur (x, 'A', 'B', 'C');
			}
			else
				largeur(x, 'B', ' ', 'B');
		}
		if (i == y)
		{
			largeur(x, 'A', 'B', 'C');
		}
		write(1, "\n", 1);
		i++;
	}
}
