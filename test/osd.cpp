// test/osd.cpp
// Christian KAKESA <christian.kakesa@gmail.com>
// 
// This file show you how you can use WinOSD in your project.
// Thinkk about threadsafe or better implementation for fonts, font=size, position 
// parameters. You can update this starting point.
#include <windows.h>

#include "../src/wosd.h"

int WINAPI WinMain(::HINSTANCE FirstInstance, ::HINSTANCE PrevInstance, ::LPSTR CmdLine, int CmdShow)
{
    (void)FirstInstance; //Just for ansi compliance => unused variable warning
    (void)PrevInstance; //Just for ansi compliance => unused variable warning
    (void)CmdLine; //Just for ansi compliance => unused variable warning
    (void)CmdShow; //Just for ansi compliance => unused variable warning

    WinOSD* wosd = new WinOSD(); //FirstInstance);
    wosd->PrintText();
    // wosd->PrintText(static_cast<std::string>("TOTO !!!"));
    delete wosd;
    return (EXIT_SUCCESS);
}
