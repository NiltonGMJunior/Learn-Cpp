#include <iostream>
#include <string>

enum class MONSTER_TYPE
{
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME,
};

struct Monster
{
	MONSTER_TYPE type;
	std::string name;
	double health;
};

std::string getTypeString(MONSTER_TYPE type)
{
	if (type == MONSTER_TYPE::OGRE)
		return "Ogre";
	else if (type == MONSTER_TYPE::DRAGON)
		return "Dragon";
	else if (type == MONSTER_TYPE::ORC)
		return "Orc";
	else if (type == MONSTER_TYPE::GIANT_SPIDER)
		return "Giant spider";
	else if (type == MONSTER_TYPE::SLIME)
		return "Slime";
	else
		return "Undefined type";
}

void printMonster(Monster monster)
{
	//std::cout << "Monster type: " << getTypeString(monster.type) << '\n';
	//std::cout << "Monster name: " << monster.name << '\n';
	//std::cout << "Monster health: " << monster.health << '\n';
	std::cout << "This " << getTypeString(monster.type) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main()
{
	Monster ogre { MONSTER_TYPE::OGRE, "Torg", 145};
	Monster slime { MONSTER_TYPE::SLIME, "Slurp", 23};
	printMonster(ogre);
	printMonster(slime);
	return 0;
}
