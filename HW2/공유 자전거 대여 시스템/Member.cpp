#include "Member.h"

void Member::LoadAccount(string id, string password) {
	is_logged_in_ = true;
	is_exit_ = false;
	id_ = id;
	password_ = password;
}

void Member::ClearSession(string& id) {
	//�α׾ƿ��ϴ� id �� ����
	id = id_;
	//������ �ʱ�ȭ
	id_ = "";
	password_ = "";
	is_logged_in_ = false;
}


void Member::Exit(bool& is_exit) {
	is_exit = true;
}