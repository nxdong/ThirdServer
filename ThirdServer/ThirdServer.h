
// ThirdServer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CThirdServerApp:
// �йش����ʵ�֣������ ThirdServer.cpp
//

class CThirdServerApp : public CWinApp
{
public:
	CThirdServerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CThirdServerApp theApp;