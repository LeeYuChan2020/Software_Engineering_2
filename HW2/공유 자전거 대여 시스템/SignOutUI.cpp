#include "SignOutUI.h"

void SignOutUI::RequestSignOut(ofstream& output_file) {
	string id;

	psign_out_->HandleSignOut(id);

	// ��� ����
	output_file << "2.2. �α׾ƿ�" << endl;
	output_file << "> " << id << endl << endl;
}