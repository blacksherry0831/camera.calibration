
// CUIcalibrationDlg.h : 头文件
//

#pragma once


// CCUIcalibrationDlg 对话框
class CCUIcalibrationDlg : public CDialogEx
{
// 构造
public:
	CCUIcalibrationDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CUICALIBRATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
public:
	CRichEditCtrl *board_w_ctrl;
	CRichEditCtrl *board_h_ctrl;
	CRichEditCtrl *cal_num_board_ctrl;
	CRichEditCtrl *camera_id_ctrl;
	CRichEditCtrl *cal_frame_per_ctrl;
	CButton       *black_ctrl;
	CButton       *white_ctrl;
	CWnd *row_picture_Ctrl;
	CWnd *cal_picture_Ctrl;
	 HANDLE   thread_ctl_handle;
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void init_ctrl(void);
	/*afx_msg void OnBnClickedMfcbuttonCalibrate();
	afx_msg void OnBnClickedMfcbuttonRemap();*/
	void update_para(void);
	afx_msg void OnBnClickedMfcbuttonCalibrate();
	afx_msg void OnBnClickedMfcbuttonRemap();
	afx_msg void OnClose();
};
