
// CreateFrame.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCreateFrameApp:
// �йش����ʵ�֣������ CreateFrame.cpp
//

class CCreateFrameApp : public CWinApp
{
public:
	CCreateFrameApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCreateFrameApp theApp;