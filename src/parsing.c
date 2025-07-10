/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obellil- <obellil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:19:38 by octavie           #+#    #+#             */
/*   Updated: 2025/07/10 09:33:35 by obellil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int is_valid(char **argv)
{
	int	n;

	n = ft_atoi(argv[1]);
	if (n > MAX_PHILO || n <= 0)
		return (printf("invalid nb of philosophers\n"), FALSE);
	n = ft_atoi(argv[2]);
	if (n <= 0)
		return (printf("invalid time to die\n"), FALSE);
	n = ft_atoi(argv[3]);
	if (n <= 0)
		return (printf("invalid time to eat\n"), FALSE);
	n = ft_atoi(argv[4]);
	if (n <= 0)
		return (printf("invalid time to sleep\n"), FALSE);
	if (argv[5])
	{
		n = ft_atoi(argv[5]);
		if (n < 0)
			return (printf("test"), FALSE);
	}
	return (TRUE);
}
