
// PTHREAD.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CPTHREADApp: 
// �йش����ʵ�֣������ PTHREAD.cpp
//

class CPTHREADApp : public CWinApp
{
public:
	CPTHREADApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CPTHREADApp theApp;