/*
 * @Author: dega
 * @Date: 2022-10-19 14:45:06
 * @LastEditors: dega
 * @LastEditTime: 2022-10-19 15:20:54
 * @Description: 
 * @FilePath: \design_pattern\pimp\pimp.cpp
 */

#include "pimp/pimp.hpp"

#include <iostream>

namespace pp {
	struct pimp::inside {
		inside() : value{ 0 } {}
		int value;
	};

	int pimp::add() {
		pinside->value += 100;
		return 0;
	}

	int pimp::show() {
		std::cout << pinside->value << std::endl;
		return 0;
	}

	pimp::pimp() {
		pinside = std::make_shared<inside>();
	}

}
