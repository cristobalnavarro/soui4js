#pragma once

SNSBEGIN

/**
 * @union      FONTSTYLE
 * @brief      FONT�ķ��
 *
 * Describe
 */
union FONTSTYLE {
    uint64_t syle; // DWORD�汾�ķ��
    struct
    {
        uint64_t byCharset : 8;  //�ַ���
        uint64_t byWeight : 8;   // weight/4
        uint64_t fItalic : 1;    //б���־λ
        uint64_t fUnderline : 1; //�»��߱�־λ
        uint64_t fBold : 1;      //�����־λ
        uint64_t fStrike : 1;    //ɾ���߱�־λ
		uint64_t fEscapement : 12;   //�Ƕ�, ��0.1�Ƕ�Ϊ��λ
		uint64_t fPitchAndFamily:8;	 //pitch and family
        uint64_t cSize : 24;     //�����С��Ϊshort�з�������
    } attr;

    FONTSTYLE(uint64_t _style = 0)
        : syle(_style)
    {
    }
};

struct FontInfo
{
    FONTSTYLE style;
    SStringW strFaceName;
    SStringW strPropEx;
};
SNSEND