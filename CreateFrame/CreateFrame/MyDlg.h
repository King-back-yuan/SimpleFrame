#pragma once


// CMyDlg 对话框

class CMyDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CMyDlg)

public:
	CRect rect;                      //    初始化窗口大小
public:
	CMyDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMyDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
//	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
//	virtual INT_PTR DoModal();
	virtual BOOL OnInitDialog(/*int x,int y*/ );			//	初始化窗口大小
	afx_msg void OnSize(UINT nType, int cx, int cy);
//	virtual BOOL CreateEx(DWORD dwExStyle, LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, LPVOID lpParam = NULL);
//	virtual BOOL Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd = NULL);
//	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg void OnPaint();
};
