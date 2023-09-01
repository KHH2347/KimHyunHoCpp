#pragma once
class Character;
class MainGame
{
public:
	Character* _character;

	void Init();
	void Update(int deltaTime);
	void Release();
	
	bool IsGameEnd();
};

