#pragma once
#pragma once
#include "CircleTexture.h"

class Shot
{
public:
	CircleTexture* sprite; //the shot sprite
	float speed = 0.05f;
	float Xspeed;
	float Yspeed;

	Shot()
	{
		
		sprite = new CircleTexture(0.2f, -1.0f, -1.0f);
		sprite->tex.load("..//..//Assets//Textures//projectile.png");
	}
	Shot(float Xcoord, float Ycoord, float angle)
	{
		
		sprite = new CircleTexture(0.2f, Xcoord, Ycoord);
		sprite->tex.load("..//..//Assets//Textures//projectile.png");

		Xspeed = cos(angle)*speed;
		Yspeed = sin(angle)*speed;
		std::cout << "angle: " << angle << " xspeed: " << Xspeed << "yspeed: " << Yspeed << std::endl;
	}

	~Shot()
	{
		delete sprite;
	}
};