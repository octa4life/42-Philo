/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obellil- <obellil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 10:26:27 by octavie           #+#    #+#             */
/*   Updated: 2025/07/11 09:23:27 by obellil-         ###   ########.fr       */
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
# define FALSE 1
# define TRUE 0

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
int ft_isdigit(int c);
int ft_isspace(int c);
int ft_atoi(const char *str);

//parsing
int is_valid(char **argv);

#endif
