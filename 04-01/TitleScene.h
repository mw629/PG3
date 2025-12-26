#pragma once
#include "IScene.h"

class TitleScene:public IScene
{
private:


public:
	~TitleScene()override;
	TitleScene();

	void Initialize()override;

	void Update(char keys[256], char preKeys[256])override;

	void Draw()override;


};

