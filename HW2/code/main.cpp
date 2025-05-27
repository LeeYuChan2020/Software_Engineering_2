// ��� ����
#include <stdio.h>
#include <string>
#include <fstream>
#include "SignUpUI.h"
#include "SignInUI.h"
#include "SignOutUI.h"
#include "RegisterBikeUI.h"
#include "RentBikeUI.h"
#include "CheckUserBikeRentalUI.h"
#include "ProgramExitUI.h"

using namespace std;

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
// �Լ� ����
void doTask();

// ���� ����
ofstream out_fp;
ifstream in_fp;
SignUpUI sign_up_ui;
SignInUI sign_in_ui;
SignOutUI sign_out_ui;
RegisterBikeUI register_bike_ui;
RentBikeUI rent_bike_ui;
CheckUserBikeRentalUI check_ubr_ui;
ProgramExitUI program_exit_ui;

int main()
{
	// ���� ������� ���� �ʱ�ȭ
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	doTask();

	out_fp.close();
	in_fp.close();
	return 0;
}

void doTask()
{
	// �޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	bool is_program_exit = false;
	while (!is_program_exit)
	{
		// �Է����Ͽ��� �޴� ���� 2���� �б�
		in_fp >> menu_level_1 >> menu_level_2;
		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1: // "1.1. ȸ�����ԡ� �޴� �κ�
			{
				sign_up_ui.CreateUserAccount(in_fp, out_fp);
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1: // "2.1. �α��Ρ� �޴� �κ�
			{
				sign_in_ui.EnterAccountInfo(in_fp, out_fp);
				break;
			}
			case 2: // "2.2. �α׾ƿ��� �޴� �κ�
			{
				sign_out_ui.RequestSignOut(out_fp);
				break;
			}
			}
			break;
		}
		case 3:
		{
			switch (menu_level_2)
			{
			case 1: // "3.1. ������ ��ϡ� �޴� �κ�
			{
				register_bike_ui.EnterBikeInfo(in_fp, out_fp);
				break;
			}
			}
			break;
		}
		case 4:
		{
			switch (menu_level_2)
			{
			case 1: // "4.1. ������ �뿩�� �޴� �κ�
			{
				rent_bike_ui.EnterBikeID(in_fp, out_fp);
				break;
			}
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1: // "5.1. ������ �뿩 ����Ʈ�� �޴� �κ�
			{
				check_ubr_ui.SetOutputFile(out_fp);
				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1: // "6.1. ���ᡰ �޴� �κ�
			{
				program_exit_ui.RequestExit(is_program_exit, out_fp);
				break;;
			}
			}
			break;
		}
		}
	}
};
