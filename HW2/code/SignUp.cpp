#include "SignUp.h"

SignUp::SignUp() {
	puser_account_ = new User();
}

SignUp::~SignUp() {
	delete puser_account_;
}

void SignUp::AddUserAccount(string id, string password, string phone_number) {
	puser_account_->AddNewUser(id, password, phone_number);
}