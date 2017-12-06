// MyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "CreateFrame.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// CMyDlg 对话框

IMPLEMENT_DYNAMIC(CMyDlg, CDialogEx)

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyDlg::IDD, pParent)
{

}

CMyDlg::~CMyDlg()
{
}

//void CMyDlg::DoDataExchange(CDataExchange* pDX)
//{
//	CDialogEx::DoDataExchange(pDX);
//}


BEGIN_MESSAGE_MAP(CMyDlg, CDialogEx)
	ON_WM_SIZE()
	ON_WM_SIZING()
	ON_WM_PAINT()
END_MESSAGE_MAP()


// CMyDlg 消息处理程序


//INT_PTR CMyDlg::DoModal()
//{
//	// TODO: 在此添加专用代码和/或调用基类
//	return CDialogEx::DoModal();
//}


BOOL CMyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	  
	//对话框背景图片宽和高  
	const int nBkBmpWidth = 200;  
	const int nBkBmpHeight = 355;  
	int xPos = 0;  
	int yPos = 0;  
  
	//获得电脑显示器的像素宽度和像素高度  
	int ax = GetDC()->GetDeviceCaps(HORZRES) - nBkBmpWidth;  
	int ay = GetDC()->GetDeviceCaps(VERTRES) - nBkBmpHeight;  
  
	int nWidth = 0;  
	int nHeight = 0;  
	if(ax <= 0)  
	{   ax = 0; }  
	else  
	{   ax = ax/2;  }  
	if(ay <= 0)  
	{   ay = 0; }  
	else  
	{   ay = ay/2;  }  
  
	RECT clientRect;  
	
	clientRect.left = ax;  
	clientRect.top = ay;  
	clientRect.right = clientRect.left + nBkBmpWidth;  
	clientRect.bottom = clientRect.top + nBkBmpHeight;  
	MoveWindow(&clientRect);  


	return TRUE;  // return TRUE unless you set the focus to a control

}


void CMyDlg::OnSize(UINT nType, int cx, int cy)
{
	
	CDialogEx::OnSize(nType, cx, cy);



	
}


//BOOL CMyDlg::CreateEx(DWORD dwExStyle, LPCTSTR lpszClassName, LPCTSTR lpszWindowName, DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, LPVOID lpParam)
//{
//	// TODO: 在此添加专用代码和/或调用基类
//
//	return CDialogEx::CreateEx(dwExStyle, lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, lpParam);
//}


//BOOL CMyDlg::Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd)
//{
//	// TODO: 在此添加专用代码和/或调用基类
//
//	return CDialogEx::Create(lpszTemplateName, pParentWnd);
//}


//void CMyDlg::OnSizing(UINT fwSide, LPRECT pRect)
//{
//	CDialogEx::OnSizing(fwSide, pRect);
//
//	// TODO: 在此处添加消息处理程序代码
//}


void CMyDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting

		// TODO: 在此处添加消息处理程序代码
		// 不为绘图消息调用 CDialogEx::OnPaint()
	CRect rc;
	GetWindowRect(&rc);
	CImage image;
	image.Load(_T("res\\back.jpg")) ;
	image.Draw(GetDC()->GetSafeHdc(), CRect(0,0,rc.Width(),rc.Height()));


}
