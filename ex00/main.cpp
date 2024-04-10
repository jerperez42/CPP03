/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/10 15:58:09 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	std::cout << std::endl << "-------DEFAULT-------" << std::endl;
	ClapTrap	claptrap;
	claptrap.attack("its namesake");

	std::cout << std::endl << "-------EMPTY-------" << std::endl;
	ClapTrap	zeroclap("");
	zeroclap.attack("its namesake");

	std::cout << std::endl << "-------STRING-------" << std::endl;
	ClapTrap	strclap("S1R-L3-CL4P-TP");
	strclap.attack("its namesake");

	std::cout << std::endl << "-------COPY-------" << std::endl;
	ClapTrap	clone(claptrap);
	clone.attack("its namesake");

	std::cout << std::endl << "-------=operator-------" << std::endl;
	clone = strclap;
	clone.attack("the original");

	std::cout << std::endl << "-------DAMAGE-------" << std::endl;
	ClapTrap	masotrap("M4S0-TP");
	for (int i = 0; i < 10; i++)
	{
		masotrap.takeDamage(i);
		masotrap.attack("da boss (until death)");
	}

	std::cout << std::endl << "-------ATTACK-------" << std::endl;
	ClapTrap	failtrap("F41L-TP");
	ClapTrap	oktrap("0K-TP");
	oktrap.attack("da boss (success)");
	failtrap.attack("");
	ClapTrap	deadtrap("D43D-TP");
	deadtrap.takeDamage(999);
	deadtrap.attack("YOU SHOULD NOT SEE THIS");
	ClapTrap	noenergy("EP0-TP");
	for (int i = 1; i < 13; i++)
		noenergy.attack("da boss (until exhaustion)");

	std::cout << std::endl << "-------REPAIR-------" << std::endl;
	ClapTrap	sparatrap("SP4R4-TP");
	sparatrap.beRepaired(0);
	sparatrap.beRepaired(10);
	sparatrap.takeDamage(9);
	for (int i = 1; i < 13; i++)
		sparatrap.beRepaired(999);
	deadtrap.beRepaired(0);
	deadtrap.beRepaired(10);
	deadtrap.beRepaired(100);
	noenergy.beRepaired(0);
	noenergy.beRepaired(10);
	noenergy.beRepaired(100);

	std::cout << std::endl;
	return (0);
}