/*
	최초 빌드 환경 Windows 10 1703 의 SDK로 추정
	Visual C++ 프로그래밍 출석수업 조별과제 [충북지역대학 n조 - 조장 권도현]
	제작자 권도현, *
*/


#include <windows.h> // 선행처리 - windows.h 헤더파일을 포함 지시.

#define q1s	10000 // 매크로상수 'q1s'를 초기값 10000으로 선언.
#define q1t	11000 // 매크로상수 'q1t'를 초기값 11000으로 선언.
#define q1f	12000 // 매크로상수 'q1f'를 초기값 12000으로 선언.
#define q2s	20000 // 매크로상수 'q2s'를 초기값 20000으로 선언.
#define q2t	21000 // 매크로상수 'q2t'를 초기값 21000으로 선언.
#define q2f	22000 // 매크로상수 'q2f'를 초기값 22000으로 선언.
#define q3s	30000 // 매크로상수 'q3s'를 초기값 30000으로 선언.
#define q3t	31000 // 매크로상수 'q3t'를 초기값 31000으로 선언.
#define q3f	32000 // 매크로상수 'q3f'를 초기값 32000으로 선언.
#define q4s	40000 // 매크로상수 'q4s'를 초기값 40000으로 선언.
#define q4t	41000 // 매크로상수 'q4t'를 초기값 41000으로 선언.
#define q4f	42000 // 매크로상수 'q4f'를 초기값 42000으로 선언.
#define dev 77777 // 매크로상수 'dev'를 초기값 77777으로 선언.

HINSTANCE g_hInst;
LPCTSTR lpszClass = L"mw";		   // 메인윈도우 클래스 원형 선언.
LPCTSTR ChildClassName = L"q1";   // q1 차일드윈도우 클래스 원형 선언.
LPCTSTR ChildClassName02 = L"q2"; // q2 차일드윈도우 클래스 원형 선언.
LPCTSTR ChildClassName03 = L"q3"; // q3 차일드윈도우 클래스 원형 선언.
LPCTSTR ChildClassName04 = L"q4"; // q4 차일드윈도우 클래스 원형 선언.


LRESULT CALLBACK mp(HWND,UINT,WPARAM,LPARAM); // mp 메인콜백 함수 원형 선언.
LRESULT CALLBACK q1p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // q1p 차일드콜백 함수 원형 선언.
LRESULT CALLBACK q2p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // q2p 차일드콜백 함수 원형 선언.
LRESULT CALLBACK q3p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // q3p 차일드콜백 함수 원형 선언.
LRESULT CALLBACK q4p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // q4p 차일드콜백 함수 원형 선언.

/* 메인함수시작 */
int APIENTRY WinMain(HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPSTR lpszCmdParam,
					 int nCmdShow)
{
	HWND hWnd;
	MSG Message;
	WNDCLASS WndClass;
	g_hInst=hInstance;
	
	/* 메인윈도우 등록 */
	WndClass.cbClsExtra=0;
	WndClass.cbWndExtra=0;
	WndClass.hbrBackground=(HBRUSH)GetStockObject(GRAY_BRUSH); // 메인윈도우의 배경색을 그레이로 선언.
	WndClass.hCursor=LoadCursor(NULL,IDC_WAIT);  // 메인윈도우에서 마우스 커서를 대기모양으로 선언.  
	WndClass.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	WndClass.hInstance=hInstance;
	WndClass.lpfnWndProc=(WNDPROC)mp; //메인윈도우 콜백함수명 선언.
	WndClass.lpszClassName=L"mw"; //메인윈도우 클래스명 선언.
	WndClass.lpszMenuName=NULL;
	WndClass.style=CS_HREDRAW | CS_VREDRAW;
	RegisterClass(&WndClass);     //메인윈도우 등록

	/* q1 차일드윈도우 등록 */
	WndClass.hbrBackground=(HBRUSH)CreateSolidBrush(RGB(0,175,240));	// 윈도우의 배경색을 rgb값으로 선언.
	WndClass.hCursor=LoadCursor(NULL,IDC_HAND);	// 윈도우에서 마우스 커서를 손바닥모양으로 선언.
	WndClass.lpfnWndProc=q1p;		// 콜백함수명 선언.
	WndClass.lpszClassName=L"q1";	// 윈도우 클래스명 선언.
	RegisterClass(&WndClass);		// 윈도우 등록


	/* q2 차일드윈도우 등록 */
	WndClass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 175, 240));	// 윈도우의 배경색을 rgb값으로 선언.
	WndClass.hCursor = LoadCursor(NULL, IDC_HAND);	// 윈도우에서 마우스 커서를 손바닥모양으로 선언.
	WndClass.lpfnWndProc = q2p;		// 콜백함수명 선언.
	WndClass.lpszClassName = L"q2";	// 윈도우 클래스명 선언.
	RegisterClass(&WndClass);		// 윈도우 등록


	/* q1 차일드윈도우 등록 */
	WndClass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 175, 240));	// 윈도우의 배경색을 rgb값으로 선언.
	WndClass.hCursor = LoadCursor(NULL, IDC_HAND);	// 윈도우에서 마우스 커서를 손바닥모양으로 선언.
	WndClass.lpfnWndProc = q3p;		// 콜백함수명 선언.
	WndClass.lpszClassName = L"q3";	// 윈도우 클래스명 선언.
	RegisterClass(&WndClass);		// 윈도우 등록


	/* q4 차일드윈도우 등록 */
	WndClass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 175, 240));	// 윈도우의 배경색을 rgb값으로 선언.
	WndClass.hCursor = LoadCursor(NULL, IDC_HAND);	// 윈도우에서 마우스 커서를 손바닥모양으로 선언.
	WndClass.lpfnWndProc = q4p;		// 콜백함수명 선언.
	WndClass.lpszClassName = L"q4";	// 윈도우 클래스명 선언.
	RegisterClass(&WndClass);		// 윈도우 등록

	/* 메인윈도우 생성 */
	hWnd=CreateWindow(L"mw",						//클래스명이 mw인 윈도우를 생성.
					L"Visual C++ 프로그래밍 권도현 개별과제",		//윈도우 제목
					WS_OVERLAPPEDWINDOW | WS_VISIBLE,   //윈도우스타일
					200, 200,							//윈도우가 보일때 X Y좌표
					550, 750,							//윈도우의 폭과 높이				
					(HWND)NULL,
					(HMENU)NULL,
					hInstance,
					NULL);

 	   ShowWindow(hWnd,nCmdShow); // 프로그램 실행중 메인윈도우를 보여주도록 선언.

	while(GetMessage(&Message,0,0,0)) {
		TranslateMessage(&Message);
		DispatchMessage(&Message);
	}
	return Message.wParam;
}
/* 메인함수 종료 */

/* 메인 콜백함수 */
LRESULT CALLBACK mp(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"과목명: Visual C++ 프로그래밍"; // 문자열 객체 text 선언.
	LPCTSTR text2 = L"과제명: 이산수학 퀴즈!"; // 문자열 객체 text2 선언.
	LPCTSTR text3 = L"주의! 윈도우가 열려있을땐 다른 윈도우를 열지 말아주세요!"; // 문자열 객체 text3 선언.

	switch(iMessage) {
		/* 메인윈도우 속성값 */
		case WM_PAINT:
			{
				PAINTSTRUCT ps;
				HDC hdc = BeginPaint(hWnd, &ps);
				TextOut(hdc, 25, 10, text, lstrlen(text)); // text 객체를 메인윈도우에 표현.
				TextOut(hdc, 25, 30, text2, lstrlen(text2)); // text2 객체를 메인윈도우에 표현.
				TextOut(hdc, 25, 50, text3, lstrlen(text3)); // text3 객체를 메인윈도우에 표현.
				EndPaint(hWnd,&ps);
				return 0;
			}

		/* 메인윈도우 내부에 윈도우 생성 */
		case WM_CREATE:
		{
			/* 버튼 윈도우 생성 */
			HWND hChildWnd = CreateWindow(
				L"button",        	// 버튼 윈도우 생성
				L"Quiz 1",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				25,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
				595,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
				100,       		// 윈도우 폭
				50,       		// 윈도우 높이
				hWnd,
				(HMENU)q1s,   	// 컨트롤 ID를 매크로상수 q1s로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",        	// 버튼 윈도우 생성
				L"Quiz 2",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				158,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
				595,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
				100,       		// 윈도우 폭
				50,       		// 윈도우 높이
				hWnd,
				(HMENU)q2s,   	// 컨트롤 ID를 매크로상수 q2s로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",        	// 버튼 윈도우 생성
				L"Quiz 3",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				292,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
				595,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
				100,       		// 윈도우 폭
				50,       		// 윈도우 높이
				hWnd,
				(HMENU)q3s,   	// 컨트롤 ID를 매크로상수 q3s로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",        	// 버튼 윈도우 생성
				L"Quiz 4",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				425,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
				595,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
				100,       		// 윈도우 폭
				50,       		// 윈도우 높이
				hWnd,
				(HMENU)q4s,   	// 컨트롤 ID를 매크로상수 q4s로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",        	// 버튼 윈도우 생성
				L"제작자",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				455,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
				670,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
				70,       		// 윈도우 폭
				30,       		// 윈도우 높이
				hWnd,
				(HMENU)dev,   	// 컨트롤 ID를 매크로상수 dev로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			return 0;
		}

		/* 메인윈도우에서 특정 버튼을 클릭하는 이벤트 발생시 */
		case WM_COMMAND:
		{
			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 q1s일경우. */
			if (LOWORD(wParam) == q1s)
			{
				MessageBox(hWnd, L"퀴즈를 시작합니다.", L"Quiz Start!", MB_OK); // 확인버튼만 있는 메세지박스 생성.

				/* 차일드윈도우 생성 */
				HWND hChildWnd = CreateWindow(
					L"q1",     			//클래스명이 q1인 윈도우를 생성.
					L"Quiz 1",            	//윈도우 제목
					WS_OVERLAPPEDWINDOW | WS_CHILD,  //윈도우 스타일 
					25,       		//윈도우의 위치 (메인윈도우로부터 x좌표)
					75,       		//윈도우의 위치 (메인윈도우로부터 y좌표)
					500,       		//윈도우 폭
					500,       		//윈도우 높이
					hWnd,
					(HMENU)1000,
					g_hInst,
					(LPVOID)NULL);
				ShowWindow(hChildWnd, SW_SHOW);
			}

			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 q2s일경우. */
			if (LOWORD(wParam) == q2s)
			{
				MessageBox(hWnd, L"퀴즈를 시작합니다.", L"Quiz Start!", MB_OK); // 확인버튼만 있는 메세지박스 생성.

				/* 차일드윈도우 생성 */
				HWND hChildWnd = CreateWindow(
					L"q2",     			//클래스명이 q2인 윈도우를 생성.
					L"Quiz 2",            	//윈도우 제목
					WS_OVERLAPPEDWINDOW | WS_CHILD,  //윈도우 스타일 
					25,       		//윈도우의 위치 (메인윈도우로부터 x좌표)
					75,       		//윈도우의 위치 (메인윈도우로부터 y좌표)
					500,       		//윈도우 폭
					500,       		//윈도우 높이
					hWnd,
					(HMENU)1000,
					g_hInst,
					(LPVOID)NULL);
				ShowWindow(hChildWnd, SW_SHOW);
			}

			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 q3s일경우. */
			if (LOWORD(wParam) == q3s)
			{
				MessageBox(hWnd, L"퀴즈를 시작합니다.", L"Quiz Start!", MB_OK); // 확인버튼만 있는 메세지박스 생성.

				/* 차일드윈도우 생성 */
				HWND hChildWnd = CreateWindow(
					L"q3",     			//클래스명이 q3인 윈도우를 생성.
					L"Quiz 3",            	//윈도우 제목
					WS_OVERLAPPEDWINDOW | WS_CHILD,  //윈도우 스타일 
					25,       		//윈도우의 위치 (메인윈도우로부터 x좌표)
					75,       		//윈도우의 위치 (메인윈도우로부터 y좌표)
					500,       		//윈도우 폭
					500,       		//윈도우 높이
					hWnd,
					(HMENU)1000,
					g_hInst,
					(LPVOID)NULL);
				ShowWindow(hChildWnd, SW_SHOW);
			}

			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 q4s일경우. */
			if (LOWORD(wParam) == q4s)
			{
				MessageBox(hWnd, L"퀴즈를 시작합니다.", L"Quiz Start!", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				/* 차일드윈도우 생성 */
				HWND hChildWnd = CreateWindow(
					L"q4",     			//클래스명이 q4인 윈도우를 생성.
					L"Quiz 4",            	//윈도우 제목
					WS_OVERLAPPEDWINDOW | WS_CHILD,  //윈도우 스타일 
					25,       		//윈도우의 위치 (메인윈도우로부터 x좌표)
					75,       		//윈도우의 위치 (메인윈도우로부터 y좌표)
					500,       		//윈도우 폭
					500,       		//윈도우 높이
					hWnd,
					(HMENU)1000,
					g_hInst,
					(LPVOID)NULL);
				ShowWindow(hChildWnd, SW_SHOW);
			}

			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 dev일경우. */
			if (LOWORD(wParam) == dev)
			{
				MessageBox(hWnd, L"권도현 201634-156441 \n010-6665-6033 \ntkenn@knou.ac.kr", L"제작자 정보", MB_OK); // 확인버튼만 있는 메세지박스 생성.
			}

		return 0;
		}

		/* 메인윈도우의 종료버튼을 클릭하는 이벤트 발생시 */
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0; // 프로그램 종료.
		}
	return(DefWindowProc(hWnd,iMessage,wParam,lParam));
}

/* q1p 콜백함수 */
LRESULT CALLBACK q1p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"1번문제입니다."; // 문자열 객체 text 선언.
	LPCTSTR text2 = L"추상화란, 문제와 관련된 핵심내용만 남기고 나머지 내용은 "; // 문자열 객체 text2 선언.
	LPCTSTR text21 = L"제거하여 문제를 단순화시키는 것을 의미한다."; // 문자열 객체 text21 선언.
	LPCTSTR text3 = L"맞으면 O. 틀리면 X."; // 문자열 객체 text3 선언.

	switch (message)
	{
		/* 윈도우 속성값 */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(120, 200, 155)); // text 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 10, text, lstrlen(text)); // text 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text2 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 30, text2, lstrlen(text2)); // text2 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text21 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 50, text21, lstrlen(text21)); // text21 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text3 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 70, text3, lstrlen(text3)); // text3 객체를 윈도우에 표현.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* 버튼윈도우 생성 */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",      // 버튼 윈도우 생성
				L"O",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				15,       		// 윈도우의 위치 (윈도우로부터 x좌표)
				200,       		// 윈도우의 위치 (윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,
				(HMENU)q1t,   	// 컨트롤 ID를 매크로상수 q1t로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",      // 버튼 윈도우 생성
				L"X",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				270,       		// 윈도우의 위치 (윈도우로부터 x좌표)
				200,       		// 윈도우의 위치 (윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,
				(HMENU)q1f,   	// 컨트롤 ID를 매크로상수 q1f로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
		}

		/* 윈도우에서 특정 버튼을 클릭하는 이벤트 발생시 */
		case WM_COMMAND:
		{
			/* 버튼을 클릭하여 윈도우의 w파라미터 값이 q1t일경우. */
			if (LOWORD(wParam) == q1t)
			{
				MessageBox(hWnd, L"정답입니다.", L"정답!", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				DestroyWindow(hWnd); // 윈도우 종료
			}

			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 q1f일경우. */
			if (LOWORD(wParam) == q1f)
			{
				MessageBox(hWnd, L"오답입니다..", L"땡..", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				DestroyWindow(hWnd); // 윈도우 종료
			}

			return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}

/* q2p 콜백함수 */
LRESULT CALLBACK q2p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"2번문제입니다."; // 문자열 객체 text 선언.
	LPCTSTR text2 = L"공집합은 모든집합의 부분집합이 아니다."; // 문자열 객체 text2 선언.
	LPCTSTR text3 = L"맞으면 O. 틀리면 X."; // 문자열 객체 text3 선언.

	switch (message)
	{
		/* 윈도우 속성값 */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(120, 200, 155)); // text 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 10, text, lstrlen(text)); // text 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text2 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 30, text2, lstrlen(text2)); // text2 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text3 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 50, text3, lstrlen(text3)); // text3 객체를 윈도우에 표현.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* 버튼윈도우 생성 */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",      // 버튼 윈도우 생성
				L"O",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				15,       		// 윈도우의 위치 (윈도우로부터 x좌표)
				200,       		// 윈도우의 위치 (윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,
				(HMENU)q2t,   	// 컨트롤 ID를 매크로상수 q2t로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",      // 버튼 윈도우 생성
				L"X",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				270,       		// 윈도우의 위치 (윈도우로부터 x좌표)
				200,       		// 윈도우의 위치 (윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,
				(HMENU)q2f,   	// 컨트롤 ID를 매크로상수 q2f로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
		}

		/* 윈도우에서 특정 버튼을 클릭하는 이벤트 발생시 */
		case WM_COMMAND:
		{
			/* 버튼을 클릭하여 윈도우의 w파라미터 값이 q2t일경우. */
			if (LOWORD(wParam) == q2t)
			{
				MessageBox(hWnd, L"오답입니다..", L"땡..", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				DestroyWindow(hWnd); // 윈도우 종료
			}

			/* 버튼을 클릭하여 윈도우의 w파라미터 값이 q2f일경우. */
			if (LOWORD(wParam) == q2f)
			{
				MessageBox(hWnd, L"정답입니다.", L"정답!", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				DestroyWindow(hWnd); // 윈도우 종료
			}

			return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}

/* q3p 콜백함수 */
LRESULT CALLBACK q3p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"3번문제입니다."; // 문자열 객체 text 선언.
	LPCTSTR text2 = L"영행렬은 하나 이상의 원소가 0인 행렬을 말한다."; // 문자열 객체 text2 선언.
	LPCTSTR text3 = L"맞으면 O. 틀리면 X."; // 문자열 객체 text3 선언.

	switch (message)
	{
		/* 윈도우 속성값 */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(120, 200, 155)); // text 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 10, text, lstrlen(text)); // text 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text2 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 30, text2, lstrlen(text2)); // text2 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text3 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 50, text3, lstrlen(text3)); // text3 객체를 윈도우에 표현.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* 버튼윈도우 생성 */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",      // 버튼 윈도우 생성
				L"O",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				15,       		// 윈도우의 위치 (윈도우로부터 x좌표)
				200,       		// 윈도우의 위치 (윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,
				(HMENU)q3t,   	// 컨트롤 ID를 매크로상수 q3t로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",      // 버튼 윈도우 생성
				L"X",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				270,       		// 윈도우의 위치 (윈도우로부터 x좌표)
				200,       		// 윈도우의 위치 (윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,
				(HMENU)q3f,   	// 컨트롤 ID를 매크로상수 q3f로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
		}

		/* 윈도우에서 특정 버튼을 클릭하는 이벤트 발생시 */
		case WM_COMMAND:
		{
			/* 버튼을 클릭하여 윈도우의 w파라미터 값이 q3t일경우. */
			if (LOWORD(wParam) == q3t)
			{
				MessageBox(hWnd, L"오답입니다..", L"땡..", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				DestroyWindow(hWnd); // 윈도우 종료
			}

			/* 버튼을 클릭하여 윈도우의 w파라미터 값이 q3f일경우. */
			if (LOWORD(wParam) == q3f)
			{
				MessageBox(hWnd, L"정답입니다.", L"정답!", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				DestroyWindow(hWnd); // 윈도우 종료
			}

			return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}

/* q4p 콜백함수 */
LRESULT CALLBACK q4p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"4번문제입니다."; // 문자열 객체 text 선언.
	LPCTSTR text2 = L"알고리즘의 표현 방법으로 컴퓨터 프로그래밍 언어, 순서도, "; // 문자열 객체 text2 선언.
	LPCTSTR text21 = L"의사코드가 있다."; // 문자열 객체 text21 선언.
	LPCTSTR text3 = L"맞으면 O. 틀리면 X."; // 문자열 객체 text3 선언.

	switch (message)
	{
		/* 윈도우 속성값 */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(120, 200, 155)); // text 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 10, text, lstrlen(text)); // text 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text2 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 30, text2, lstrlen(text2)); // text2 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text21 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 30, text21, lstrlen(text21)); // text21 객체를 윈도우에 표현.
			SetBkColor(hdc, RGB(120, 200, 155)); // text3 객체의 배경값을 윈도우와 동일한 색으로 선언.
			TextOut(hdc, 15, 50, text3, lstrlen(text3)); // text3 객체를 윈도우에 표현.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* 버튼윈도우 생성 */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",      // 버튼 윈도우 생성
				L"O",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				15,       		// 윈도우의 위치 (윈도우로부터 x좌표)
				200,       		// 윈도우의 위치 (윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,
				(HMENU)q4t,   	// 컨트롤 ID를 매크로상수 q4t로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",      // 버튼 윈도우 생성
				L"X",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				270,       		// 윈도우의 위치 (윈도우로부터 x좌표)
				200,       		// 윈도우의 위치 (윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				200,       		// 윈도우 높이
				hWnd,
				(HMENU)q4f,   	// 컨트롤 ID를 매크로상수 q4f로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
		}

		/* 윈도우에서 특정 버튼을 클릭하는 이벤트 발생시 */
		case WM_COMMAND:
		{
			/* 버튼을 클릭하여 윈도우의 w파라미터 값이 q4t일경우. */
			if (LOWORD(wParam) == q4t)
			{
				MessageBox(hWnd, L"정답입니다.", L"정답!", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				DestroyWindow(hWnd); // 윈도우 종료
			}

			/* 버튼을 클릭하여 윈도우의 w파라미터 값이 q4f일경우. */
			if (LOWORD(wParam) == q4f)
			{
				MessageBox(hWnd, L"오답입니다..", L"땡..", MB_OK); // 확인버튼만 있는 메세지박스 생성.
				DestroyWindow(hWnd); // 윈도우 종료
			}

		return 0;
	}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}