#include "SignOutUI.h"

void SignOutUI::RequestSignOut(ofstream& output_file) {
	string id;

	psign_out_->HandleSignOut(id);

	// 출력 형식
	output_file << "2.2. 로그아웃" << endl;
	output_file << "> " << id << endl << endl;
}