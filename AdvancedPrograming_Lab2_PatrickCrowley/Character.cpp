#include "Character.h"

Character::Character(string a_name, float a_health, Weapon* a_weap)
{
	m_name = a_name;
	m_health = a_health;
	m_currentWeapon = a_weap;
}

Character::~Character()
{
	
}

string Character::getName() const
{
	return m_name;
}

float Character::getHealth() const
{
	return m_health;
}

void Character::setName(string name)
{
	m_name = name;
}

void Character::setHealth(float health)
{
	m_health = health;
}




