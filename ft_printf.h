/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daguilar <daguilar@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:10:49 by daguilar          #+#    #+#             */
/*   Updated: 2023/10/15 20:12:16 by daguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_print_c(char c);
int				ft_print_str(char *str);
unsigned int	ft_uputnbr(unsigned int n);
int				ft_putnbr(int n);
int				ft_print_hex_min(unsigned int num);
int				ft_print_hex_max(unsigned int num);
int				ft_print_ptr(uintptr_t ptr);
int				ft_printf(char const *str, ...);

#endif
