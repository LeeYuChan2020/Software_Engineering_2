#include "SignOutUI.h"

SignOutUI::SignOutUI() {
	psign_out_ = new SignOut();
}

SignOutUI::~SignOutUI() {
	delete psign_out_;
}

void SignOutUI::RequestSignOut(ofstream& output_file, string& id) {
	string user_id;
	user_id = id;
	psign_out_->HandleSignOut(id);

	// ��� ����
	output_file << "2.2. �α׾ƿ�" << endl;
	output_file << "> " << user_id << endl << endl;
}