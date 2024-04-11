/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/11 13:05:01 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.h"

# include <iostream> 

FragTrap::FragTrap(void)
{
	std::cout << ANSI_COLOR << FRAG_CLASSNAME << ": " << this << CLTR_DFLT_MSG << ANSI_END << std::endl;
	this->setHP(FRAG_HP);
	this->setMaxHP(FRAG_HP);
	this->setEP(FRAG_EP);
	this->setDamage(FRAG_DAMAGE);
	this->setName(FRAG_NAME);
}

FragTrap::FragTrap(std::string name)
{
	std::cout << ANSI_COLOR << FRAG_CLASSNAME << ": " << this << CLTR_STR_MSG << ANSI_END << std::endl;
	this->setHP(FRAG_HP);
	this->setMaxHP(FRAG_HP);
	this->setEP(FRAG_EP);
	this->setDamage(FRAG_DAMAGE);
	if ("" == name)
		this->setName(FRAG_NAME);
	else
		this->setName(name);
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << ANSI_COLOR << FRAG_CLASSNAME << ": " << this << CLTR_CPY_MSG << ANSI_END << std::endl;
	if (this != &other)
		*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << ANSI_COLOR << FRAG_CLASSNAME << ": " << this << CLTR_DESTR_MSG << ANSI_END << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< FRAG_CLASSNAME << ' ' <<  this->getName();
	if (0 == this->getHP() || 0 == this->getEP())
		std::cout	<< ": error: highFivesGuys failed" << std::endl;
	else
		std::cout	<< ": High five!" << std::endl;
}
