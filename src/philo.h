/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: octavie <octavie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:26:27 by octavie           #+#    #+#             */
/*   Updated: 2025/07/15 12:09:00 by octavie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/time.h>
# include <string.h>
# include <limits.h>
# include <stdbool.h>

# define MAX_PHILO 200
# define FALSE 0
# define TRUE 1

typedef struct t_philo
{
	pthread_t		thread;
	int				eat;
	int				sleep;
	

}				s_philo;
typedef struct t_data
{

}				s_data;

// mylib
int 	ft_isdigit(int c);
int 	ft_isspace(int c);
int 	ft_atoi(const char *str);
void	ft_putchar_fd(int c, int fd);


//parsing
int 	check_nb_arg(char **argv);
bool	is_valid_int(char *s);
bool	is_digits(char *s);
bool	valid_args(int ac, char **av);
void	ft_putstr_fd(char *s, int fd);



#endif
