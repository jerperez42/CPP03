/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/11 11:22:54 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string> 
# include "ClapTrap.hpp"
# include "FragTrap.h"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string);
		FragTrap(const FragTrap &);
		~FragTrap(void);
		void	highFivesGuys(void);
};

#endif