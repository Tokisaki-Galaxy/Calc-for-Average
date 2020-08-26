
// Calc for AverageDlg.h: 头文件
//

#pragma once

using namespace std;

// CCalcforAverageDlg 对话框
class CCalcforAverageDlg : public CDialogEx
{
// 构造
public:
	CCalcforAverageDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCFORAVERAGE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnOK();
	virtual void OnCancel();
	// 原始输入数据
	CString m_input;
	// 方差
	CString m_var;
	// 平均数
	CString m_avg;
	// 数据总和
	CString m_sum;
	afx_msg void OnBnClickedHelp();
};
