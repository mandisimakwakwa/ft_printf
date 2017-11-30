/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakwakw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:06:22 by mmakwakw          #+#    #+#             */
/*   Updated: 2017/11/30 18:23:22 by mmakwakw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_PRINTF_H

#	define FT_PRINTF_H
#	include "libft.h"
#	include <stdarg.h>
#	include <stdlib.h>
#	include <string.h>
#	include <stdio.h>
#	include <stdbool.h>

int			ft_printf(const char *format, ...);
int			ft_checkmod(char *format);
char		ft_getflag(char flag);
int			ft_output(char *format, char flag, va_list ap, int i);
int			ft_skip(char *format, int i);
void		ft_speciftypeini(char *format, char specif, char flag, va_list ap);
void		ft_c(va_list ap, char *format, char flag);
void		ft_s(va_list ap, char *format, char flag);
void		ft_p(va_list ap);
void		ft_x(va_list ap, char *format, char flag);
void		ft_d(va_list ap, char *format, char flag);
void		ft_i(va_list ap, char *format, char flag);
void		ft_o(va_list ap, char *format, char flag);
void		ft_u(va_list ap, char *format, char flag);
void		ft_mod(char *format);
int			ft_getparam(char *format, char flag);
void		ft_plusflag(int d, char flag, int param, char *format);
void		ft_fill(int fillcount, char c);
void		ft_minusflag(int d, char flag);
void		ft_spaceflag(int d, char flag, int param);
void		ft_zeroflag(int d, char flag);
void		ft_o_support(int o, int param, char flag, char f_addon);
void		ft_c_support(char c, int param, char flag, char f_addon);
#	endif
