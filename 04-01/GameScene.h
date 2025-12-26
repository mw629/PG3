#pragma once
#include "IScene.h"

class GameScene :public IScene
{
private:


public:
	~GameScene()override;

	void Initialize()override;

	void Update(char keys[256], char preKeys[256]) override;

	void Draw()override;

};

