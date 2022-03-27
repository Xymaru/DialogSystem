#include <iostream>
#include "Dialog.h"

void FillDialog(Dialog dialog) {
	DialogNode node;
}

int main() {
	Dialog NPCdialog;

	while (!NPCdialog.Finished()) {
		NPCdialog.Update();
	}

	system("pause");
	return 0;
}