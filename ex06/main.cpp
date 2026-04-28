/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrigore <lgrigore@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:59:00 by lgrigore          #+#    #+#             */
/*   Updated: 2026/04/28 18:21:16 by lgrigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

enum LogLevel { DEBUG, INFO, WARNING, ERROR };

LogLevel getLogLevel(std::string level) {
  if (level == "DEBUG")
    return DEBUG;
  else if (level == "INFO")
    return INFO;
  else if (level == "WARNING")
    return WARNING;
  else if (level == "ERROR")
    return ERROR;
  else
    throw std::invalid_argument("Invalid log level: " + level);
}

int main(int argc, char const* argv[]) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
    return 1;
  }
  const std::string level = argv[1];
  Harl harl;
  try {
    LogLevel logLevel = getLogLevel(level);
    switch (logLevel) {
      case DEBUG:
        harl.complain("DEBUG");
        // fall through
      case INFO:
        harl.complain("INFO");
        // fall through
      case WARNING:
        harl.complain("WARNING");
        // fall through
      case ERROR:
        harl.complain("ERROR");
        // fall through
        break;
      default:
        throw std::invalid_argument("Invalid log level: " + level);
    }
  } catch (const std::invalid_argument& e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }
  return 0;
}
