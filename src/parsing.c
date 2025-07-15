/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octavie <octavie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 14:19:38 by octavie           #+#    #+#             */
/*   Updated: 2025/07/11 09:52:40 by octavie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int check_nb_arg(char **argv)
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
			return (printf("wrong command"), FALSE);
	}
	return (TRUE);
}

bool	is_valid_int(char *s)
{
	long	n;
	int		i;

	n = 0;
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	while (s[i] != '\0')
	{
		n = (n * 10) + (s[i] - '0');
		if (n > 2147483647)
			return (ft_putstr_fd("Error : int expected\n", 2), 0);
		i++;
	}
	return (1);
}

bool	is_digits(char *s)
{
	int	i;

	i = 0;
	if (!s[i])
		return (ft_putstr_fd("invalid arg format\n", 2), FALSE);
	while (s[i] != '\0')
	{
		if (!ft_isdigit(s[i]))
			return (ft_putstr_fd("arg must be a positive int\n", 2), FALSE);
		i++;
	}
	return (TRUE);
}

bool	valid_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!is_digits(argv[i]) || !is_valid_int(argv[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
