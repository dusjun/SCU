/*-------------------------------------
 SYSMETS.H -- System metrics display structure
---------------------------------------*/
#include <tchar.h>
#include <Windows.h>

#define NUMLINES ((int) (sizeof sysmetrics / sizeof sysmetrics [0]))
struct stu
{
	int index;
	const  TCHAR *szLable;
	const  TCHAR *szDesc;}

sysmetrics[] =
{
	SM_CXSCREEN,TEXT("SM_CXSCREEN"), TEXT("Screen width in pixels"),
};
