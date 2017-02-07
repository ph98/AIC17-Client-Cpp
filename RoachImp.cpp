#include "RoachImp.h"

#include <iostream>

RoachImp::RoachImp(int id, Cell pos, Dir dir, Antenna antenna, Type type, bool sick, Color color)
    : Roach(id, pos, dir, antenna, type, sick, color) {}

RoachImp::~RoachImp() {}

Color RoachImp::getColor()
{
    return this->color;
}

Antenna RoachImp::getAntenna()
{
    return this->antenna;
}

Type RoachImp::getType()
{
    return this->type;
}

Dir RoachImp::getDirection()
{
    return this->dir;
}

bool RoachImp::isSick()
{
    return this->sick;
}

void RoachImp::doMove(Move move, int w, int h){
 	switch(move){
		case Move::RIGHT:
			this->dir = static_cast<Dir>( (static_cast<int>(this->dir) + 1) % 4);
		break;
		case Move::LEFT:
			this->dir = static_cast<Dir>( (static_cast<int>(this->dir) + 3) % 4);
		break;
		case Move::FORWARD:

            std::cerr << "Trying to go forward" << std::endl;

            switch(this->dir){
				case Dir::LEFT:
					if(this->pos.y > 0)
						this->pos.y -= 1;
					else
						this->pos.y = w - 1;
				case Dir::UP:
					this->pos.x =  (this->pos.x + 1) % h;
				break;
				case Dir::RIGHT:
					this->pos.y = (this->pos.y + 1) % w;
				break;
				case Dir::DOWN:
					if(this->pos.x > 0)
						this->pos.x =  (this->pos.x - 1) % h;
					else
						this->pos.x = h - 1;
				break;
			}

            std::cerr << "Going forward... done!" << std::endl;

		break;
 	}
}

void RoachImp::alter(bool sick, Antenna antenna){
	this->sick = sick;
	this->antenna = antenna;
}

void RoachImp::update(Antenna antenna, bool sick)
{
    this->antenna = antenna;
    this->sick = sick;
}