/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: wmaguire <wmaguire@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/07/12 19:06:51 by wmaguire      #+#    #+#                 */
/*   Updated: 2021/07/12 19:07:05 by wmaguire      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res_1;
	int	res_2;

	res_1 = (*a / *b);
	res_2 = (*a % *b);
	*a = res_1;
	*b = res_2;
}
