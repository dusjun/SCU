#include <tchar.h>
#include <windows.h>

HINSTANCE hInst;
/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");

int WINAPI WinMain (HINSTANCE hThisInstance,
					HINSTANCE hPrevInstance,
					LPSTR lpszArgument,
					int nCmdShow)
{
	HWND hwnd;               /* This is the handle for our window */
	MSG messages;            /* Here messages to the application are saved */
	WNDCLASSEX wincl;        /* Data structure for the windowclass */


	/* The Window structure */
	wincl.hInstance = hThisInstance;
	wincl.lpszClassName = szClassName;
	wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
	wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
	wincl.cbSize = sizeof (WNDCLASSEX);

	/* Use default icon and mouse-pointer */
	wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
	wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
	wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
	wincl.lpszMenuName = NULL;                 /* No menu */
	wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
	wincl.cbWndExtra = 0;                      /* structure or the window instance */




	//设置背景色为黑色	/* Use Windows's default colour as the background of the window */
	wincl.hbrBackground = CreateSolidBrush(RGB(0,0,0));//（HBRUSH) COLOR_BACKGROUND;

//	fstream file1;
//  file1.open("file.dat", ios::out );

	/* Register the window class, and if it fails quit the program */
	if (!RegisterClassEx (&wincl))
		return 0;

	/* The class is registered, let's create the program*/
	hwnd = CreateWindowEx (
			   0,                   /* Extended possibilites for variation */
			   szClassName,         /* Classname */
			   _T("A_GUI"),       /* Title Text */
			   WS_BORDER,//   WS_OVERLAPPEDWINDOW, /* default window */
			   0,       /* Windows decides the position */
			   0,//CW_USEDEFAULT,       /* where the window ends up on the screen */
			   1000,                 /* The programs width */
			   1000,                 /* and height in pixels */
			   HWND_DESKTOP,        /* The window is a child-window to desktop */
			   NULL,                /* No menu */
			   hThisInstance,       /* Program Instance handler */
			   NULL                 /* No Window Creation data */
		   );
	//隐藏窗口标题栏
	SetWindowLong(hwnd, GWL_STYLE, GetWindowLong(hwnd, GWL_STYLE) &~WS_CAPTION);

	//隐藏鼠标
	ShowCursor(FALSE);

	//最大化方式显示窗口
	ShowWindow (hwnd, SW_MAXIMIZE) ;
	Sleep(1314);
	exit(0);
	/* Run the message loop. It will run until GetMessage() returns 0 */
	while (GetMessage (&messages, NULL, 0, 0))
	{
		/* Translate virtual-key messages into character messages */
		TranslateMessage(&messages);
		/* Send message to WindowProcedure */
		DispatchMessage(&messages);
	}

	/* The program return-value is 0 - The value that PostQuitMessage() gave */
	return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{

	switch (message)                  /* handle the messages */

	{
	case WM_CREATE:
		break;
	case WM_DESTROY:
		PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
		break;
	default:                      /* for messages that we don't deal with */
		return DefWindowProc (hwnd, message, wParam, lParam);
	}
	return 0;
}
