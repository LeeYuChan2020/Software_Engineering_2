#include "SignInUI.h"


void SignInUI::EnterAccountInfo(ifstream& input_file, ofstream& output_file) {
	string id, password;
	input_file >> id >> password;

	psign_in_->HandleSignIn(id, password);

	// ��� ����
	output_file << "2.1. �α���" << endl;
	output_file << "> " << id << " " << password << endl << endl;
}