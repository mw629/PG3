#include "SceneManager.h"
#include "GameScene.h"
#include "TitleScene.h"
#include "ClearScene.h" 

SceneManager::SceneManager()
{
	scene_ = new TitleScene();
}

SceneManager::~SceneManager()
{
	delete scene_;
}

void SceneManager::Initialize() {
	scene_->Initialize();
}

void SceneManager::Update(char keys[256], char preKeys[256]) {
	
	if (scene_->GetSceneChangeRequest()) {
		int NexrScene = scene_->GetNextSceneID();
		delete  scene_;
		scene_ = CreateScene(NexrScene);
		scene_->Initialize();
	}
	
	scene_->Update(keys, preKeys);
}

void SceneManager::Draw() {
	scene_->Draw();
}

IScene* SceneManager::CreateScene(int sceneID)
{
	switch (sceneID) {
	case SceneID::Title: return new TitleScene();
	case SceneID::Game:  return new GameScene();
	case SceneID::Clear:  return new ClearScene(); 
	}
	return nullptr;
}
