#include "ClearScene.h"
#include <Novice.h>

ClearScene::~ClearScene()
{
}


void ClearScene::Initialize()
{
}

void ClearScene::Update(char keys[256], char preKeys[256])
{
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		nextSceneID_ = SceneID::Title;
		sceneChangeRequest_ = true;
	}
}

void ClearScene::Draw()
{
	Novice::ScreenPrintf(640, 320, "Clear");
}
