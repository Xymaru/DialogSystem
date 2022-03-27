#include <iostream>
#include "Dialog.h"

void FillDialog(Dialog& dialog) {
	// TODO 1: Create a node to be updating

	// TODO 2: Create every node sepparately and add to the dialog
	// Remember: The dialog must be created backwards and separated by branches
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