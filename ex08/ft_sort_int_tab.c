/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 11:16:46 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/07/13 11:16:47 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	iterator;
	int	iterator2;
	int	holder;

	iterator = 0;
	iterator2 = 0;
	while (iterator < size - 1)
	{
		iterator2 = 0;
		while (iterator2 < size - iterator - 1)
		{
			if (tab[iterator2] > tab[iterator2 + 1])
			{
				holder = tab[iterator2 + 1];
				tab[iterator2 + 1] = tab[iterator2];
				tab[iterator2] = holder;
			}
			iterator2++;
		}
		iterator++;
	}
}
