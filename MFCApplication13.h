
// MFCApplication13.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMFCApplication13App:
// See MFCApplication13.cpp for the implementation of this class
//

class CMFCApplication13App : public CWinApp
{
public:
	CMFCApplication13App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication13App theApp;
