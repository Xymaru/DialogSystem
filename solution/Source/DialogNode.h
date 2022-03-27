#pragma once
#include <vector>
#include <string>

struct DialogNode
{
	std::string text;

	std::vector<size_t> nodes;
	std::vector<std::string> options;
};