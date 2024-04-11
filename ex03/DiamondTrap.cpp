/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/11 13:09:06 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.h"

# include <iostream> 

DiamondTrap::DiamondTrap(void)
{
	std::cout << ANSI_COLOR << DIAM_CLASSNAME << ": " << this << CLTR_DFLT_MSG << ANSI_END << std::endl;
	this->setHP(FRAG_HP);
	this->setMaxHP(FRAG_HP);
	this->setEP(SCAV_EP);
	this->setDamage(FRAG_DAMAGE);
	this->ClapTrap::setName("_clap_name");
	this->DiamondTrap::_name = DIAM_NAME;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << ANSI_COLOR << DIAM_CLASSNAME << ": " << this << CLTR_STR_MSG << ANSI_END << std::endl;
	this->setHP(FRAG_HP);
	this->setMaxHP(FRAG_HP);
	this->setEP(SCAV_EP);
	this->setDamage(FRAG_DAMAGE);
	if ("" == name)
		this->DiamondTrap::_name = DIAM_NAME;
	else
		this->DiamondTrap::_name = name;
	this->ClapTrap::setName(this->DiamondTrap::_name + "_clap_name");
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << ANSI_COLOR << DIAM_CLASSNAME << ": " << this << CLTR_CPY_MSG << ANSI_END << std::endl;
	if (this != &other)
		*this = other;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << ANSI_COLOR << DIAM_CLASSNAME << ": " << this << CLTR_DESTR_MSG << ANSI_END << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout	<< DIAM_CLASSNAME\
				<< " name: " << this->_name\
				<< " ClapTrap::name: " << this->ClapTrap::getName()\
				<< std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
}