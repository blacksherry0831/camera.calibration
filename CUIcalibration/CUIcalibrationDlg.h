
// CUIcalibrationDlg.h : ͷ�ļ�
//

#pragma once


// CCUIcalibrationDlg �Ի���
class CCUIcalibrationDlg : public CDialogEx
{
// ����
public:
	CCUIcalibrationDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CUICALIBRATION_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
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

	// ���ɵ���Ϣӳ�亯��
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
