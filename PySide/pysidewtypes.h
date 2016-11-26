#ifndef __PYSIDEWTYPES__
#define __PYSIDEWTYPES__

// Windows types, used by QWidget::winEvent
// see https://msdn.microsoft.com/en-us/library/windows/desktop/aa383751(v=vs.85).aspx
#if defined(_WIN64)
    typedef __int64 LONG_PTR;  // for MSVC compiler
#else
    typedef long LONG_PTR;
#endif

#if defined(_WIN64)
    typedef unsigned __int64 UINT_PTR;
#else
    typedef unsigned int UINT_PTR;
#endif

typedef void * HWND;
typedef unsigned int UINT;
typedef long LONG;
typedef unsigned long DWORD;
typedef UINT_PTR WPARAM;
typedef LONG_PTR LPARAM;

struct POINT
{
    LONG x;
    LONG y;
};

struct MSG
{
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

#endif
