#pragma once
#include "Weapon.h"

class Character
{
public:
	//Costuctor
	Character(string a_name, float a_health, Weapon* a_weap);
	//Destructor
	virtual~Character();

	//Getters
	virtual string getName() const;

	virtual float getHealth() const;

	//Setters
	void setName(string name);

	void setHealth(float health);
	//A virtual function to display the infomation of a character
	virtual void displayInfo() = 0;


	

protected:
	string m_name;
	float m_health;
	Weapon* m_currentWeapon;
};

//3 child classes of Character one called gopnik, marine, fighter

class Gopnik : public Character
{
public:
	//Constuctor
	Gopnik(string a_name, float a_health, Weapon* a_weap) : Character(a_name, a_health, a_weap)
	{
		m_name = a_name;
		m_health = healthMod(a_health);
		m_currentWeapon = a_weap;
	}
	//Destructor
	~Gopnik()
	{
		
	}

	virtual void displayInfo() override
	{
		cout << "Name: " << "A nu chiki-briki i v damki! " << m_name << endl;
		cout << "Health: " << m_health << endl;
		cout << "Current Weapon: ";
		cout << *m_currentWeapon;
	}

	//Getters
	//Setters


	float healthMod(float health)
	{
		return m_health = health * 2;
	}

private:
	string m_name;
	float m_health;
	Weapon* m_currentWeapon;
};

class Marine : public Character
{
public:
	//Constuctor
	Marine(string a_name, float a_health, Weapon* a_weap) : Character(a_name, a_health, a_weap)
	{
		m_name = a_name;
		m_health = healthMod(a_health);
		m_currentWeapon = a_weap;
	}
	//Destructor
	~Marine()
	{

	}

	virtual void displayInfo() override
	{
		cout << "Name: " << "Sergeant major " << m_name << endl;
		cout << "Health: " << m_health << endl;
		cout << "Current Weapon: ";
		cout << *m_currentWeapon;
	}

	//Getters
	//Setters


	float healthMod(float health)
	{
		return m_health = health * 1.5;
	}

private:
	string m_name;
	float m_health;
	Weapon* m_currentWeapon;
};

class Fighter : public Character
{
public:
	//Constuctor
	Fighter(string a_name, float a_health, Weapon* a_weap) : Character(a_name, a_health, a_weap)
	{
		m_name = a_name;
		m_health = healthMod(a_health);
		m_currentWeapon = a_weap;
	}
	//Destructor
	~Fighter()
	{

	}

	virtual void displayInfo() override
	{
		cout << "Name: " << "Sensei " << m_name << endl;
		cout << "Health: " << m_health << endl;
		cout << "Current Weapon: ";
		cout << *m_currentWeapon;
	}

	//Getters
	//Setters


	float healthMod(float health)
	{
		return m_health = health * 2.5;
	}

private:
	string m_name;
	float m_health;
	Weapon* m_currentWeapon;
};
