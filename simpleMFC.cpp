#include <afxwin.h>
#include <atlimage.h>
class cmain :public CFrameWnd {
public:
	cmain() {
		Create(NULL, L"Hi~!! ");
	}
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};
class capp : public CWinApp {
	BOOL InitInstance() {
		cmain* frm = new cmain();
		m_pMainWnd = frm;
		frm->ShowWindow(1);
		return TRUE;
	}
};
capp theApp; BEGIN_MESSAGE_MAP(cmain, CFrameWnd)
ON_WM_PAINT()
END_MESSAGE_MAP()


void cmain::OnPaint()
{
	CPaintDC dc(this);
	CImage img;
	img.Load(L"parrot.png");
	img.Draw(dc, 0, 0);

	 				  
}
