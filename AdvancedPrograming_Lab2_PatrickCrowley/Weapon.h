#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Weapon
{
public:
	string* m_listOfAbilities;
	//Costuctor
	Weapon();
	Weapon(string a_name, string a_discript, float a_dv);
	//Destructor
	~Weapon();

	//Getters
	string getWeaponName();

	string getDiscription();

	float getDamageValue();

	string getAbility();

	//Setters
	void setWeaponName(string name);

	void setDiscription(string discription);

	void setDamageValue(float damage);

	void setAbility(string ability);
	
	//Functions
	void storeAbility(string ability, int slot);

	//Overloaded operators


	friend ostream& operator<<(std::ostream &out, Weapon weap)
	{
		return cout << "Displaying Weapon infomation" << endl
		 << "Name: " << weap.getWeaponName() << endl
		 << "Discription: " << weap.getDiscription() << endl
		 << "Damage: " << weap.getDamageValue() << endl
		 << "Abilities: " << weap.m_listOfAbilities[0] << " and " << weap.m_listOfAbilities[1] << endl;
		
	}
	//Overload the cout operation to print weapon info
	
private:
	string m_weaponName;
	string m_discription;
	float m_damageValue;
	string m_ability;
	
};