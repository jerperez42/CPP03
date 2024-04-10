/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:06:30 by jerperez          #+#    #+#             */
/*   Updated: 2024/02/12 12:00:41 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include "Fixed.h"

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed &);
		~Fixed(void);
		Fixed	&operator=(const Fixed &);
		int		getRawBits(void) const;
		void	setRawBits(int const);
	private:
		int					_raw;
		static const int	_frc = FRC_NBIT;
};

#endif