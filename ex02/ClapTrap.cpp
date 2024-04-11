/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/10 17:25:28 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

# include <iostream> 
# include <vector>

ClapTrap::ClapTrap(void)
{
	std::cout << ANSI_COLOR << "Claptrap: " << this << CLTR_DFLT_MSG << ANSI_END <<std::endl;
	this->_hp = CLTR_HP;
	this->_max_hp = CLTR_HP;
	this->_ep = CLTR_EP;
	this->_damage = CLTR_DAMAGE;
	this->_name = CLTR_NAME;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << ANSI_COLOR << "Claptrap: " << this << CLTR_STR_MSG << ANSI_END << std::endl;
	this->_hp = CLTR_HP;
	this->_max_hp = CLTR_HP;
	this->_ep = CLTR_EP;
	this->_damage = CLTR_DAMAGE;
	if ("" == name)
		this->_name = CLTR_NAME;
	else
		this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << ANSI_COLOR << "Claptrap: " << this << CLTR_CPY_MSG << ANSI_END << std::endl;
	if (this != &other)
		*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << ANSI_COLOR << "Claptrap: " << this << CLTR_DESTR_MSG << ANSI_END << std::endl;
}

unsigned int	ClapTrap::getHP(void) const
{
	return (this->_hp);
}

unsigned int	ClapTrap::getMaxHP(void) const
{
	return (this->_max_hp);
}


unsigned int	ClapTrap::getEP(void) const
{
	return (this->_ep);
}

unsigned int	ClapTrap::getDamage(void) const
{
	return (this->_damage);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::setHP(unsigned int hp)
{
	this->_hp = hp;
}

void	ClapTrap::setEP(unsigned int ep)
{
	this->_ep = ep;
}

void	ClapTrap::setMaxHP(unsigned int hp)
{
	this->_max_hp = hp;
}

void	ClapTrap::setDamage(unsigned int damage)
{
	this->_damage = damage;
}

void	ClapTrap::setName(const std::string& name)
{
	this->_name = name;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->setHP(other.getHP());
		this->setEP(other.getEP());
		this->setDamage(other.getDamage());
		this->setName(other.getName());
	}
	return (*this);
}

//"ClapTrap <name> attacks <target>, causing <damage> points of damage!"
void	ClapTrap::attack(const std::string& target)
{
	std::cout	<< "ClapTrap " << this->_name;
	if (0 == this->getHP() || 0 == this->getEP() || "" == target)
		std::cout	<< ": error: attack failed" << std::endl;
	else
	{
		std::cout	<< " attacks " << target\
					<< ", causing " << this->_damage << " points of damage!"\
					<< std::endl;
		this->setEP(this->getEP() - 1);
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout	<< "ClapTrap " << this->_name\
				<< " takes " << amount << " points of damage." << std::endl;
	if (amount >= this->getHP())
		this->setHP(0);
	else
		this->setHP(this->getHP() - amount);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName();
	if (0 == this->getHP() || 0 == this->getEP())
	{
		std::cout << ": error: beRepaired failed" << std::endl;
		return ;
	}
	if (this->getMaxHP() < amount)
		amount = this->getMaxHP();
	if (amount + this->getHP() > this->getMaxHP())
		amount = this->getMaxHP() - this->getHP();
	std::cout << " repairs itself, getting " << amount << " hit points back." << std::endl;
	this->setEP(this->getEP() - 1);
	this->setHP(this->getHP() + amount);
}
