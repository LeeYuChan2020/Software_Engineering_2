#include "SignIn.h"

void SignIn::HandleSignIn(string id, string password) {
	member_account_.LoadAccount(id, password);
}