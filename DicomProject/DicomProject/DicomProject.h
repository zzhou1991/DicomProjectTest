
// DicomProject.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CDicomProjectApp:
// �йش����ʵ�֣������ DicomProject.cpp
//

class CDicomProjectApp : public CWinApp
{
public:
	CDicomProjectApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDicomProjectApp theApp;