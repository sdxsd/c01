/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/13 10:31:19 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/07/13 10:32:13 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	inc;
	int	dec;
	int	holder;

	inc = 0;
	dec = size - 1;
	while (inc <= size / 2)
	{
		holder = tab[inc];
		tab[inc] = tab[dec];
		tab[dec] = holder;
		--dec;
		++inc;
	}
}
