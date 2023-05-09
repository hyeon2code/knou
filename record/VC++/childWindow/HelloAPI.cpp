#include <windows.h>

LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
LRESULT CALLBACK ChildWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // �ݹ� ���ν��� ����
LRESULT CALLBACK ChildWndProc02(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam); // �ݹ� ���ν��� ����

HINSTANCE g_hInst;
LPCTSTR lpszClass = L"HelloAPI";
LPCTSTR ChildClassName  = L"ChildWin"; // Ŭ���� �̸� ����
LPCTSTR ChildClassName02  = L"ChildWin02"; // Ŭ���� �̸� ����

int APIENTRY WinMain(HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPSTR lpszCmdParam,
					 int nCmdShow)
{
	HWND hWnd;
	MSG Message;
	WNDCLASS WndClass;
	g_hInst=hInstance;
	
	WndClass.cbClsExtra=0;
	WndClass.cbWndExtra=0;
	WndClass.hbrBackground=(HBRUSH)GetStockObject(WHITE_BRUSH); // ������ ����  //CreateSolidBrush(r,g,b)
	WndClass.hCursor=LoadCursor(NULL,IDC_ARROW);    
	WndClass.hIcon=LoadIcon(NULL,IDI_APPLICATION);
	WndClass.hInstance=hInstance;
	WndClass.lpfnWndProc=(WNDPROC)WndProc;
	WndClass.lpszClassName=lpszClass;
	WndClass.lpszMenuName=NULL;
	WndClass.style=CS_HREDRAW | CS_VREDRAW;
	RegisterClass(&WndClass);     //���������� Ŭ���� ���

	/* ù��° ���ϵ� Ŭ���� */
	WndClass.hbrBackground=(HBRUSH)GetStockObject(BLACK_BRUSH); // ���ϵ� ������ ����
	WndClass.lpfnWndProc =ChildWndProc;      //���ϵ� ������ �ݹ��Լ��̸� (���������ν����̸�)
	WndClass.lpszClassName =ChildClassName; //���ϵ� ������ Ŭ�����̸�
	RegisterClass(&WndClass); 

	/* �ι�° ���ϵ� Ŭ���� */
	WndClass.hbrBackground=(HBRUSH)GetStockObject(GRAY_BRUSH); // ���ϵ� ������ ����
	WndClass.lpfnWndProc =ChildWndProc02;      //���ϵ� ������ ���ν���
	WndClass.lpszClassName =ChildClassName02; //���ϵ� ������ Ŭ�����̸�
	RegisterClass(&WndClass); 

	hWnd=CreateWindow(lpszClass,			//������Ŭ���� �̸�
					L"������ ���α׷���",			    //������Ÿ��Ʋ
					WS_OVERLAPPEDWINDOW | WS_VISIBLE,   //�����콺Ÿ��
					200, 200,							//�����찡 ���϶� X Y��ǥ
					600, 600,							//�������� ���� ����				
					(HWND)NULL,							//�θ������� �ڵ�
					(HMENU)NULL,						//�����찡 ������ �޴��ڵ�
					hInstance,							//�ν��Ͻ��ڵ�
					NULL);								//������ ������

 	   ShowWindow(hWnd,nCmdShow);
	
	while(GetMessage(&Message,0,0,0)) {
		TranslateMessage(&Message);
		DispatchMessage(&Message);
	}
	return Message.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage,
						 WPARAM wParam, LPARAM lParam)
{
	LPCTSTR text = L"���������� ����";
	switch(iMessage) {
		case WM_PAINT:
			{
				PAINTSTRUCT ps;
				HDC hdc = BeginPaint(hWnd, &ps);
				TextOut(hdc,100, 100, text, lstrlen(text));
				EndPaint(hWnd,&ps);
				return 0;
			}
		case WM_CREATE:
		{
			HWND hChildWnd = CreateWindow(  // ���ϵ� ������ ����
				ChildClassName,     		// ���ϵ� ������ Ŭ���� �̸� 
				L"���ϵ� ������",            	// ������ Ÿ��Ʋ 
				WS_OVERLAPPEDWINDOW | WS_CHILD,  // ������  ��Ÿ�� 
				20,       		// ������ ���� �� x ��ǥ 
				150,       		// ������ ���� �� y ��ǥ 
				260,       		// ������ ��
				200,       		// ������ ����
				hWnd,         		// �θ� ������
				(HMENU) 1000,        	// ���ϵ� ������ID 
				g_hInst,           		// �ν��Ͻ� �ڵ� 
				(LPVOID) NULL);      	// ������ ������

			if (!hChildWnd) 	return -1; // ���ϵ������� �ڵ��� false�ϰ�츦 check. -1�� retrun���� error message.

			ShowWindow(hChildWnd, SW_SHOW);

			hChildWnd = CreateWindow(  // ���ϵ� ������ ����
				ChildClassName02,     		// ���ϵ� ������ Ŭ���� �̸� 
				L"���ϵ� ������",            	// ������ Ÿ��Ʋ 
				WS_OVERLAPPEDWINDOW | WS_CHILD,  // ������  ��Ÿ�� 
				310,       		// ������ ���� �� x ��ǥ 
				150,       		// ������ ���� �� y ��ǥ 
				260,       		// ������ ��
				200,       		// ������ ����
				hWnd,         		// �θ� ������
				(HMENU) 1000,        	// ���ϵ� ������ID 
				g_hInst,           		// �ν��Ͻ� �ڵ� 
				(LPVOID) NULL);      	// ������ ������

			if (!hChildWnd) 	return -1; // ���ϵ������� �ڵ��� false�ϰ�츦 check. -1�� retrun���� error message.

			ShowWindow(hChildWnd, SW_SHOW);

			return 0;
		}
		case WM_DESTROY:
			PostQuitMessage(0);
			return 0;
		}
	return(DefWindowProc(hWnd,iMessage,wParam,lParam));
}
LRESULT CALLBACK ChildWndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) // ���ϵ� ������ ���ν��� �ݹ��Լ� ����.
{
	LPCTSTR text = L"���ϵ� ���������";
	switch(message)
	{
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd,&ps);
			TextOut(hdc,10, 10, text, lstrlen(text));
			EndPaint(hWnd,&ps);
			return 0;
		}

	}

	return DefWindowProc(hWnd, message, wParam, lParam);
}

LRESULT CALLBACK ChildWndProc02(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) // ���ϵ� ���ν���2 �ݹ��Լ� ����.
{
	LPCTSTR text = L"�ι�° ���ϵ� ���������";
	switch(message)
	{
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd,&ps);
			SetBkColor(hdc, RGB(0, 0, 0));
			SetTextColor(hdc, RGB(255, 255, 255));
			TextOut(hdc,10, 10, text, lstrlen(text));
			TextOut(hdc,10, 35, text, lstrlen(text));
			EndPaint(hWnd,&ps);
			return 0;
		}

	}

	return DefWindowProc(hWnd, message, wParam, lParam);
}