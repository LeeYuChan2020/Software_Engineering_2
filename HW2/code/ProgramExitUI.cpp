#include "ProgramExitUI.h"

ProgramExitUI::ProgramExitUI() {
	pprogram_exit_ = new ProgramExit();
}

ProgramExitUI::~ProgramExitUI() {
	delete pprogram_exit_;
}

void ProgramExitUI::RequestExit(bool& is_program_exit, ofstream& output_file) {
	pprogram_exit_->HandleExit(is_program_exit);
	// 출력 형식
	output_file << "6.1. 종료";
}