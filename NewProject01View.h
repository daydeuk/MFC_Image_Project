
// NewProject01View.h : CNewProject01View 클래스의 인터페이스
//

#pragma once

#include "resource.h"
#include "Resource.h"
#include "NewProject01Doc.h"
#include "cdib.h"
#include "afxwin.h"


class CNewProject01View : public CFormView
{
protected: // serialization에서만 만들어집니다.
	CNewProject01View();
	DECLARE_DYNCREATE(CNewProject01View)
public:
	CImage c_image;
	
	/*
	unsigned char *m_InImg; //bmp 파일의 이미지 내용 저장
	unsigned char *m_OutImg; //bmp이미지 출력용 배열
	BITMAPFILEHEADER dibHf; //비트맵 파일헤드 구조체
	BITMAPINFOHEADER dibHi; //비트맵 영상 헤드 구조체 
	RGBQUAD palRGB[256]; //팔레트 정보 구조체 배열
	virtual ~CNewProject01Doc(); 
	*/


private:
	CNewProject01Doc* pDoc;
	CDC *mp_display_memory;
	CBitmap *mp_bitmap, *mp_old_bitmap;
	CRect m_image_rect;
	CString strPathname;
	CFile f;
	CDib rtrt;
	CRect image_rect;
	double x, y;
	CSize image_xy;
	

	HANDLE bmp;
	CBitmap cBitmap;
	BITMAP bmpinfo;

protected:

public:
	enum{ IDD = IDD_NEWPROJECT01_FORM };

// 특성입니다.
public:

	CNewProject01Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);

	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	virtual void OnInitialUpdate(); // 생성 후 처음 호출되었습니다.

// 구현입니다.
public:
	BITMAPINFO* BmInfo;
	virtual ~CNewProject01View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnImageLoadImage();
	afx_msg void OnDestroy();
	afx_msg void OnStnClickedStaticDisp();
	CStatic m_stDisp;
	CStatic M_stDisp;
};

#ifndef _DEBUG  // NewProject01View.cpp의 디버그 버전
inline CNewProject01Doc* CNewProject01View::GetDocument() const
   { return reinterpret_cast<CNewProject01Doc*>(m_pDocument); }
#endif

