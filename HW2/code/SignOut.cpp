#include "SignOut.h"

SignOut::SignOut() {
	pmember_account_ = new Member();
}

SignOut::~SignOut() {
	delete pmember_account_;
}

void SignOut::HandleSignOut(string& id) {
	pmember_account_->ClearSession(id);
}