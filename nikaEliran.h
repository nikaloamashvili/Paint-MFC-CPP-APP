
// nikaEliran.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

 #include "resource.h"		// main symbols


// CshayTamirApp:
// See nikaEliran.cpp for the implementation of this class
//

class CshayTamirApp : public CWinApp
{
public:
	CshayTamirApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CshayTamirApp theApp;