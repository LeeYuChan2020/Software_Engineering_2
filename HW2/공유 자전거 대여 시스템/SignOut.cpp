#include "SignOut.h"

void SignOut::HandleSignOut(string& id) {
	pmember_account_->ClearSession(id);
}