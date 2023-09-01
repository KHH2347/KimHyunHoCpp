#include "MainGame.h"
#include "stdafx.h"

void MainGame::Init()
{
	_character = new Character();
	_character->Init();

	CustomConsole.SetCursor(tvision::CURSOR_OFF);

	CustomConsole.GotoXY(0, 0);	cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖";
	CustomConsole.GotoXY(0, 1);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 2);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 3);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 4);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 5);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 6);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 7);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 8);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 9);	cout << "弛                                        弛";
	CustomConsole.GotoXY(0, 10);cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎";

	_character->RenderC();

}

void MainGame::Update(int deltaTime)
{

}

void MainGame::Release()
{
}

bool MainGame::IsGameEnd()
{
    return false;
}
