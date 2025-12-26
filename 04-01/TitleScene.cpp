#include "TitleScene.h"
#include <imgui.h>
#include <Novice.h>


TitleScene::~TitleScene()
{
}

TitleScene::TitleScene()
{
}

void TitleScene::Initialize()
{
	

}

void TitleScene::Update(char keys[256], char preKeys[256])
{
	if (keys[DIK_SPACE]&&!preKeys[DIK_SPACE]) {
		nextSceneID_ = SceneID::Game;
		sceneChangeRequest_ = true;
	}

}

void TitleScene::Draw()
{
	Novice::ScreenPrintf(640, 320, "TITLE");
}
