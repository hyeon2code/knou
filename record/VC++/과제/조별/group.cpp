/*
	최초 빌드 환경 Windows 10 1703 의 SDK로 추정
	Visual C++ 프로그래밍 출석수업 조별과제 [충북지역대학 n조 - 조장 권도현]
	제작자 권도현, *
*/


#include <windows.h> // 선행처리 - windows.h 헤더파일을 포함 지시.

#define 권도현	2000 // 매크로상수 '권도현'을 초기값 2000으로 선언.
#define kha	3000 // 매크로상수 'kha'를 초기값 3000으로 선언.
#define ksam	4000 // 매크로상수 'ksam'를 초기값 4000으로 선언.
#define noel	5000 // 매크로상수 'noel'을 초기값 5000으로 선언.
#define fall	6000 // 매크로상수 'fall'을 초기값 6000으로 선언.
#define 방송대	7000 // 매크로상수 '방송대'를 초기값 7000으로 선언.
#define 충북n조	8000 // 매크로상수 '충북n조'를 초기값 8000으로 선언.

HINSTANCE g_hInst;
LPCTSTR lpszClass = L"메인윈도우"; // 메인윈도우 클래스 원형 선언.
LPCTSTR ChildClassName = L"차일드윈도우"; // 차일드윈도우 클래스 원형 선언.
LPCTSTR ChildClassName02 = L"차일드윈도우02"; // 차일드윈도우02 클래스 원형 선언.


LRESULT CALLBACK 메인콜백(HWND,UINT,WPARAM,LPARAM); // 메인콜백 함수 원형 선언.
LRESULT CALLBACK 차일드콜백(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // 차일드콜백 함수 원형 선언.
LRESULT CALLBACK 차일드콜백02(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // 차일드콜백02 함수 원형 선언.

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
	WndClass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH); // 메인윈도우의 배경색을 화이트로 선언.
	WndClass.hCursor=LoadCursor(NULL,IDC_ARROW);  // 메인윈도우에서 마우스 커서를 화살표모양으로 선언.  
	WndClass.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	WndClass.hInstance=hInstance;
	WndClass.lpfnWndProc=(WNDPROC)메인콜백; //메인윈도우 콜백함수명 선언.
	WndClass.lpszClassName=L"메인윈도우"; //메인윈도우 클래스명 선언.
	WndClass.lpszMenuName=NULL;
	WndClass.style=CS_HREDRAW | CS_VREDRAW;
	RegisterClass(&WndClass);     //메인윈도우 등록

	/* 차일드윈도우 등록 */
	WndClass.hbrBackground=(HBRUSH)CreateSolidBrush(RGB(0,175,240)); // 차일드윈도우의 배경색을 rgb값으로 선언.
	WndClass.hCursor=LoadCursor(NULL,IDC_HAND);  // 차일드윈도우에서 마우스 커서를 손바닥모양으로 선언.
	WndClass.lpfnWndProc=차일드콜백;      //차일드윈도우 콜백함수명 선언.
	WndClass.lpszClassName=L"차일드윈도우"; //차일드윈도우 클래스명 선언.
	RegisterClass(&WndClass);	//차일드윈도우 등록

	/* 차일드윈도우02 등록 */
	WndClass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(120, 200, 155)); // 차일드윈도우02의 배경색을 rgb값으로 선언.
	WndClass.hCursor=LoadCursor(NULL,IDC_WAIT);  // 차일드윈도우02에서 마우스 커서를 대기모양으로 선언.
	WndClass.lpfnWndProc = 차일드콜백02;      //차일드윈도우02 콜백함수명 선언.
	WndClass.lpszClassName = L"차일드윈도우02"; //차일드윈도우02 클래스명 선언.
	RegisterClass(&WndClass);	//차일드윈도우02 등록

	/* 메인윈도우 생성 */
	hWnd=CreateWindow(L"메인윈도우",					//클래스명이 메인윈도우인 윈도우를 생성.
					L"Visual C++ 프로그래밍 n조",		//윈도우 제목
					WS_OVERLAPPEDWINDOW | WS_VISIBLE,   //윈도우 스타일
					200, 200,							//윈도우의 위치 (메인윈도우로부터 x,y좌표)
					1280, 720,							//윈도우의 폭과 높이
					(HWND)NULL,
					(HMENU)NULL,
					hInstance,
					NULL);

 	   ShowWindow(hWnd,nCmdShow); // 프로그램 실행중 윈도우를 보여주도록 선언.

	while(GetMessage(&Message,0,0,0)) {
		TranslateMessage(&Message);
		DispatchMessage(&Message);
	}
	return Message.wParam;
}
/* 메인함수 종료 */

/* 메인윈도우 콜백함수 */
LRESULT CALLBACK 메인콜백(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"과목명: Visual C++ 프로그래밍"; // 문자열 객체 text 선언.
	LPCTSTR text2 = L"그룹명: 충북지역대학 n조"; // 문자열 객체 text2 선언.

	switch(iMessage) {
		/* 메인윈도우 속성값 */
		case WM_PAINT:
			{
				PAINTSTRUCT ps;
				HDC hdc = BeginPaint(hWnd, &ps);
				TextOut(hdc, 40, 20, text, lstrlen(text)); // text 객체를 메인윈도우에 표현.
				TextOut(hdc, 40, 40, text2, lstrlen(text2)); // text2 객체를 메인윈도우에 표현.
				EndPaint(hWnd,&ps);
				return 0;
			}

		/* 메인윈도우 내부에 윈도우 생성 */
		case WM_CREATE:
		{
			/* 차일드윈도우 생성 */
			HWND hChildWnd = CreateWindow( 
							L"차일드윈도우",     			//클래스명이 차일드윈도우인 윈도우를 생성. 
							L"차일드 윈도우 1",            	//윈도우 제목
							WS_OVERLAPPEDWINDOW | WS_CHILD,  //윈도우 스타일 
							40,       		//윈도우의 위치 (메인윈도우로부터 x좌표)
							85,       		//윈도우의 위치 (메인윈도우로부터 y좌표)
							500,       		//윈도우 폭
							500,       		//윈도우 높이
							hWnd,
							(HMENU) 1000,
							g_hInst,
							(LPVOID) NULL);	

			ShowWindow(hChildWnd, SW_SHOW); // 프로그램 실행중 윈도우를 보여주도록 선언.

			/* 차일드윈도우02 생성 */
			hChildWnd = CreateWindow(
				L"차일드윈도우02",     			//클래스명이 차일드윈도우02인 윈도우를 생성.
				L"차일드 윈도우 2",            	//윈도우 제목
				WS_OVERLAPPEDWINDOW | WS_CHILD,  //윈도우 스타일 
				740,       		//윈도우의 위치 (메인윈도우로부터 x좌표)
				85,       		//윈도우의 위치 (메인윈도우로부터 y좌표)
				500,       		//윈도우 폭
				500,       		//윈도우 높이
				hWnd,
				(HMENU)1000,
				g_hInst,
				(LPVOID)NULL);

			ShowWindow(hChildWnd, SW_SHOW); // 프로그램 실행중 윈도우를 보여주도록 선언.

			/* 버튼윈도우 생성 */
			hChildWnd = CreateWindow(
							L"button",        	// 버튼 윈도우 생성
							L"권도현",			// 윈도우 제목
							WS_CHILD|WS_VISIBLE, 	// 윈도우 스타일 
							40,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
							610,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
							150,       		// 윈도우 폭
							50,       		// 윈도우 높이
							hWnd,
							(HMENU) 권도현,   	// 컨트롤 ID를 매크로상수 권도현으로 선언.
							g_hInst,
							(LPVOID) NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
							L"button",        	// 버튼 윈도우 생성
							L"kha",			// 윈도우 제목
							WS_CHILD|WS_VISIBLE, 	// 윈도우 스타일 
							300,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
							610,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
							150,       		// 윈도우 폭
							50,       		// 윈도우 높이
							hWnd,
							(HMENU) kha,   	// 컨트롤 ID를 매크로상수 kha로 선언.
							g_hInst,
							(LPVOID) NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
							L"button",        	// 버튼 윈도우 생성
							L"ksam",			// 윈도우 제목
							WS_CHILD|WS_VISIBLE, 	// 윈도우 스타일 
							565,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
							610,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
							150,       		// 윈도우 폭
							50,       		// 윈도우 높이
							hWnd,
							(HMENU) ksam,   	// 컨트롤 ID를 매크로상수 ksam 선언.
							g_hInst,
							(LPVOID) NULL);

			if (!hChildWnd) 	return -1;
			
			hChildWnd = CreateWindow(
							L"button",        	// 버튼 윈도우 생성
							L"noel",			// 윈도우 제목
							WS_CHILD|WS_VISIBLE, 	// 윈도우 스타일 
							830,       		// 윈도우의 위치 (메인윈도우로부터 x좌표)
							610,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
							150,       		// 윈도우 폭
							50,       		// 윈도우 높이
							hWnd,
							(HMENU) noel,   	// 컨트롤 ID를 매크로상수 noel로 선언.
							g_hInst,
							(LPVOID) NULL);

			hChildWnd = CreateWindow(
							L"button",        	// 버튼 윈도우 생성
							L"fall",			// 윈도우 제목
							WS_CHILD|WS_VISIBLE, 	// 윈도우 스타일 
							1090,       	// 윈도우의 위치 (메인윈도우로부터 x좌표)
							610,       		// 윈도우의 위치 (메인윈도우로부터 y좌표)
							150,       		// 윈도우 폭
							50,       		// 윈도우 높이
							hWnd,
							(HMENU) fall,   	// 컨트롤 ID를 매크로상수 fall으로 선언.
							g_hInst,
							(LPVOID) NULL);

			if (!hChildWnd) 	return -1;
			/* 버튼윈도우 생성 끝 */

			return 0;
		}

		/* 메인윈도우에서 특정 버튼을 클릭하는 이벤트 발생시 */
		case WM_COMMAND:
		{
			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 권도현일경우. */
			if(LOWORD(wParam) == 권도현)
			{
				MessageBox(hWnd,L"권도현 010-1111-2222 \nknou@knou.ac.kr",L"권도현 연락처",MB_OK); // 확인버튼만 있는 메세지박스 생성.
			}

			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 kha일경우. */
			if(LOWORD(wParam) == kha)
			{
				MessageBox(hWnd,L"kha 010-3333-4444 \nknou@knou.ac.kr",L"kha 연락처",MB_OK); // 확인버튼만 있는 메세지박스 생성.
			}
			
			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 ksam일경우. */
			if(LOWORD(wParam) == ksam)
			{
				MessageBox(hWnd,L"ksam 010-5555-6666 \nknou@knou.ac.kr",L"ksam 연락처",MB_OK); // 확인버튼만 있는 메세지박스 생성.
			}

			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 noel일경우. */
			if(LOWORD(wParam) == noel)
			{
				MessageBox(hWnd,L"noel 010-7777-8888 \nknou@knou.ac.kr",L"noel 연락처",MB_OK); // 확인버튼만 있는 메세지박스 생성.
			}

			/* 버튼을 클릭하여 메인윈도우의 w파라미터 값이 fall일경우. */
			if(LOWORD(wParam) == fall)
			{
				MessageBox(hWnd,L"fall 010-9999-0000 \nknou@knou.ac.kr",L"fall 연락처",MB_OK); // 확인버튼만 있는 메세지박스 생성.
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

/* 차일드윈도우 콜백함수 */
LRESULT CALLBACK 차일드콜백(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"한국방송통신대학교 컴퓨터과학과"; // 문자열 객체 text 선언.

	switch (message)
	{
		/* 차일드윈도우 속성값 */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(0, 175, 240)); // text 객체의 배경값을 차일드윈도우와 동일하게 선언.
			TextOut(hdc, 5, 5, text, lstrlen(text)); // text 객체를 차일드 윈도우에 표현.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* 버튼윈도우 생성 */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",        		// 버튼 윈도우 생성
				L"방송대",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				150,       		// 윈도우의 위치 (차일드윈도우로부터 x좌표)
				390,       		// 윈도우의 위치 (차일드윈도우로부터 y좌표)
				200,       		// 윈도우 폭
				50,       		// 윈도우 높이
				hWnd,
				(HMENU)방송대,   	// 컨트롤 ID를 매크로상수 방송대로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
	
		return 0;
		}

		/* 차일드윈도우에서 특정 버튼을 클릭하는 이벤트 발생시 */
		case WM_COMMAND:
		{
			/* 버튼을 클릭하여 차일드윈도우의 w파라미터 값이 방송대일경우. */
			if (LOWORD(wParam) == 방송대)
			{
				MessageBox(hWnd, L"최고!", L"방송대", MB_OK); // 제목은 방송대, 내용은 최고!의 확인버튼만 있는 메세지박스 생성.
			}
			return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}

/* 차일드윈도우02 콜백함수 */
LRESULT CALLBACK 차일드콜백02(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"충북지역대학 VC++ n조"; // 문자열 객체 text 선언.

	switch (message)
	{
		/* 차일드윈도우02 속성값 */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
				SetBkColor(hdc, RGB(120,200,155)); // text 객체의 배경값을 차일드윈도우02와 동일하게 선언.
				TextOut(hdc, 5, 5, text, lstrlen(text)); // text 객체를 차일드윈도우02에 표현.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* 버튼윈도우 생성 */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",        		// 버튼 윈도우 생성
				L"충북n조",			// 윈도우 제목
				WS_CHILD | WS_VISIBLE, 	// 윈도우 스타일 
				150,       		// 윈도우의 위치 (차일드윈도우02로부터 x좌표)
				390,       		// 윈도우의 위치 (차일드윈도우02로부터 y좌표)
				200,       		// 윈도우 폭
				50,       		// 윈도우 높이
				hWnd,
				(HMENU)충북n조,   	// 컨트롤 ID를 매크로상수 충북n조로 선언.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			return 0;
		}

		/* 차일드윈도우02에서 특정 버튼을 클릭하는 이벤트 발생시 */
		case WM_COMMAND:
		{
			/* 버튼을 클릭하여 차일드윈도우02의 w파라미터 값이 충북n조일경우. */
			if (LOWORD(wParam) == 충북n조)
			{
				MessageBox(hWnd, L"파이팅!", L"충북n조", MB_OK); // 제목은 충북n조, 내용은 파이팅!의 확인버튼만 있는 메세지박스 생성.
			}
		return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}