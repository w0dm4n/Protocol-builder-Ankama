#include "MapComplementaryInformationsDataMessage.hpp"

MapComplementaryInformationsDataMessage::MapComplementaryInformationsDataMessage(int subAreaId, int mapId, std::vector<HouseInformations> houses, std::vector<GameRolePlayActorInformations> actors, std::vector<InteractiveElement> interactiveElements, std::vector<StatedElement> statedElements, std::vector<MapObstacle> obstacles, std::vector<FightCommonInformations> fights, bool hasAggressiveMonsters)
{
	this->subAreaId = subAreaId;
this->mapId = mapId;
this->houses = houses;
this->actors = actors;
this->interactiveElements = interactiveElements;
this->statedElements = statedElements;
this->obstacles = obstacles;
this->fights = fights;
this->hasAggressiveMonsters = hasAggressiveMonsters;

}

MapComplementaryInformationsDataMessage::MapComplementaryInformationsDataMessage()
{

}

ushort MapComplementaryInformationsDataMessage::getId()
{
	return id;
}

std::string MapComplementaryInformationsDataMessage::getName()
{
	return "MapComplementaryInformationsDataMessage";
}

void MapComplementaryInformationsDataMessage::serialize(BinaryWriter& writer)
{
	         writer.writeVarShort(this->subAreaId);
         while(_loc2_ < this->houses.size())
         while(_loc3_ < this->actors.size())
         while(_loc4_ < this->interactiveElements.size())
         while(_loc5_ < this->statedElements.size())
            _loc5_++;
         while(_loc6_ < this->obstacles.size())
            _loc6_++;
         while(_loc7_ < this->fights.size())
            _loc7_++;
}

void MapComplementaryInformationsDataMessage::deserialize(BinaryReader& reader)
{
	      {
	HouseInformations _loc15_;
	int _loc16_ = 0;
	GameRolePlayActorInformations _loc17_;
	int _loc18_ = 0;
	InteractiveElement _loc19_;
	StatedElement _loc20_;
	MapObstacle _loc21_;
	FightCommonInformations _loc22_;
         this->subAreaId = reader.readVarUhShort();
         while(_loc3_ < _loc2_)
         while(_loc5_ < _loc4_)
         while(_loc7_ < _loc6_)
         while(_loc9_ < _loc8_)
         while(_loc11_ < _loc10_)
         while(_loc13_ < _loc12_)
}