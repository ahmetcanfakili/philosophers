/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <ahmetcanfakili50@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:24:41 by afakili           #+#    #+#             */
/*   Updated: 2022/08/18 16:24:41 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int main(int argc, char **argv) 
{
    t_philo philo;
    
    if (argc > 1)
    {
        philo.number_of_philosophers = ft_atoi(argv[1]);
        philo.time_to_die = ft_atoi(argv[2]);
        philo.time_to_eat = ft_atoi(argv[3]);
        philo.time_to_sleep = ft_atoi(argv[4]);
        philo.number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);
    }
    else
        printf("Error!\n");
    return 0;
}
