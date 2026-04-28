/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:50:40 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 18:04:00 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

// Harl::Harl() {}

// Harl::~Harl() {}

void Harl::debug(void) { std::cout << "This is a debug message." << std::endl; }

void Harl::info(void) { std::cout << "This is an info message." << std::endl; }

void Harl::warning(void) {
  std::cout << "This is a warning message." << std::endl;
}

void Harl::error(void) {
  std::cout << "This is an error message." << std::endl;
}

void Harl::complain(std::string level) {
  const char* levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::* functions[])() = {&Harl::debug, &Harl::info, &Harl::warning,
                                  &Harl::error};

  for (int i = 0; i < 4; i++) {
    if (level == levels[i]) {
      (this->*functions[i])();
      return;
    }
  }
  std::cout << "Unknown level: " << level << std::endl;
}
