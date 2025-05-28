#include "SignIn.h"

SignIn::SignIn() {
	pmember_account_ = new Member();
}

void SignIn::HandleSignIn(string id, string password) {
	pmember_account_->LoadAccount(id, password);
}