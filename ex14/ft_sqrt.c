/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbriffau <mbriffau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 22:53:19 by mbriffau          #+#    #+#             */
/*   Updated: 2016/11/06 18:16:49 by mbriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int comp;

	comp = 0;
	i = 0;
	while (nb != comp)
	{
		if (nb < comp)
			return (0);
		else
		{
			i++;
			comp = i * i;
		}
	}
	return (i);
}
