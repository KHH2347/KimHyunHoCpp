#include "MainGame.h"
#include "stdafx.h"

void MainGame::Init()
{
	_character = new Character();
	_character->Init();

	CustomConsole.SetCursor(tvision::CURSOR_OFF);

	CustomConsole.GotoXY(0, 0);	cout << "������������������������������������������������������������������������������������";
	CustomConsole.GotoXY(0, 1);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 2);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 3);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 4);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 5);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 6);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 7);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 8);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 9);	cout << "��                                        ��";
	CustomConsole.GotoXY(0, 10);cout << "������������������������������������������������������������������������������������";

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
