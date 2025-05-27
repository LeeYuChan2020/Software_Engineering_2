#include "SignUpUI.h"

SignUpUI::SignUpUI() {
	psign_up_ = new SignUp();
}

SignUpUI::~SignUpUI() {
	delete psign_up_;
}

void SignUpUI::CreateUserAccount(ifstream& input_file, ofstream& output_file) {
	string id, password, phone_number;
	input_file >> id >> password >> phone_number;

	psign_up_->AddUserAccount(id, password, phone_number);

	// ��� ����
	output_file << "1.1. ȸ������" << endl;
	output_file << "> " << id << " " << password << " " << phone_number << endl << endl;
};