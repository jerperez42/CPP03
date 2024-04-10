/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/10 16:44:51 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ScavTrap.h"
#include "ClapTrap.h"

# include <iostream> 
# include <vector>

ScavTrap::ScavTrap(void)
{
	std::cout << ANSI_COLOR << SCAV_CLASSNAME << ": " << this << CLTR_DFLT_MSG << ANSI_END <<std::endl;
	this->setHP(SCAV_HP);
	this->setEP(SCAV_EP);
	this->setDamage(SCAV_DAMAGE);
	this->setName(SCAV_NAME);
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << ANSI_COLOR << SCAV_CLASSNAME << ": " << this << CLTR_STR_MSG << ANSI_END << std::endl;
	this->setHP(SCAV_HP);
	this->setEP(SCAV_EP);
	this->setDamage(SCAV_DAMAGE);
	if ("" == name)
		this->setName(SCAV_NAME);
	else
		this->setName(name);
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << ANSI_COLOR << SCAV_CLASSNAME << ": " << this << CLTR_CPY_MSG << ANSI_END << std::endl;
	if (this != &other)
		*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << ANSI_COLOR << SCAV_CLASSNAME << ": " << this << CLTR_DESTR_MSG << ANSI_END << std::endl;
}

// ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
// {
// 	if (this != &other)
// 	{
// 		this->setHP(other.getHP());
// 		this->setEP(other.getEP());
// 		this->setDamage(other.getDamage());
// 		this->setName(other.getName());
// 	}
// 	return (*this);
// }

void	ScavTrap::attack(const std::string& target)
{
	std::cout	<< SCAV_CLASSNAME << this->getName();
	if (0 == this->getHP() || 0 == this->getEP() || "" == target)
		std::cout	<< ": error: attack failed" << std::endl;
	else
	{
		std::cout	<< " attacks " << target\
					<< ", causing " << this->getDamage() << " points of damage!"\
					<< std::endl;
		this->setEP(this->getEP() - 1);
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout	<< SCAV_CLASSNAME << this->getName();
	if (0 == this->getHP() || 0 == this->getEP())
		std::cout	<< ": error: guardGate failed" << std::endl;
	else
	{
		std::cout	<< " is now in Gate keeper mode." << std::endl;
		this->setEP(this->getEP() - 1);
	}
}