#include "GameContextMoveMultipleElementsMessage.hpp"

GameContextMoveMultipleElementsMessage::GameContextMoveMultipleElementsMessage(std::vector<EntityMovementInformations> movements)
{
	this->movements = movements;

}

GameContextMoveMultipleElementsMessage::GameContextMoveMultipleElementsMessage()
{

}

ushort GameContextMoveMultipleElementsMessage::getId()
{
	return id;
}

std::string GameContextMoveMultipleElementsMessage::getName()
{
	return "GameContextMoveMultipleElementsMessage";
}

void GameContextMoveMultipleElementsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->movements.size());
         while(_loc2_ < this->movements.size())
            _loc2_++;
}

void GameContextMoveMultipleElementsMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}