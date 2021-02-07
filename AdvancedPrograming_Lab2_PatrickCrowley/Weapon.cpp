#include "Weapon.h"


Weapon::Weapon()
{
}

Weapon::Weapon(string a_name, string a_discript, float a_dv)
{
	m_weaponName = a_name;
	m_discription = a_discript;
	m_damageValue = a_dv;
	m_listOfAbilities = new string[2];
	
}

Weapon::~Weapon()
{
}

//Getters
string Weapon::getWeaponName()
{
	return m_weaponName;
}

string Weapon::getDiscription()
{
	return m_discription;
}

float Weapon::getDamageValue()
{
	return m_damageValue;
}

string Weapon::getAbility()
{
	return m_ability;
}

//Setters
void Weapon::setWeaponName(string name)
{
	m_weaponName = name;
}

void Weapon::setDiscription(string discription)
{
	m_discription = discription;
}

void Weapon::setDamageValue(float damage)
{
	m_damageValue = damage;
}

void Weapon::setAbility(string ability)
{
	m_ability = ability;
}

void Weapon::storeAbility(string ability, int slot)
{
	m_listOfAbilities[slot] = ability;
}




