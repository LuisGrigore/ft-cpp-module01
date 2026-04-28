/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:58:28 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 17:59:35 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  const int HORDE_SIZE = 10;
  const std::string HORDE_NAME = "0_0";

  Zombie* horde = zombieHorde(HORDE_SIZE, HORDE_NAME);
  for (int i = 0; i < HORDE_SIZE; i++) horde[i].announce();
  delete[] horde;
  return 0;
}