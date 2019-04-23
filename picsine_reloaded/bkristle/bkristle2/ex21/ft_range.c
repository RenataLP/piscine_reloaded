/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkristle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:54:52 by bkristle          #+#    #+#             */
/*   Updated: 2019/04/05 17:57:38 by bkristle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *mas;
	int i;

	i = 0;
	if (max <= min)
		return (NULL);
	mas = (int *)malloc(sizeof(int) * (max - min));
	if (mas == NULL)
		return (NULL);
	while (min < max)
	{
		mas[i] = min;
		i++;
		min++;
	}
	return (mas);
}
