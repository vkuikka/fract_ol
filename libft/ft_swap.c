/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuikka <vkuikka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 15:00:32 by vkuikka           #+#    #+#             */
/*   Updated: 2019/12/03 15:00:52 by vkuikka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(int *value1, int *value2)
{
	int		tmp;

	tmp = 0;
	tmp = *value1;
	*value1 = *value2;
	*value2 = tmp;
}
