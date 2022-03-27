#include <iostream>
#include "Dialog.h"

void FillDialog(Dialog& dialog) {
	DialogNode node;

	// Last branch
	size_t id;
	node.text = "[Ralph]: Bla bla bla...";

	id = dialog.AddNode(node);

	node.text = "[Ralph]: Alright... Let me tell you who I am.";
	node.nodes.push_back(id);

	id = dialog.AddNode(node);

	// Branch 1
	size_t id_1;

	node.text = "[Ralph]: Are you sure you never heard of Ralph the mage master?";
	node.nodes.push_back(id);

	id_1 = dialog.AddNode(node);

	node.text = "...";
	node.nodes.push_back(id_1);

	id_1 = dialog.AddNode(node);

	// Branch 2
	size_t id_2;

	node.text = "[Ralph]: Of course, I am famous!";
	node.nodes.push_back(id);
	node.options.push_back("Just kidding, never heard of you.");

	id_2 = dialog.AddNode(node);

	// Branch 3
	size_t id_3;

	node.text = "[Ralph]: I would never trick you, I am good, I help people!";
	node.nodes.push_back(id);

	id_3 = dialog.AddNode(node);

	node.text = "[Ralph]: What? Why would I do that?!";
	node.nodes.push_back(id_3);

	id_3 = dialog.AddNode(node);

	// Connect to main branch
	node.text = "[Ralph]: I'm sure you heard speak of me!";
	node.nodes.push_back(id_1);
	node.options.push_back("Uh... no?");

	node.nodes.push_back(id_2);
	node.options.push_back("Oh yes I remember");
	
	node.nodes.push_back(id_3);
	node.options.push_back("Are you trying to trick me?");

	id = dialog.AddNode(node);

	node.text = "[Ralph]: I'm Ralph, the mage master!";
	node.nodes.push_back(id);

	id = dialog.AddNode(node);

	node.text = "[?]: Hello, fellow human!";
	node.nodes.push_back(id);
	node.options.push_back("Hello?");

	node.nodes.push_back(id);
	node.options.push_back("Who are you?");

	dialog.AddNode(node);
}

int main() {
	Dialog NPCdialog;

	FillDialog(NPCdialog);

	while (!NPCdialog.Finished()) {
		NPCdialog.Update();
	}

	system("pause");
	return 0;
}