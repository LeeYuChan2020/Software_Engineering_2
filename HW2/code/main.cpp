// 헤더 선언
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

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
// 함수 선언
void doTask();

// 변수 선언
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
	// 파일 입출력을 위한 초기화
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	doTask();

	out_fp.close();
	in_fp.close();
	return 0;
}

void doTask()
{
	// 메뉴 파싱을 위한 level 구분을 위한 변수
	int menu_level_1 = 0, menu_level_2 = 0;
	bool is_program_exit = false;
	while (!is_program_exit)
	{
		// 입력파일에서 메뉴 숫자 2개를 읽기
		in_fp >> menu_level_1 >> menu_level_2;
		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1: // "1.1. 회원가입“ 메뉴 부분
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
			case 1: // "2.1. 로그인“ 메뉴 부분
			{
				sign_in_ui.EnterAccountInfo(in_fp, out_fp);
				break;
			}
			case 2: // "2.2. 로그아웃“ 메뉴 부분
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
			case 1: // "3.1. 자전거 등록“ 메뉴 부분
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
			case 1: // "4.1. 자전거 대여“ 메뉴 부분
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
			case 1: // "5.1. 자전거 대여 리스트“ 메뉴 부분
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
			case 1: // "6.1. 종료“ 메뉴 부분
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
