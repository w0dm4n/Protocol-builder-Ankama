#include "GameMapMovementRequestMessage.hpp"

GameMapMovementRequestMessage::GameMapMovementRequestMessage(std::vector<uint> keyMovements, int mapId)
{
	this->keyMovements = keyMovements;
this->mapId = mapId;

}

GameMapMovementRequestMessage::GameMapMovementRequestMessage()
{

}

ushort GameMapMovementRequestMessage::getId()
{
	return id;
}

std::string GameMapMovementRequestMessage::getName()
{
	return "GameMapMovementRequestMessage";
}

void GameMapMovementRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->keyMovements.size());
         while(_loc2_ < this->keyMovements.size())
}

void GameMapMovementRequestMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}