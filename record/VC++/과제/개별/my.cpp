/*
	���� ���� ȯ�� Windows 10 1703 �� SDK�� ����
	Visual C++ ���α׷��� �⼮���� �������� [����������� n�� - ���� �ǵ���]
	������ �ǵ���, *
*/


#include <windows.h> // ����ó�� - windows.h ��������� ���� ����.

#define q1s	10000 // ��ũ�λ�� 'q1s'�� �ʱⰪ 10000���� ����.
#define q1t	11000 // ��ũ�λ�� 'q1t'�� �ʱⰪ 11000���� ����.
#define q1f	12000 // ��ũ�λ�� 'q1f'�� �ʱⰪ 12000���� ����.
#define q2s	20000 // ��ũ�λ�� 'q2s'�� �ʱⰪ 20000���� ����.
#define q2t	21000 // ��ũ�λ�� 'q2t'�� �ʱⰪ 21000���� ����.
#define q2f	22000 // ��ũ�λ�� 'q2f'�� �ʱⰪ 22000���� ����.
#define q3s	30000 // ��ũ�λ�� 'q3s'�� �ʱⰪ 30000���� ����.
#define q3t	31000 // ��ũ�λ�� 'q3t'�� �ʱⰪ 31000���� ����.
#define q3f	32000 // ��ũ�λ�� 'q3f'�� �ʱⰪ 32000���� ����.
#define q4s	40000 // ��ũ�λ�� 'q4s'�� �ʱⰪ 40000���� ����.
#define q4t	41000 // ��ũ�λ�� 'q4t'�� �ʱⰪ 41000���� ����.
#define q4f	42000 // ��ũ�λ�� 'q4f'�� �ʱⰪ 42000���� ����.
#define dev 77777 // ��ũ�λ�� 'dev'�� �ʱⰪ 77777���� ����.

HINSTANCE g_hInst;
LPCTSTR lpszClass = L"mw";		   // ���������� Ŭ���� ���� ����.
LPCTSTR ChildClassName = L"q1";   // q1 ���ϵ������� Ŭ���� ���� ����.
LPCTSTR ChildClassName02 = L"q2"; // q2 ���ϵ������� Ŭ���� ���� ����.
LPCTSTR ChildClassName03 = L"q3"; // q3 ���ϵ������� Ŭ���� ���� ����.
LPCTSTR ChildClassName04 = L"q4"; // q4 ���ϵ������� Ŭ���� ���� ����.


LRESULT CALLBACK mp(HWND,UINT,WPARAM,LPARAM); // mp �����ݹ� �Լ� ���� ����.
LRESULT CALLBACK q1p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // q1p ���ϵ��ݹ� �Լ� ���� ����.
LRESULT CALLBACK q2p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // q2p ���ϵ��ݹ� �Լ� ���� ����.
LRESULT CALLBACK q3p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // q3p ���ϵ��ݹ� �Լ� ���� ����.
LRESULT CALLBACK q4p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // q4p ���ϵ��ݹ� �Լ� ���� ����.

/* �����Լ����� */
int APIENTRY WinMain(HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPSTR lpszCmdParam,
					 int nCmdShow)
{
	HWND hWnd;
	MSG Message;
	WNDCLASS WndClass;
	g_hInst=hInstance;
	
	/* ���������� ��� */
	WndClass.cbClsExtra=0;
	WndClass.cbWndExtra=0;
	WndClass.hbrBackground=(HBRUSH)GetStockObject(GRAY_BRUSH); // ������������ ������ �׷��̷� ����.
	WndClass.hCursor=LoadCursor(NULL,IDC_WAIT);  // ���������쿡�� ���콺 Ŀ���� ��������� ����.  
	WndClass.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	WndClass.hInstance=hInstance;
	WndClass.lpfnWndProc=(WNDPROC)mp; //���������� �ݹ��Լ��� ����.
	WndClass.lpszClassName=L"mw"; //���������� Ŭ������ ����.
	WndClass.lpszMenuName=NULL;
	WndClass.style=CS_HREDRAW | CS_VREDRAW;
	RegisterClass(&WndClass);     //���������� ���

	/* q1 ���ϵ������� ��� */
	WndClass.hbrBackground=(HBRUSH)CreateSolidBrush(RGB(0,175,240));	// �������� ������ rgb������ ����.
	WndClass.hCursor=LoadCursor(NULL,IDC_HAND);	// �����쿡�� ���콺 Ŀ���� �չٴڸ������ ����.
	WndClass.lpfnWndProc=q1p;		// �ݹ��Լ��� ����.
	WndClass.lpszClassName=L"q1";	// ������ Ŭ������ ����.
	RegisterClass(&WndClass);		// ������ ���


	/* q2 ���ϵ������� ��� */
	WndClass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 175, 240));	// �������� ������ rgb������ ����.
	WndClass.hCursor = LoadCursor(NULL, IDC_HAND);	// �����쿡�� ���콺 Ŀ���� �չٴڸ������ ����.
	WndClass.lpfnWndProc = q2p;		// �ݹ��Լ��� ����.
	WndClass.lpszClassName = L"q2";	// ������ Ŭ������ ����.
	RegisterClass(&WndClass);		// ������ ���


	/* q1 ���ϵ������� ��� */
	WndClass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 175, 240));	// �������� ������ rgb������ ����.
	WndClass.hCursor = LoadCursor(NULL, IDC_HAND);	// �����쿡�� ���콺 Ŀ���� �չٴڸ������ ����.
	WndClass.lpfnWndProc = q3p;		// �ݹ��Լ��� ����.
	WndClass.lpszClassName = L"q3";	// ������ Ŭ������ ����.
	RegisterClass(&WndClass);		// ������ ���


	/* q4 ���ϵ������� ��� */
	WndClass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 175, 240));	// �������� ������ rgb������ ����.
	WndClass.hCursor = LoadCursor(NULL, IDC_HAND);	// �����쿡�� ���콺 Ŀ���� �չٴڸ������ ����.
	WndClass.lpfnWndProc = q4p;		// �ݹ��Լ��� ����.
	WndClass.lpszClassName = L"q4";	// ������ Ŭ������ ����.
	RegisterClass(&WndClass);		// ������ ���

	/* ���������� ���� */
	hWnd=CreateWindow(L"mw",						//Ŭ�������� mw�� �����츦 ����.
					L"Visual C++ ���α׷��� �ǵ��� ��������",		//������ ����
					WS_OVERLAPPEDWINDOW | WS_VISIBLE,   //�����콺Ÿ��
					200, 200,							//�����찡 ���϶� X Y��ǥ
					550, 750,							//�������� ���� ����				
					(HWND)NULL,
					(HMENU)NULL,
					hInstance,
					NULL);

 	   ShowWindow(hWnd,nCmdShow); // ���α׷� ������ ���������츦 �����ֵ��� ����.

	while(GetMessage(&Message,0,0,0)) {
		TranslateMessage(&Message);
		DispatchMessage(&Message);
	}
	return Message.wParam;
}
/* �����Լ� ���� */

/* ���� �ݹ��Լ� */
LRESULT CALLBACK mp(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"�����: Visual C++ ���α׷���"; // ���ڿ� ��ü text ����.
	LPCTSTR text2 = L"������: �̻���� ����!"; // ���ڿ� ��ü text2 ����.
	LPCTSTR text3 = L"����! �����찡 ���������� �ٸ� �����츦 ���� �����ּ���!"; // ���ڿ� ��ü text3 ����.

	switch(iMessage) {
		/* ���������� �Ӽ��� */
		case WM_PAINT:
			{
				PAINTSTRUCT ps;
				HDC hdc = BeginPaint(hWnd, &ps);
				TextOut(hdc, 25, 10, text, lstrlen(text)); // text ��ü�� ���������쿡 ǥ��.
				TextOut(hdc, 25, 30, text2, lstrlen(text2)); // text2 ��ü�� ���������쿡 ǥ��.
				TextOut(hdc, 25, 50, text3, lstrlen(text3)); // text3 ��ü�� ���������쿡 ǥ��.
				EndPaint(hWnd,&ps);
				return 0;
			}

		/* ���������� ���ο� ������ ���� */
		case WM_CREATE:
		{
			/* ��ư ������ ���� */
			HWND hChildWnd = CreateWindow(
				L"button",        	// ��ư ������ ����
				L"Quiz 1",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				25,       		// �������� ��ġ (����������κ��� x��ǥ)
				595,       		// �������� ��ġ (����������κ��� y��ǥ)
				100,       		// ������ ��
				50,       		// ������ ����
				hWnd,
				(HMENU)q1s,   	// ��Ʈ�� ID�� ��ũ�λ�� q1s�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",        	// ��ư ������ ����
				L"Quiz 2",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				158,       		// �������� ��ġ (����������κ��� x��ǥ)
				595,       		// �������� ��ġ (����������κ��� y��ǥ)
				100,       		// ������ ��
				50,       		// ������ ����
				hWnd,
				(HMENU)q2s,   	// ��Ʈ�� ID�� ��ũ�λ�� q2s�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",        	// ��ư ������ ����
				L"Quiz 3",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				292,       		// �������� ��ġ (����������κ��� x��ǥ)
				595,       		// �������� ��ġ (����������κ��� y��ǥ)
				100,       		// ������ ��
				50,       		// ������ ����
				hWnd,
				(HMENU)q3s,   	// ��Ʈ�� ID�� ��ũ�λ�� q3s�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",        	// ��ư ������ ����
				L"Quiz 4",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				425,       		// �������� ��ġ (����������κ��� x��ǥ)
				595,       		// �������� ��ġ (����������κ��� y��ǥ)
				100,       		// ������ ��
				50,       		// ������ ����
				hWnd,
				(HMENU)q4s,   	// ��Ʈ�� ID�� ��ũ�λ�� q4s�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",        	// ��ư ������ ����
				L"������",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				455,       		// �������� ��ġ (����������κ��� x��ǥ)
				670,       		// �������� ��ġ (����������κ��� y��ǥ)
				70,       		// ������ ��
				30,       		// ������ ����
				hWnd,
				(HMENU)dev,   	// ��Ʈ�� ID�� ��ũ�λ�� dev�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			return 0;
		}

		/* ���������쿡�� Ư�� ��ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_COMMAND:
		{
			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� q1s�ϰ��. */
			if (LOWORD(wParam) == q1s)
			{
				MessageBox(hWnd, L"��� �����մϴ�.", L"Quiz Start!", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.

				/* ���ϵ������� ���� */
				HWND hChildWnd = CreateWindow(
					L"q1",     			//Ŭ�������� q1�� �����츦 ����.
					L"Quiz 1",            	//������ ����
					WS_OVERLAPPEDWINDOW | WS_CHILD,  //������ ��Ÿ�� 
					25,       		//�������� ��ġ (����������κ��� x��ǥ)
					75,       		//�������� ��ġ (����������κ��� y��ǥ)
					500,       		//������ ��
					500,       		//������ ����
					hWnd,
					(HMENU)1000,
					g_hInst,
					(LPVOID)NULL);
				ShowWindow(hChildWnd, SW_SHOW);
			}

			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� q2s�ϰ��. */
			if (LOWORD(wParam) == q2s)
			{
				MessageBox(hWnd, L"��� �����մϴ�.", L"Quiz Start!", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.

				/* ���ϵ������� ���� */
				HWND hChildWnd = CreateWindow(
					L"q2",     			//Ŭ�������� q2�� �����츦 ����.
					L"Quiz 2",            	//������ ����
					WS_OVERLAPPEDWINDOW | WS_CHILD,  //������ ��Ÿ�� 
					25,       		//�������� ��ġ (����������κ��� x��ǥ)
					75,       		//�������� ��ġ (����������κ��� y��ǥ)
					500,       		//������ ��
					500,       		//������ ����
					hWnd,
					(HMENU)1000,
					g_hInst,
					(LPVOID)NULL);
				ShowWindow(hChildWnd, SW_SHOW);
			}

			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� q3s�ϰ��. */
			if (LOWORD(wParam) == q3s)
			{
				MessageBox(hWnd, L"��� �����մϴ�.", L"Quiz Start!", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.

				/* ���ϵ������� ���� */
				HWND hChildWnd = CreateWindow(
					L"q3",     			//Ŭ�������� q3�� �����츦 ����.
					L"Quiz 3",            	//������ ����
					WS_OVERLAPPEDWINDOW | WS_CHILD,  //������ ��Ÿ�� 
					25,       		//�������� ��ġ (����������κ��� x��ǥ)
					75,       		//�������� ��ġ (����������κ��� y��ǥ)
					500,       		//������ ��
					500,       		//������ ����
					hWnd,
					(HMENU)1000,
					g_hInst,
					(LPVOID)NULL);
				ShowWindow(hChildWnd, SW_SHOW);
			}

			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� q4s�ϰ��. */
			if (LOWORD(wParam) == q4s)
			{
				MessageBox(hWnd, L"��� �����մϴ�.", L"Quiz Start!", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				/* ���ϵ������� ���� */
				HWND hChildWnd = CreateWindow(
					L"q4",     			//Ŭ�������� q4�� �����츦 ����.
					L"Quiz 4",            	//������ ����
					WS_OVERLAPPEDWINDOW | WS_CHILD,  //������ ��Ÿ�� 
					25,       		//�������� ��ġ (����������κ��� x��ǥ)
					75,       		//�������� ��ġ (����������κ��� y��ǥ)
					500,       		//������ ��
					500,       		//������ ����
					hWnd,
					(HMENU)1000,
					g_hInst,
					(LPVOID)NULL);
				ShowWindow(hChildWnd, SW_SHOW);
			}

			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� dev�ϰ��. */
			if (LOWORD(wParam) == dev)
			{
				MessageBox(hWnd, L"�ǵ��� 201634-156441 \n010-6665-6033 \ntkenn@knou.ac.kr", L"������ ����", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
			}

		return 0;
		}

		/* ������������ �����ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0; // ���α׷� ����.
		}
	return(DefWindowProc(hWnd,iMessage,wParam,lParam));
}

/* q1p �ݹ��Լ� */
LRESULT CALLBACK q1p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"1�������Դϴ�."; // ���ڿ� ��ü text ����.
	LPCTSTR text2 = L"�߻�ȭ��, ������ ���õ� �ٽɳ��븸 ����� ������ ������ "; // ���ڿ� ��ü text2 ����.
	LPCTSTR text21 = L"�����Ͽ� ������ �ܼ�ȭ��Ű�� ���� �ǹ��Ѵ�."; // ���ڿ� ��ü text21 ����.
	LPCTSTR text3 = L"������ O. Ʋ���� X."; // ���ڿ� ��ü text3 ����.

	switch (message)
	{
		/* ������ �Ӽ��� */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(120, 200, 155)); // text ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 10, text, lstrlen(text)); // text ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text2 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 30, text2, lstrlen(text2)); // text2 ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text21 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 50, text21, lstrlen(text21)); // text21 ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text3 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 70, text3, lstrlen(text3)); // text3 ��ü�� �����쿡 ǥ��.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* ��ư������ ���� */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",      // ��ư ������ ����
				L"O",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				15,       		// �������� ��ġ (������κ��� x��ǥ)
				200,       		// �������� ��ġ (������κ��� y��ǥ)
				200,       		// ������ ��
				200,       		// ������ ����
				hWnd,
				(HMENU)q1t,   	// ��Ʈ�� ID�� ��ũ�λ�� q1t�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",      // ��ư ������ ����
				L"X",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				270,       		// �������� ��ġ (������κ��� x��ǥ)
				200,       		// �������� ��ġ (������κ��� y��ǥ)
				200,       		// ������ ��
				200,       		// ������ ����
				hWnd,
				(HMENU)q1f,   	// ��Ʈ�� ID�� ��ũ�λ�� q1f�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
		}

		/* �����쿡�� Ư�� ��ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_COMMAND:
		{
			/* ��ư�� Ŭ���Ͽ� �������� w�Ķ���� ���� q1t�ϰ��. */
			if (LOWORD(wParam) == q1t)
			{
				MessageBox(hWnd, L"�����Դϴ�.", L"����!", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				DestroyWindow(hWnd); // ������ ����
			}

			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� q1f�ϰ��. */
			if (LOWORD(wParam) == q1f)
			{
				MessageBox(hWnd, L"�����Դϴ�..", L"��..", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				DestroyWindow(hWnd); // ������ ����
			}

			return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}

/* q2p �ݹ��Լ� */
LRESULT CALLBACK q2p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"2�������Դϴ�."; // ���ڿ� ��ü text ����.
	LPCTSTR text2 = L"�������� ��������� �κ������� �ƴϴ�."; // ���ڿ� ��ü text2 ����.
	LPCTSTR text3 = L"������ O. Ʋ���� X."; // ���ڿ� ��ü text3 ����.

	switch (message)
	{
		/* ������ �Ӽ��� */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(120, 200, 155)); // text ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 10, text, lstrlen(text)); // text ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text2 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 30, text2, lstrlen(text2)); // text2 ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text3 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 50, text3, lstrlen(text3)); // text3 ��ü�� �����쿡 ǥ��.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* ��ư������ ���� */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",      // ��ư ������ ����
				L"O",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				15,       		// �������� ��ġ (������κ��� x��ǥ)
				200,       		// �������� ��ġ (������κ��� y��ǥ)
				200,       		// ������ ��
				200,       		// ������ ����
				hWnd,
				(HMENU)q2t,   	// ��Ʈ�� ID�� ��ũ�λ�� q2t�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",      // ��ư ������ ����
				L"X",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				270,       		// �������� ��ġ (������κ��� x��ǥ)
				200,       		// �������� ��ġ (������κ��� y��ǥ)
				200,       		// ������ ��
				200,       		// ������ ����
				hWnd,
				(HMENU)q2f,   	// ��Ʈ�� ID�� ��ũ�λ�� q2f�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
		}

		/* �����쿡�� Ư�� ��ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_COMMAND:
		{
			/* ��ư�� Ŭ���Ͽ� �������� w�Ķ���� ���� q2t�ϰ��. */
			if (LOWORD(wParam) == q2t)
			{
				MessageBox(hWnd, L"�����Դϴ�..", L"��..", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				DestroyWindow(hWnd); // ������ ����
			}

			/* ��ư�� Ŭ���Ͽ� �������� w�Ķ���� ���� q2f�ϰ��. */
			if (LOWORD(wParam) == q2f)
			{
				MessageBox(hWnd, L"�����Դϴ�.", L"����!", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				DestroyWindow(hWnd); // ������ ����
			}

			return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}

/* q3p �ݹ��Լ� */
LRESULT CALLBACK q3p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"3�������Դϴ�."; // ���ڿ� ��ü text ����.
	LPCTSTR text2 = L"������� �ϳ� �̻��� ���Ұ� 0�� ����� ���Ѵ�."; // ���ڿ� ��ü text2 ����.
	LPCTSTR text3 = L"������ O. Ʋ���� X."; // ���ڿ� ��ü text3 ����.

	switch (message)
	{
		/* ������ �Ӽ��� */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(120, 200, 155)); // text ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 10, text, lstrlen(text)); // text ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text2 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 30, text2, lstrlen(text2)); // text2 ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text3 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 50, text3, lstrlen(text3)); // text3 ��ü�� �����쿡 ǥ��.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* ��ư������ ���� */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",      // ��ư ������ ����
				L"O",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				15,       		// �������� ��ġ (������κ��� x��ǥ)
				200,       		// �������� ��ġ (������κ��� y��ǥ)
				200,       		// ������ ��
				200,       		// ������ ����
				hWnd,
				(HMENU)q3t,   	// ��Ʈ�� ID�� ��ũ�λ�� q3t�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",      // ��ư ������ ����
				L"X",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				270,       		// �������� ��ġ (������κ��� x��ǥ)
				200,       		// �������� ��ġ (������κ��� y��ǥ)
				200,       		// ������ ��
				200,       		// ������ ����
				hWnd,
				(HMENU)q3f,   	// ��Ʈ�� ID�� ��ũ�λ�� q3f�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
		}

		/* �����쿡�� Ư�� ��ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_COMMAND:
		{
			/* ��ư�� Ŭ���Ͽ� �������� w�Ķ���� ���� q3t�ϰ��. */
			if (LOWORD(wParam) == q3t)
			{
				MessageBox(hWnd, L"�����Դϴ�..", L"��..", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				DestroyWindow(hWnd); // ������ ����
			}

			/* ��ư�� Ŭ���Ͽ� �������� w�Ķ���� ���� q3f�ϰ��. */
			if (LOWORD(wParam) == q3f)
			{
				MessageBox(hWnd, L"�����Դϴ�.", L"����!", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				DestroyWindow(hWnd); // ������ ����
			}

			return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}

/* q4p �ݹ��Լ� */
LRESULT CALLBACK q4p(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"4�������Դϴ�."; // ���ڿ� ��ü text ����.
	LPCTSTR text2 = L"�˰����� ǥ�� ������� ��ǻ�� ���α׷��� ���, ������, "; // ���ڿ� ��ü text2 ����.
	LPCTSTR text21 = L"�ǻ��ڵ尡 �ִ�."; // ���ڿ� ��ü text21 ����.
	LPCTSTR text3 = L"������ O. Ʋ���� X."; // ���ڿ� ��ü text3 ����.

	switch (message)
	{
		/* ������ �Ӽ��� */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(120, 200, 155)); // text ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 10, text, lstrlen(text)); // text ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text2 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 30, text2, lstrlen(text2)); // text2 ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text21 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 30, text21, lstrlen(text21)); // text21 ��ü�� �����쿡 ǥ��.
			SetBkColor(hdc, RGB(120, 200, 155)); // text3 ��ü�� ��氪�� ������� ������ ������ ����.
			TextOut(hdc, 15, 50, text3, lstrlen(text3)); // text3 ��ü�� �����쿡 ǥ��.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* ��ư������ ���� */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",      // ��ư ������ ����
				L"O",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				15,       		// �������� ��ġ (������κ��� x��ǥ)
				200,       		// �������� ��ġ (������κ��� y��ǥ)
				200,       		// ������ ��
				200,       		// ������ ����
				hWnd,
				(HMENU)q4t,   	// ��Ʈ�� ID�� ��ũ�λ�� q4t�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
				L"button",      // ��ư ������ ����
				L"X",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				270,       		// �������� ��ġ (������κ��� x��ǥ)
				200,       		// �������� ��ġ (������κ��� y��ǥ)
				200,       		// ������ ��
				200,       		// ������ ����
				hWnd,
				(HMENU)q4f,   	// ��Ʈ�� ID�� ��ũ�λ�� q4f�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
		}

		/* �����쿡�� Ư�� ��ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_COMMAND:
		{
			/* ��ư�� Ŭ���Ͽ� �������� w�Ķ���� ���� q4t�ϰ��. */
			if (LOWORD(wParam) == q4t)
			{
				MessageBox(hWnd, L"�����Դϴ�.", L"����!", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				DestroyWindow(hWnd); // ������ ����
			}

			/* ��ư�� Ŭ���Ͽ� �������� w�Ķ���� ���� q4f�ϰ��. */
			if (LOWORD(wParam) == q4f)
			{
				MessageBox(hWnd, L"�����Դϴ�..", L"��..", MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
				DestroyWindow(hWnd); // ������ ����
			}

		return 0;
	}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}