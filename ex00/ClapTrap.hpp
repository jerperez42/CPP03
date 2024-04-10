/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/10 15:03:06 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

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
	private:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_damage;
};

#endif