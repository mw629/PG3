#pragma once
#include "IScene.h"
#include <memory>

class ClearScene :public IScene
{
private:


public:
	~ClearScene()override;

	void Initialize()override;

	void Update(char keys[256], char preKeys[256])override;

	void Draw()override;

};
