#ifndef _PROGRAMEXITUI_H
#define _PROGRAMEXITUI_H

#include "ProgramExit.h"
#include <fstream>

class ProgramExitUI {
public: 
	ProgramExitUI();
	~ProgramExitUI();
	void RequestExit(bool& is_program_exit, ofstream& output_file);
private:
	ProgramExit* pprogram_exit_;
};

#endif //_PROGRAMEXITUI_H