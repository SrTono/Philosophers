/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvil	lare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:52:29 by tvillare          #+#    #+#             */
/*   Updated: 2023/01/13 18:13:55 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <unistd.h>
# include <pthread.h>
# include <sys/time.h>
# include <stdlib.h>
# include <limits.h>
# include <time.h>

# include "struct.h"

///Utils
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
///Philo
void	*thread_philo(void *data);
void	sniffer_philo(t_table *table);




#endif