#include "Character.h"

int main()
{

	//Varibles to store user input
	string t_characterName;
	float t_characterHealth;
	string t_weaponName;
	string t_weaponDiscript;
	float t_weaponDamage;
	string t_weaponAbility;
	int t_classSelect;
	Character* characterArray[5] = {nullptr};
	int arraySlot = 0;
	int userChoise = 0;
	bool exitFlag = false;

	cout << "Wellcome to the Character creator. Lets Start with making a character" << endl;;
	cout << "Please enter in a name for your character: ";
	cin >> t_characterName;
	cout << "How much health does your character have?: ";
	cin >> t_characterHealth;
	cout << "What is name of the weapon your character uses?: ";
	cin >> t_weaponName;
	cout << "What is the discription of said weapon?: ";
	cin >> t_weaponDiscript;
	cout << "How much damage does this weapon do?: ";
	cin >> t_weaponDamage;
	Weapon* newWeapon;
	newWeapon = new Weapon(t_weaponName, t_weaponDiscript, t_weaponDamage);
	cout << "What is the first ability of your weapon?: ";
	cin >> t_weaponAbility;
	newWeapon->storeAbility(t_weaponAbility, 0);
	cout << "What is the second ability of your weapon?: ";
	cin >> t_weaponAbility;
	newWeapon->storeAbility(t_weaponAbility, 1);
	cout << "What class if your character? Enter 1 for Gopnik, 2 for Marine, or 3 for Fighter: ";
	cin >> t_classSelect;
	if (t_classSelect == 1)
	{
		Gopnik* newCharacter;
		newCharacter = new Gopnik(t_characterName, t_characterHealth, newWeapon);
		characterArray[arraySlot] = newCharacter;

	}
	else if (t_classSelect == 2)
	{
		Marine* newCharacter;
		newCharacter = new Marine(t_characterName, t_characterHealth, newWeapon);
		characterArray[arraySlot] = newCharacter;

	}
	else if (t_classSelect == 3)
	{
		Fighter* newCharacter;
		newCharacter = new Fighter(t_characterName, t_characterHealth, newWeapon);
		characterArray[arraySlot] = newCharacter;

	}
	arraySlot++;
	while (exitFlag == false)
	{
		cout << "Would you like to add another character, delete a character, or display all your characters? Press 1 to add, press 2 to delete, or press 3 to display all the characters: ";
		cin >> userChoise;
		if (userChoise == 1)
		{
			cout << "Please enter in a name for your character: ";
			cin >> t_characterName;
			cout << "How much health does your character have?: ";
			cin >> t_characterHealth;
			cout << "What is name of the weapon your character uses?: ";
			cin >> t_weaponName;
			cout << "What is the discription of said weapon?: ";
			cin >> t_weaponDiscript;
			cout << "How much damage does this weapon do?: ";
			cin >> t_weaponDamage;
			Weapon* newWeapon;
			newWeapon = new Weapon(t_weaponName, t_weaponDiscript, t_weaponDamage);
			cout << "What is the first ability of your weapon?: ";
			cin >> t_weaponAbility;
			newWeapon->storeAbility(t_weaponAbility, 0);
			cout << "What is the second ability of your weapon?: ";
			cin >> t_weaponAbility;
			newWeapon->storeAbility(t_weaponAbility, 1);
			cout << "What class if your character? Enter 1 for Gopnik, 2 for Marine, or 3 for Fighter: ";
			cin >> t_classSelect;
			if (t_classSelect == 1)
			{
				Gopnik* newCharacter;
				newCharacter = new Gopnik(t_characterName, t_characterHealth, newWeapon);
				characterArray[arraySlot] = newCharacter;

			}
			else if (t_classSelect == 2)
			{
				Marine* newCharacter;
				newCharacter = new Marine(t_characterName, t_characterHealth, newWeapon);
				characterArray[arraySlot] = newCharacter;

			}
			else if (t_classSelect == 3)
			{
				Fighter* newCharacter;
				newCharacter = new Fighter(t_characterName, t_characterHealth, newWeapon);
				characterArray[arraySlot] = newCharacter;

			}
			arraySlot++;
		}// end of if
		else if (userChoise == 2)
		{
			int input;
			cout << "What slot do you want to delete select a number bettween 0 and 4: ";
			cin >> input;
			Character* pCharacter = characterArray[input];
			delete pCharacter;
			cout << "Deleted the character stored in slot " << input << endl;
			characterArray[input] = nullptr;

		}//end of else if
		else if (userChoise == 3 || arraySlot >= 5)
		{
			exitFlag = true;
		}//end of else if

	}//end of while loop
	cout << "Displaying all the characters:" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (characterArray[i] == nullptr)
		{
			continue;
		}
		characterArray[i]->displayInfo();
	}
	

	//Clean up
	cout << "Thank you for using this program deleting all characters now" << endl;
	for (int i = 0; i < 5; i++)
	{
		Character* pCharacter = characterArray[i];
		if (characterArray[i] == nullptr)
		{
			continue;
		}
		delete pCharacter;
		cout << "Deleted Succsefully" << endl;
	}
	delete characterArray;
	delete newWeapon;
	return 0;
}




