#pragma once
class Character
{
public:
	int _x, _y;
	int _animationIndex;
	int _animationTime;

	void Init();
	void Update(int deltaTime);
	void RenderC();
	void Erase();
	void Release();
};

