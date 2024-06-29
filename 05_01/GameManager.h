#pragma once
#include<memory>
#include "IScene.h"
#include "TitleScene.h"
#include "StageScene.h"
#include "ClaerScene.h"

class  GameManager
{
private:
	std::unique_ptr<IScene> sceneArr_[3];
	
	int currentSceneNo_;
	int prevSceneNo_;

public:
	GameManager();
	~GameManager();
	int Run();
};