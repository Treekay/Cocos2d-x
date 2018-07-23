#pragma once
#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;

class GameScene : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	virtual bool onTouchBegan(Touch *touch, Event *unused_event);

	void shootMenuCallback(Ref* pSender);

	void mouseChangeDirection(int x);

	bool eating = false;
	bool shooting = false;

	CREATE_FUNC(GameScene);

private:
	Sprite * mouse;

	Sprite* stone;

	Layer* mouseLayer;

	Layer* stoneLayer;

};