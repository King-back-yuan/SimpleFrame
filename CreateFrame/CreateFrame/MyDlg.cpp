// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CreateFrame.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// CMyDlg �Ի���

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


// CMyDlg ��Ϣ�������


//INT_PTR CMyDlg::DoModal()
//{
//	// TODO: �ڴ����ר�ô����/����û���
//	return CDialogEx::DoModal();
//}


BOOL CMyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	  
	//�Ի��򱳾�ͼƬ��͸�  
	const int nBkBmpWidth = 200;  
	const int nBkBmpHeight = 355;  
	int xPos = 0;  
	int yPos = 0;  
  
	//��õ�����ʾ�������ؿ�Ⱥ����ظ߶�  
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
//	// TODO: �ڴ����ר�ô����/����û���
//
//	return CDialogEx::CreateEx(dwExStyle, lpszClassName, lpszWindowName, dwStyle, rect, pParentWnd, nID, lpParam);
//}


//BOOL CMyDlg::Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd)
//{
//	// TODO: �ڴ����ר�ô����/����û���
//
//	return CDialogEx::Create(lpszTemplateName, pParentWnd);
//}


//void CMyDlg::OnSizing(UINT fwSide, LPRECT pRect)
//{
//	CDialogEx::OnSizing(fwSide, pRect);
//
//	// TODO: �ڴ˴������Ϣ����������
//}


void CMyDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting

		// TODO: �ڴ˴������Ϣ����������
		// ��Ϊ��ͼ��Ϣ���� CDialogEx::OnPaint()
	CRect rc;
	GetWindowRect(&rc);
	CImage image;
	image.Load(_T("res\\back.jpg")) ;
	image.Draw(GetDC()->GetSafeHdc(), CRect(0,0,rc.Width(),rc.Height()));


}
