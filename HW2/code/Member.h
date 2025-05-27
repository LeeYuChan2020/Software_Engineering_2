#ifndef _MEMBER_H
#define _MEMBER_H

#include <string>
using namespace std;

class Member {
public:
	Member();
	void LoadAccount(string id, string password);
	//�α׾ƿ��ϴ� id �� ���� �� ���� ������ �ʱ�ȭ
	void ClearSession(string& id);
	void Exit(bool& is_exit);
protected:
	string id_;
	string password_;
	bool is_logged_in_;
	bool is_exit_;
};

#endif 