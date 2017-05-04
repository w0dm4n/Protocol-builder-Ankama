#include "GameRefreshMonsterBoostsMessage.hpp"

GameRefreshMonsterBoostsMessage::GameRefreshMonsterBoostsMessage(std::vector<MonsterBoosts> monsterBoosts, std::vector<MonsterBoosts> familyBoosts)
{
	this->monsterBoosts = monsterBoosts;
this->familyBoosts = familyBoosts;

}

GameRefreshMonsterBoostsMessage::GameRefreshMonsterBoostsMessage()
{

}

ushort GameRefreshMonsterBoostsMessage::getId()
{
	return id;
}

std::string GameRefreshMonsterBoostsMessage::getName()
{
	return "GameRefreshMonsterBoostsMessage";
}

void GameRefreshMonsterBoostsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->monsterBoosts.size());
         while(_loc2_ < this->monsterBoosts.size())
            _loc2_++;
         while(_loc3_ < this->familyBoosts.size())
            _loc3_++;
}

void GameRefreshMonsterBoostsMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc7_ = 0;
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
         while(_loc5_ < _loc4_)
}