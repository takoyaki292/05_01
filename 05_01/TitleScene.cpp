﻿#include "TitleScene.h"
#include"Novice.h"
#include <stdio.h>
void TitleScene::Init()
{
}

void TitleScene::Update()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, RED,kFillModeSolid);
	//updateに切り替える
	if (!preKeys[DIK_SPACE]&& keys[DIK_SPACE])
	{
		sceneNo = STAGE;
	}
}

void TitleScene::Draw()
{
}
