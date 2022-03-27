#pragma once
#include <iostream>
#include <vector>
#include "DialogNode.h"

class Dialog
{
private:
	std::vector<DialogNode> nodes;
	DialogNode* activeNode;
	bool finished;
public:
	Dialog();
	~Dialog();

	size_t AddNode(DialogNode& node);
	void Update();
	bool Finished() { return finished; }
};