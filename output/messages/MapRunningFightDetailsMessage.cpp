#include "MapRunningFightDetailsMessage.hpp"

MapRunningFightDetailsMessage::MapRunningFightDetailsMessage(int fightId, std::vector<GameFightFighterLightInformations> attackers, std::vector<GameFightFighterLightInformations> defenders)
{
	this->fightId = fightId;
this->attackers = attackers;
this->defenders = defenders;

}

MapRunningFightDetailsMessage::MapRunningFightDetailsMessage()
{

}

ushort MapRunningFightDetailsMessage::getId()
{
	return id;
}

std::string MapRunningFightDetailsMessage::getName()
{
	return "MapRunningFightDetailsMessage";
}

void MapRunningFightDetailsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeInt(this->fightId);
         while(_loc2_ < this->attackers.size())
         while(_loc3_ < this->defenders.size())
}

void MapRunningFightDetailsMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc7_ = 0;
	int _loc8_ = 0;
	int _loc9_ = 0;
         this->fightId = reader.readInt();
         while(_loc3_ < _loc2_)
         while(_loc5_ < _loc4_)
}