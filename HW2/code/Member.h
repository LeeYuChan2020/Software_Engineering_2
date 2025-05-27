#ifndef _MEMBER_H
#define _MEMBER_H

#include <string>
using namespace std;

class Member {
public:
	Member();
	void LoadAccount(string id, string password);
	//로그아웃하는 id 값 전달 및 계정 데이터 초기화
	void ClearSession(string& id);
	void Exit(bool& is_exit);
protected:
	string id_;
	string password_;
	bool is_logged_in_;
	bool is_exit_;
};

#endif 