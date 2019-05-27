#pragma once
#include "CircleTexture.h"

class Bubble
{
public:
	CircleTexture* sprite; //the bubble sprite
	float Xspeed;
	float Yspeed;

	Bubble(float radius, float Xcoord, float Ycoord, float s)
	{
		if (rand() % 2 == 0)
		{
			Xspeed = s;
		}
		else
		{
			Xspeed = -s;
		}
		if (rand() % 2 == 0)
		{
			Yspeed = s;
		}
		else
		{
			Yspeed = -s;
		}
		sprite = new CircleTexture(radius, Xcoord, Ycoord);
		//load the texture file
		sprite->tex.load("..//..//Assets//Textures//bubble.png");
	}

	~Bubble()
	{
		delete sprite;
	}
};