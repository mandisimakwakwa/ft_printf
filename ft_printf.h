/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 15:41:30 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/01/03 15:42:52 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdbool.h>

void		ft_fill(int flag_no, char c);
void		ft_dot_flag(char *format, char *tmp, char flag);
void		ft_putwidth(int x, int x_1);
void		ft_c(va_list ap, char *format, char flag);
void		ft_s(va_list ap, char *format, char flag);
void		ft_S(va_list ap, char *format, char flag);
void		ft_p(va_list ap);
void		ft_x(va_list ap, char *format, char specif);
void		ft_d(va_list ap, char *format, char flag);
void		ft_i(va_list ap, char *format, char flag);
void		ft_o(va_list ap, char *format, char flag);
void		ft_u(va_list ap, char *format, char flag);
void		ft_istype(char *format, char specif, char flag, va_list ap);
void		ft_mod(char *format);
int			ft_printf(const char *format, ...);
int			ft_skip(char *format, int i);
int			ft_flag_no(char *format, char flag);
int			ft_chkmod(char *format);
char		ft_getflag(char flag);
#endif
