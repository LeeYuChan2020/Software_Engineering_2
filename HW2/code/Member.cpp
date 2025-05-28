#include "Member.h"

Member::Member() {
	is_logged_in_ = false;
	is_exit_ = false;
	id_ = "";
	password_ = "";
}

void Member::LoadAccount(string id, string password) {
	is_logged_in_ = true;
	is_exit_ = false;
	id_ = id;
	password_ = password;
}


void Member::ClearSession(string& id) {
	//������ �ʱ�ȭ
	id_ = "";
	password_ = "";
	is_logged_in_ = false;
	id = id_;
}


void Member::Exit(bool& is_exit) {
	is_exit = true;
}