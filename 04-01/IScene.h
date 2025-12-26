#pragma once

enum SceneID
{
	Title = 0,
	Game = 1,
	Clear = 2,
};

class IScene
{
protected:

	int sceneID_ = -1;
	int nextSceneID_ = -1;
	bool sceneChangeRequest_ = false;

public:
	virtual ~IScene() = default;

	virtual void Initialize() = 0;

	virtual void Update(char keys[256], char preKeys[256]) = 0;

	virtual void Draw() = 0;

	int GetSceneID() { return sceneID_; }
	int GetNextSceneID() { return nextSceneID_; }
	bool GetSceneChangeRequest() { return sceneChangeRequest_; }

};
