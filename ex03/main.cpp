/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/11 12:56:02 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include <iostream>

int main( void )
{
	std::cout << std::endl << "-------DEFAULT-------" << std::endl;
	DiamondTrap	claptrap;
	claptrap.attack("its namesake");

	std::cout << std::endl << "-------EMPTY-------" << std::endl;
	DiamondTrap	zeroclap("");
	zeroclap.attack("its namesake");

	std::cout << std::endl << "-------STRING-------" << std::endl;
	DiamondTrap	strclap("S1R-L3-D14M-TP-1NH1R1T0R-0F-CL4P-TP-4ND-D14MCH1LD-0F-SC4V-TP-4ND-FR4G-TP");
	strclap.attack("its namesake");

	std::cout << std::endl << "-------COPY-------" << std::endl;
	DiamondTrap	clone(claptrap);
	clone.attack("its namesake");

	std::cout << std::endl << "-------=operator-------" << std::endl;
	clone = strclap;
	clone.attack("the original");

	std::cout << std::endl << "-------DAMAGE-------" << std::endl;
	DiamondTrap	masotrap("M4S0-TP");
	for (int i = 0; i < 7; i++)
	{
		masotrap.attack("itself");
		masotrap.takeDamage(masotrap.getDamage());
	}

	std::cout << std::endl << "-------ATTACK-------" << std::endl;
	DiamondTrap	failtrap("F41L-TP");
	DiamondTrap	oktrap("0K-TP");
	oktrap.attack("da boss (success)");
	failtrap.attack("");
	DiamondTrap	deadtrap("D43D-TP");
	deadtrap.takeDamage(999);
	deadtrap.attack("YOU SHOULD NOT SEE THIS");
	DiamondTrap	noenergy("EP0-TP");
	for (int i = 1; i < 55; i++)
		noenergy.attack("da boss (until exhaustion)");

	std::cout << std::endl << "-------REPAIR-------" << std::endl;
	DiamondTrap	sparatrap("SP4R4-TP");
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

	std::cout << std::endl << "-------HIGH-FIVE-------" << std::endl;
	DiamondTrap	highfive("FR13ND-TP");
	for (int i = 1; i < 55; i++)
		highfive.highFivesGuys();
	deadtrap.highFivesGuys();
	noenergy.highFivesGuys();

	std::cout << std::endl << "-------GUARD GATE-------" << std::endl;
	DiamondTrap	guard("GU4RD-F0R3F3R-TP");
	for (int i = 1; i < 55; i++)
		guard.guardGate();
	deadtrap.guardGate();
	noenergy.guardGate();

	std::cout << std::endl << "-------WHO-AM-I-------" << std::endl;
	DiamondTrap	alzheimer("4LZH31M3R-TP");
	alzheimer.whoAmI();
	alzheimer.setName("1-F0RG0T");
	alzheimer.whoAmI();
	alzheimer.setName("H4NDS0M3-J4CK");
	alzheimer.whoAmI();
	deadtrap.whoAmI();
	noenergy.whoAmI();

	std::cout << std::endl;
	return (0);
}
