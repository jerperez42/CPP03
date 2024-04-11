/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/11 11:26:32 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include <iostream>

int main( void )
{
	std::cout << std::endl << "-------DEFAULT-------" << std::endl;
	FragTrap	fragtrap;
	fragtrap.attack("its namesake");

	std::cout << std::endl << "-------EMPTY-------" << std::endl;
	FragTrap	zeroclap("");
	zeroclap.attack("its namesake");

	std::cout << std::endl << "-------STRING-------" << std::endl;
	FragTrap	strclap("S1R-L3-FR4G-TP-1NH1R1T0R-0F-CL4P-TP-BR0TH3R-OF-SC4V-TP");
	strclap.attack("its namesake");

	std::cout << std::endl << "-------COPY-------" << std::endl;
	FragTrap	clone(fragtrap);
	clone.attack("its namesake");

	std::cout << std::endl << "-------=operator-------" << std::endl;
	clone = strclap;
	clone.attack("the original");

	std::cout << std::endl << "-------DAMAGE-------" << std::endl;
	FragTrap	masotrap("M4S0-TP");
	for (int i = 0; i < 7; i++)
	{
		masotrap.attack("itself");
		masotrap.takeDamage(masotrap.getDamage());
	}

	std::cout << std::endl << "-------ATTACK-------" << std::endl;
	FragTrap	failtrap("F41L-TP");
	FragTrap	oktrap("0K-TP");
	oktrap.attack("da boss (success)");
	failtrap.attack("");
	FragTrap	deadtrap("D43D-TP");
	deadtrap.takeDamage(999);
	deadtrap.attack("YOU SHOULD NOT SEE THIS");
	FragTrap	noenergy("EP0-TP");
	for (int i = 1; i < 105; i++)
		noenergy.attack("da boss (until exhaustion)");

	std::cout << std::endl << "-------REPAIR-------" << std::endl;
	FragTrap	sparatrap("SP4R4-TP");
	sparatrap.beRepaired(0);
	sparatrap.beRepaired(10);
	sparatrap.takeDamage(99);
	for (int i = 1; i < 105; i++)
		sparatrap.beRepaired(999);
	deadtrap.beRepaired(0);
	deadtrap.beRepaired(10);
	deadtrap.beRepaired(100);
	noenergy.beRepaired(0);
	noenergy.beRepaired(10);
	noenergy.beRepaired(100);

	std::cout << std::endl << "-------HIGH-FIVE-------" << std::endl;
	FragTrap	highfive("FR13ND-TP");
	for (int i = 1; i < 105; i++)
		highfive.highFivesGuys();
	deadtrap.highFivesGuys();
	noenergy.highFivesGuys();

	std::cout << std::endl;
	return (0);
}
