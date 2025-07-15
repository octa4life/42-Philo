/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylib.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octavie <octavie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 14:24:52 by octavie           #+#    #+#             */
/*   Updated: 2025/07/11 09:54:29 by octavie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philo.h"

int ft_isspace(int c)
{
    return ((c >= 9 && c <= 13) || c == 32 ? 1 : 0);
}

int ft_isdigit(int c)
{
    return (c >= 48 && c <= 57 ? 1 : 0);
}

int ft_atoi(const char *str)
{
    int res = 0;
    int i = 0;
    int s = 1;
    
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '-')
    {
        s = -1;
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        res *= 10;
        res += str[i] - 48;
        i++;
    }
    return (res *= s);
}

void	ft_putchar_fd(int c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}