#include "Character.h"
#include "stdafx.h"

void Character::Init()
{
}

void Character::Update(int deltaTime)
{
	if (500 < _animationTime)
	{
		_animationTime = 0;
		_animationIndex++;
		_animationIndex %= 3;
		Erase();
		RenderC();
	}
}

void Character::RenderC()
{
	switch (_animationIndex)
	{
	case 0:
		CustomConsole.GotoXY(_x * 2, _y);     cout << "			      ﹥			      ";
		CustomConsole.GotoXY(_x * 2, _y + 1); cout << "			    ﹥    ﹥		      ";
		CustomConsole.GotoXY(_x * 2, _y + 2); cout << "		      ﹥		    ﹥	      ";
		CustomConsole.GotoXY(_x * 2, _y + 3); cout << "		    ﹥             ﹥       ";
		CustomConsole.GotoXY(_x * 2, _y + 4); cout << "	 	  ﹥                 ﹥     ";
		CustomConsole.GotoXY(_x * 2, _y + 5); cout << "		 ﹥                    ﹥   ";
		CustomConsole.GotoXY(_x * 2, _y + 6); cout << "		﹥                      ﹥  ";
		CustomConsole.GotoXY(_x * 2, _y + 7); cout << "		﹥      ≒          ≒     ﹥ ";
		CustomConsole.GotoXY(_x * 2, _y + 8); cout << "		﹥                       ﹥ ";
		CustomConsole.GotoXY(_x * 2, _y + 9); cout << "		 ﹥        '式式式式'       ﹥  ";
		CustomConsole.GotoXY(_x * 2, _y + 10); cout << "	   ﹥  ﹥  ﹥  ﹥  ﹥  ﹥  ﹥    ";
		break;
	case 1:
		CustomConsole.GotoXY(_x * 2, _y);     cout << "			      ﹥			      ";
		CustomConsole.GotoXY(_x * 2, _y + 1); cout << "			    ﹥    ﹥		      ";
		CustomConsole.GotoXY(_x * 2, _y + 2); cout << "		      ﹥		    ﹥	      ";
		CustomConsole.GotoXY(_x * 2, _y + 3); cout << "		    ﹥             ﹥       ";
		CustomConsole.GotoXY(_x * 2, _y + 4); cout << "	 	  ﹥                 ﹥     ";
		CustomConsole.GotoXY(_x * 2, _y + 5); cout << "		 ﹥                    ﹥   ";
		CustomConsole.GotoXY(_x * 2, _y + 6); cout << "		﹥                      ﹥  ";
		CustomConsole.GotoXY(_x * 2, _y + 7); cout << "		﹥      ≒          ≒     ﹥ ";
		CustomConsole.GotoXY(_x * 2, _y + 8); cout << "		﹥                       ﹥ ";
		CustomConsole.GotoXY(_x * 2, _y + 9); cout << "		 ﹥        '式式式式'       ﹥  ";
		CustomConsole.GotoXY(_x * 2, _y + 10); cout << "	   ﹥  ﹥  ﹥  ﹥  ﹥  ﹥  ﹥    ";
		break;
	case 2:
		CustomConsole.GotoXY(_x * 2, _y);     cout << "			      ﹥			      ";
		CustomConsole.GotoXY(_x * 2, _y + 1); cout << "			    ﹥    ﹥		      ";
		CustomConsole.GotoXY(_x * 2, _y + 2); cout << "		      ﹥		    ﹥	      ";
		CustomConsole.GotoXY(_x * 2, _y + 3); cout << "		    ﹥             ﹥       ";
		CustomConsole.GotoXY(_x * 2, _y + 4); cout << "	 	  ﹥                 ﹥     ";
		CustomConsole.GotoXY(_x * 2, _y + 5); cout << "		 ﹥                    ﹥   ";
		CustomConsole.GotoXY(_x * 2, _y + 6); cout << "		﹥                      ﹥  ";
		CustomConsole.GotoXY(_x * 2, _y + 7); cout << "		﹥      ≒          ≒     ﹥ ";
		CustomConsole.GotoXY(_x * 2, _y + 8); cout << "		﹥                       ﹥ ";
		CustomConsole.GotoXY(_x * 2, _y + 9); cout << "		 ﹥        '式式式式'       ﹥  ";
		CustomConsole.GotoXY(_x * 2, _y + 10); cout << "	   ﹥  ﹥  ﹥  ﹥  ﹥  ﹥  ﹥    ";
		break;
	default:
		break;
	}
}

void Character::Erase()
{
}

void Character::Release()
{
}

