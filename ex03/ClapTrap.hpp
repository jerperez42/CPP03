/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/10 17:21:51 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "ClapTrap.h"
# include <string> 

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(const ClapTrap &);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap &);
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		std::string		getName(void) const;
		void			setName(const std::string &);
		unsigned int	getHP(void) const;
		void			setHP(unsigned int);
		unsigned int	getMaxHP(void) const;
		void			setMaxHP(unsigned int);
		unsigned int	getEP(void) const;
		void			setEP(unsigned int);
		unsigned int	getDamage(void) const;
		void			setDamage(unsigned int);
	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_damage;
		unsigned int	_max_hp;
};

#endif