/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/10 17:33:50 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
	std::cout << std::endl << "-------DEFAULT-------" << std::endl;
	ScavTrap	scavtrap;
	scavtrap.attack("its namesake");

	std::cout << std::endl << "-------EMPTY-------" << std::endl;
	ScavTrap	zeroclap("");
	zeroclap.attack("its namesake");

	std::cout << std::endl << "-------STRING-------" << std::endl;
	ScavTrap	strclap("S1R-L3-SC4V-TP-1NH1R1T0R-0F-CL4P-TP");
	strclap.attack("its namesake");

	std::cout << std::endl << "-------COPY-------" << std::endl;
	ScavTrap	clone(scavtrap);
	clone.attack("its namesake");

	std::cout << std::endl << "-------=operator-------" << std::endl;
	clone = strclap;
	clone.attack("the original");

	std::cout << std::endl << "-------DAMAGE-------" << std::endl;
	ScavTrap	masotrap("M4S0-TP");
	for (int i = 0; i < 7; i++)
	{
		masotrap.attack("itself");
		masotrap.takeDamage(masotrap.getDamage());
	}

	std::cout << std::endl << "-------ATTACK-------" << std::endl;
	ScavTrap	failtrap("F41L-TP");
	ScavTrap	oktrap("0K-TP");
	oktrap.attack("da boss (success)");
	failtrap.attack("");
	ScavTrap	deadtrap("D43D-TP");
	deadtrap.takeDamage(999);
	deadtrap.attack("YOU SHOULD NOT SEE THIS");
	ScavTrap	noenergy("EP0-TP");
	for (int i = 1; i < 55; i++)
		noenergy.attack("da boss (until exhaustion)");

	std::cout << std::endl << "-------REPAIR-------" << std::endl;
	ScavTrap	sparatrap("SP4R4-TP");
	sparatrap.beRepaired(0);
	sparatrap.beRepaired(10);
	sparatrap.takeDamage(99);
	for (int i = 1; i < 55; i++)
		sparatrap.beRepaired(999);
	deadtrap.beRepaired(0);
	deadtrap.beRepaired(10);
	deadtrap.beRepaired(100);
	noenergy.beRepaired(0);
	noenergy.beRepaired(10);
	noenergy.beRepaired(100);

	std::cout << std::endl << "-------GUARD GATE-------" << std::endl;
	ScavTrap	guard("GU4RD-F0R3F3R-TP");
	for (int i = 1; i < 55; i++)
		guard.guardGate();
	deadtrap.guardGate();
	noenergy.guardGate();

	std::cout << std::endl;
	return (0);
}
