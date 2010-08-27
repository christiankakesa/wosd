// test/osd.cpp
// Christian KAKESA <christian.kakesa@gmail.com>
#include <windows.h>

#include "../src/WinOSD.h"

int WINAPI WinMain(::HINSTANCE FirstInstance, ::HINSTANCE PrevInstance, ::LPSTR CmdLine, int CmdShow)
{
    (void)FirstInstance; //Just for ansi compliance => unused variable warning
    (void)PrevInstance; //Just for ansi compliance => unused variable warning
    (void)CmdLine; //Just for ansi compliance => unused variable warning
    (void)CmdShow; //Just for ansi compliance => unused variable warning

    WinOSD* wosd = new WinOSD(); //FirstInstance);
    wosd->PrintText();
    //wosd->PrintText(static_cast<std::string>("TOTO !!!"));
    delete wosd;
    return (EXIT_SUCCESS);
}
