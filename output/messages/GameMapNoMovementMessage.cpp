#include "GameMapNoMovementMessage.hpp"

GameMapNoMovementMessage::GameMapNoMovementMessage(int cellX, int cellY)
{
	this->cellX = cellX;
this->cellY = cellY;

}

GameMapNoMovementMessage::GameMapNoMovementMessage()
{

}

ushort GameMapNoMovementMessage::getId()
{
	return id;
}

std::string GameMapNoMovementMessage::getName()
{
	return "GameMapNoMovementMessage";
}

void GameMapNoMovementMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->cellX);
}

void GameMapNoMovementMessage::deserialize(BinaryReader& reader)
{
	      {
}