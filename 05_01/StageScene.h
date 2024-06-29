#pragma once
#include "IScene.h"


class StageScene :public IScene
{
public:
	void Init()override;
	void Update()override;
	void Draw()override;

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };
};