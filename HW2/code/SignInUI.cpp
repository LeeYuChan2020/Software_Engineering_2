#include "SignInUI.h"

SignInUI::SignInUI() {
	psign_in_ = new SignIn();
}

SignInUI::~SignInUI() {
	delete psign_in_;
}

void SignInUI::EnterAccountInfo(ifstream& input_file, ofstream& output_file, string& id) {
	string password;
	input_file >> id >> password;

	psign_in_->HandleSignIn(id, password);

	// 출력 형식
	output_file << "2.1. 로그인" << endl;
	output_file << "> " << id << " " << password << endl << endl;
}