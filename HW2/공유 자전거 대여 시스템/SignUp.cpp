#include "SignUp.h"


void SignUp::AddUserAccount(string id, string password, string phone_number) {
	puser_account_->AddNewUser(id, password, phone_number);
}