﻿#include "ClaerScene.h"
#include <Novice.h>
#include <stdio.h>
void ClaerScene::Init()
{
}

void ClaerScene::Update()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLACK,kFillModeSolid);
	//titleに切り替える
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0)
	{
		sceneNo = TITLE;
	}
}

void ClaerScene::Draw()
{
}