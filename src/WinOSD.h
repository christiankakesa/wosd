// WinOSD.h
// Christian KAKESA <christian.kakesa@gmail.com>
#ifndef __WINOSD_H_
#define __WINOSD_H_
#define _UNICODE
#define VC_EXTRALEAN
#define WIN32_LEAN_AND_MEAN

#include <string>
#include <windows.h>

class WinOSD
{
public:
    static std::string	m_text;
    static std::size_t	m_width;
    static std::size_t	m_height;
    static ::HFONT		m_font;
    static int			m_delay;
    ::POINT				m_position;
    ::HWND				m_hWnd;
    ::HINSTANCE			m_hInst;

public:
    WinOSD();
    ~WinOSD();

    bool PrintText();
    bool PrintText(const std::string text);
    void Destroy(void);

/*
    void SetSize(std::size_t x, std::size_t y);
    void SetSize(::SIZE size);
    ::SIZE GetSize(void);

    void SetPosition(const std::string pos);
    void SetPosition(::POINT point);
    ::POINT GetPosition(void);
*/
    static void CreateText(HWND hWnd, const std::string text);
    static LRESULT CALLBACK ___WindowProc(HWND hWnd, UINT uiMsg, WPARAM wParam, LPARAM lParam);
};

#endif /* !__WINOSD_H_ */
