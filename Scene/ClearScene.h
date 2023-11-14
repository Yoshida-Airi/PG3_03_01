#pragma once
#include "IScene.h"
#include"InputManager.h"
class ClearScene : public IScene
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;

private:
	InputManager* inputManager;
};
