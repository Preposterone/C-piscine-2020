/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarcelia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 19:47:46 by aarcelia          #+#    #+#             */
/*   Updated: 2020/08/25 20:18:42 by aarcelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int n;

	if (power < 0 || (nb == 0 && power > 0))
		return (0);
	else if (power == 0)
		return (1);
	n = 1;
	while (power > 0)
	{
		n = n * nb;
		power--;
	}
	return (n);
}
