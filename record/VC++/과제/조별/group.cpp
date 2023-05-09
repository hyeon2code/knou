/*
	���� ���� ȯ�� Windows 10 1703 �� SDK�� ����
	Visual C++ ���α׷��� �⼮���� �������� [����������� n�� - ���� �ǵ���]
	������ �ǵ���, *
*/


#include <windows.h> // ����ó�� - windows.h ��������� ���� ����.

#define �ǵ���	2000 // ��ũ�λ�� '�ǵ���'�� �ʱⰪ 2000���� ����.
#define kha	3000 // ��ũ�λ�� 'kha'�� �ʱⰪ 3000���� ����.
#define ksam	4000 // ��ũ�λ�� 'ksam'�� �ʱⰪ 4000���� ����.
#define noel	5000 // ��ũ�λ�� 'noel'�� �ʱⰪ 5000���� ����.
#define fall	6000 // ��ũ�λ�� 'fall'�� �ʱⰪ 6000���� ����.
#define ��۴�	7000 // ��ũ�λ�� '��۴�'�� �ʱⰪ 7000���� ����.
#define ���n��	8000 // ��ũ�λ�� '���n��'�� �ʱⰪ 8000���� ����.

HINSTANCE g_hInst;
LPCTSTR lpszClass = L"����������"; // ���������� Ŭ���� ���� ����.
LPCTSTR ChildClassName = L"���ϵ�������"; // ���ϵ������� Ŭ���� ���� ����.
LPCTSTR ChildClassName02 = L"���ϵ�������02"; // ���ϵ�������02 Ŭ���� ���� ����.


LRESULT CALLBACK �����ݹ�(HWND,UINT,WPARAM,LPARAM); // �����ݹ� �Լ� ���� ����.
LRESULT CALLBACK ���ϵ��ݹ�(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // ���ϵ��ݹ� �Լ� ���� ����.
LRESULT CALLBACK ���ϵ��ݹ�02(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // ���ϵ��ݹ�02 �Լ� ���� ����.

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
	WndClass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH); // ������������ ������ ȭ��Ʈ�� ����.
	WndClass.hCursor=LoadCursor(NULL,IDC_ARROW);  // ���������쿡�� ���콺 Ŀ���� ȭ��ǥ������� ����.  
	WndClass.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	WndClass.hInstance=hInstance;
	WndClass.lpfnWndProc=(WNDPROC)�����ݹ�; //���������� �ݹ��Լ��� ����.
	WndClass.lpszClassName=L"����������"; //���������� Ŭ������ ����.
	WndClass.lpszMenuName=NULL;
	WndClass.style=CS_HREDRAW | CS_VREDRAW;
	RegisterClass(&WndClass);     //���������� ���

	/* ���ϵ������� ��� */
	WndClass.hbrBackground=(HBRUSH)CreateSolidBrush(RGB(0,175,240)); // ���ϵ��������� ������ rgb������ ����.
	WndClass.hCursor=LoadCursor(NULL,IDC_HAND);  // ���ϵ������쿡�� ���콺 Ŀ���� �չٴڸ������ ����.
	WndClass.lpfnWndProc=���ϵ��ݹ�;      //���ϵ������� �ݹ��Լ��� ����.
	WndClass.lpszClassName=L"���ϵ�������"; //���ϵ������� Ŭ������ ����.
	RegisterClass(&WndClass);	//���ϵ������� ���

	/* ���ϵ�������02 ��� */
	WndClass.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(120, 200, 155)); // ���ϵ�������02�� ������ rgb������ ����.
	WndClass.hCursor=LoadCursor(NULL,IDC_WAIT);  // ���ϵ�������02���� ���콺 Ŀ���� ��������� ����.
	WndClass.lpfnWndProc = ���ϵ��ݹ�02;      //���ϵ�������02 �ݹ��Լ��� ����.
	WndClass.lpszClassName = L"���ϵ�������02"; //���ϵ�������02 Ŭ������ ����.
	RegisterClass(&WndClass);	//���ϵ�������02 ���

	/* ���������� ���� */
	hWnd=CreateWindow(L"����������",					//Ŭ�������� ������������ �����츦 ����.
					L"Visual C++ ���α׷��� n��",		//������ ����
					WS_OVERLAPPEDWINDOW | WS_VISIBLE,   //������ ��Ÿ��
					200, 200,							//�������� ��ġ (����������κ��� x,y��ǥ)
					1280, 720,							//�������� ���� ����
					(HWND)NULL,
					(HMENU)NULL,
					hInstance,
					NULL);

 	   ShowWindow(hWnd,nCmdShow); // ���α׷� ������ �����츦 �����ֵ��� ����.

	while(GetMessage(&Message,0,0,0)) {
		TranslateMessage(&Message);
		DispatchMessage(&Message);
	}
	return Message.wParam;
}
/* �����Լ� ���� */

/* ���������� �ݹ��Լ� */
LRESULT CALLBACK �����ݹ�(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"�����: Visual C++ ���α׷���"; // ���ڿ� ��ü text ����.
	LPCTSTR text2 = L"�׷��: ����������� n��"; // ���ڿ� ��ü text2 ����.

	switch(iMessage) {
		/* ���������� �Ӽ��� */
		case WM_PAINT:
			{
				PAINTSTRUCT ps;
				HDC hdc = BeginPaint(hWnd, &ps);
				TextOut(hdc, 40, 20, text, lstrlen(text)); // text ��ü�� ���������쿡 ǥ��.
				TextOut(hdc, 40, 40, text2, lstrlen(text2)); // text2 ��ü�� ���������쿡 ǥ��.
				EndPaint(hWnd,&ps);
				return 0;
			}

		/* ���������� ���ο� ������ ���� */
		case WM_CREATE:
		{
			/* ���ϵ������� ���� */
			HWND hChildWnd = CreateWindow( 
							L"���ϵ�������",     			//Ŭ�������� ���ϵ��������� �����츦 ����. 
							L"���ϵ� ������ 1",            	//������ ����
							WS_OVERLAPPEDWINDOW | WS_CHILD,  //������ ��Ÿ�� 
							40,       		//�������� ��ġ (����������κ��� x��ǥ)
							85,       		//�������� ��ġ (����������κ��� y��ǥ)
							500,       		//������ ��
							500,       		//������ ����
							hWnd,
							(HMENU) 1000,
							g_hInst,
							(LPVOID) NULL);	

			ShowWindow(hChildWnd, SW_SHOW); // ���α׷� ������ �����츦 �����ֵ��� ����.

			/* ���ϵ�������02 ���� */
			hChildWnd = CreateWindow(
				L"���ϵ�������02",     			//Ŭ�������� ���ϵ�������02�� �����츦 ����.
				L"���ϵ� ������ 2",            	//������ ����
				WS_OVERLAPPEDWINDOW | WS_CHILD,  //������ ��Ÿ�� 
				740,       		//�������� ��ġ (����������κ��� x��ǥ)
				85,       		//�������� ��ġ (����������κ��� y��ǥ)
				500,       		//������ ��
				500,       		//������ ����
				hWnd,
				(HMENU)1000,
				g_hInst,
				(LPVOID)NULL);

			ShowWindow(hChildWnd, SW_SHOW); // ���α׷� ������ �����츦 �����ֵ��� ����.

			/* ��ư������ ���� */
			hChildWnd = CreateWindow(
							L"button",        	// ��ư ������ ����
							L"�ǵ���",			// ������ ����
							WS_CHILD|WS_VISIBLE, 	// ������ ��Ÿ�� 
							40,       		// �������� ��ġ (����������κ��� x��ǥ)
							610,       		// �������� ��ġ (����������κ��� y��ǥ)
							150,       		// ������ ��
							50,       		// ������ ����
							hWnd,
							(HMENU) �ǵ���,   	// ��Ʈ�� ID�� ��ũ�λ�� �ǵ������� ����.
							g_hInst,
							(LPVOID) NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
							L"button",        	// ��ư ������ ����
							L"kha",			// ������ ����
							WS_CHILD|WS_VISIBLE, 	// ������ ��Ÿ�� 
							300,       		// �������� ��ġ (����������κ��� x��ǥ)
							610,       		// �������� ��ġ (����������κ��� y��ǥ)
							150,       		// ������ ��
							50,       		// ������ ����
							hWnd,
							(HMENU) kha,   	// ��Ʈ�� ID�� ��ũ�λ�� kha�� ����.
							g_hInst,
							(LPVOID) NULL);

			if (!hChildWnd) 	return -1;

			hChildWnd = CreateWindow(
							L"button",        	// ��ư ������ ����
							L"ksam",			// ������ ����
							WS_CHILD|WS_VISIBLE, 	// ������ ��Ÿ�� 
							565,       		// �������� ��ġ (����������κ��� x��ǥ)
							610,       		// �������� ��ġ (����������κ��� y��ǥ)
							150,       		// ������ ��
							50,       		// ������ ����
							hWnd,
							(HMENU) ksam,   	// ��Ʈ�� ID�� ��ũ�λ�� ksam ����.
							g_hInst,
							(LPVOID) NULL);

			if (!hChildWnd) 	return -1;
			
			hChildWnd = CreateWindow(
							L"button",        	// ��ư ������ ����
							L"noel",			// ������ ����
							WS_CHILD|WS_VISIBLE, 	// ������ ��Ÿ�� 
							830,       		// �������� ��ġ (����������κ��� x��ǥ)
							610,       		// �������� ��ġ (����������κ��� y��ǥ)
							150,       		// ������ ��
							50,       		// ������ ����
							hWnd,
							(HMENU) noel,   	// ��Ʈ�� ID�� ��ũ�λ�� noel�� ����.
							g_hInst,
							(LPVOID) NULL);

			hChildWnd = CreateWindow(
							L"button",        	// ��ư ������ ����
							L"fall",			// ������ ����
							WS_CHILD|WS_VISIBLE, 	// ������ ��Ÿ�� 
							1090,       	// �������� ��ġ (����������κ��� x��ǥ)
							610,       		// �������� ��ġ (����������κ��� y��ǥ)
							150,       		// ������ ��
							50,       		// ������ ����
							hWnd,
							(HMENU) fall,   	// ��Ʈ�� ID�� ��ũ�λ�� fall���� ����.
							g_hInst,
							(LPVOID) NULL);

			if (!hChildWnd) 	return -1;
			/* ��ư������ ���� �� */

			return 0;
		}

		/* ���������쿡�� Ư�� ��ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_COMMAND:
		{
			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� �ǵ����ϰ��. */
			if(LOWORD(wParam) == �ǵ���)
			{
				MessageBox(hWnd,L"�ǵ��� 010-1111-2222 \nknou@knou.ac.kr",L"�ǵ��� ����ó",MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
			}

			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� kha�ϰ��. */
			if(LOWORD(wParam) == kha)
			{
				MessageBox(hWnd,L"kha 010-3333-4444 \nknou@knou.ac.kr",L"kha ����ó",MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
			}
			
			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� ksam�ϰ��. */
			if(LOWORD(wParam) == ksam)
			{
				MessageBox(hWnd,L"ksam 010-5555-6666 \nknou@knou.ac.kr",L"ksam ����ó",MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
			}

			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� noel�ϰ��. */
			if(LOWORD(wParam) == noel)
			{
				MessageBox(hWnd,L"noel 010-7777-8888 \nknou@knou.ac.kr",L"noel ����ó",MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
			}

			/* ��ư�� Ŭ���Ͽ� ������������ w�Ķ���� ���� fall�ϰ��. */
			if(LOWORD(wParam) == fall)
			{
				MessageBox(hWnd,L"fall 010-9999-0000 \nknou@knou.ac.kr",L"fall ����ó",MB_OK); // Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
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

/* ���ϵ������� �ݹ��Լ� */
LRESULT CALLBACK ���ϵ��ݹ�(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"�ѱ������Ŵ��б� ��ǻ�Ͱ��а�"; // ���ڿ� ��ü text ����.

	switch (message)
	{
		/* ���ϵ������� �Ӽ��� */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			SetBkColor(hdc, RGB(0, 175, 240)); // text ��ü�� ��氪�� ���ϵ�������� �����ϰ� ����.
			TextOut(hdc, 5, 5, text, lstrlen(text)); // text ��ü�� ���ϵ� �����쿡 ǥ��.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* ��ư������ ���� */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",        		// ��ư ������ ����
				L"��۴�",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				150,       		// �������� ��ġ (���ϵ�������κ��� x��ǥ)
				390,       		// �������� ��ġ (���ϵ�������κ��� y��ǥ)
				200,       		// ������ ��
				50,       		// ������ ����
				hWnd,
				(HMENU)��۴�,   	// ��Ʈ�� ID�� ��ũ�λ�� ��۴�� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;
	
		return 0;
		}

		/* ���ϵ������쿡�� Ư�� ��ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_COMMAND:
		{
			/* ��ư�� Ŭ���Ͽ� ���ϵ��������� w�Ķ���� ���� ��۴��ϰ��. */
			if (LOWORD(wParam) == ��۴�)
			{
				MessageBox(hWnd, L"�ְ�!", L"��۴�", MB_OK); // ������ ��۴�, ������ �ְ�!�� Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
			}
			return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}

/* ���ϵ�������02 �ݹ��Լ� */
LRESULT CALLBACK ���ϵ��ݹ�02(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"����������� VC++ n��"; // ���ڿ� ��ü text ����.

	switch (message)
	{
		/* ���ϵ�������02 �Ӽ��� */
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
				SetBkColor(hdc, RGB(120,200,155)); // text ��ü�� ��氪�� ���ϵ�������02�� �����ϰ� ����.
				TextOut(hdc, 5, 5, text, lstrlen(text)); // text ��ü�� ���ϵ�������02�� ǥ��.
			EndPaint(hWnd, &ps);
			return 0;
		}

		/* ��ư������ ���� */
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(
				L"button",        		// ��ư ������ ����
				L"���n��",			// ������ ����
				WS_CHILD | WS_VISIBLE, 	// ������ ��Ÿ�� 
				150,       		// �������� ��ġ (���ϵ�������02�κ��� x��ǥ)
				390,       		// �������� ��ġ (���ϵ�������02�κ��� y��ǥ)
				200,       		// ������ ��
				50,       		// ������ ����
				hWnd,
				(HMENU)���n��,   	// ��Ʈ�� ID�� ��ũ�λ�� ���n���� ����.
				g_hInst,
				(LPVOID)NULL);

			if (!hChildWnd) 	return -1;

			return 0;
		}

		/* ���ϵ�������02���� Ư�� ��ư�� Ŭ���ϴ� �̺�Ʈ �߻��� */
		case WM_COMMAND:
		{
			/* ��ư�� Ŭ���Ͽ� ���ϵ�������02�� w�Ķ���� ���� ���n���ϰ��. */
			if (LOWORD(wParam) == ���n��)
			{
				MessageBox(hWnd, L"������!", L"���n��", MB_OK); // ������ ���n��, ������ ������!�� Ȯ�ι�ư�� �ִ� �޼����ڽ� ����.
			}
		return 0;
		}
	}
	return DefWindowProc(hWnd, message, wParam, lParam);
}