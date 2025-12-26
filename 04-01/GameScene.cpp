#include "GameScene.h"
#include <imgui.h>
#include <memory>
#include "Novice.h"

GameScene::~GameScene()
{
}



void GameScene::Initialize() {

	sceneID_ = SceneID::Game;

}

void GameScene::Update(char keys[256], char preKeys[256]) {

	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
		nextSceneID_ = SceneID::Clear;
		sceneChangeRequest_ = true;
	}

}

void GameScene::Draw() {
	Novice::ScreenPrintf(640, 320, "Game");
}