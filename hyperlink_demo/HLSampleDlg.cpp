// HLSampleDlg.cpp : implementation file
//

#include "stdafx.h"
#include "HLSample.h"
#include "HLSampleDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CHLSampleDlg dialog

CHLSampleDlg::CHLSampleDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CHLSampleDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CHLSampleDlg)
	//}}AFX_DATA_INIT
}

void CHLSampleDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CHLSampleDlg)
	DDX_Control(pDX, IDC_HYPERLINK, m_HyperLink);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CHLSampleDlg, CDialog)
	//{{AFX_MSG_MAP(CHLSampleDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CHLSampleDlg message handlers

BOOL CHLSampleDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_HyperLink.SetURL(_T("mailto:cmaunder@mail.com"));
    // m_HyperLink.SetUnderline(CHyperLink::ulAlways);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

