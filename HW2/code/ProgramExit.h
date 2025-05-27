#ifndef _PROGRAMEXIT_H
#define _PROGRAMEXIT_H

#include "Member.h"

class ProgramExit {
public: 
	ProgramExit();
	~ProgramExit();
	void HandleExit(bool& is_program_exit);
private:
	Member* pmember_account_;
};

#endif //_PROGRAMEXIT_H