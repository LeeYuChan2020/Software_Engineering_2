#include "ProgramExit.h"

ProgramExit::ProgramExit() {
	pmember_account_ = new Member();
}

ProgramExit::~ProgramExit() {
	delete pmember_account_;
}

void ProgramExit::HandleExit(bool& is_program_exit) {
	string id;
	pmember_account_->ClearSession(id);
	pmember_account_->Exit(is_program_exit);
}