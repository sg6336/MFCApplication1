
// ChildFrm.h: интерфейс класса CChildFrame
//

#pragma once

class CChildFrame : public CMDIChildWndEx
{
	DECLARE_DYNCREATE(CChildFrame)
public:
	CChildFrame();

// Атрибуты
protected:
	CSplitterWndEx m_wndSplitter;
public:

// Операции
public:

// Переопределение
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// Реализация
public:
	virtual ~CChildFrame(); // iiiiiiiiiiiiiiiiiiiiiii
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

// Созданные функции схемы сообщений
protected:
	DECLARE_MESSAGE_MAP()
};
