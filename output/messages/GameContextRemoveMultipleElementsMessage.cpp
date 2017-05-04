#include "GameContextRemoveMultipleElementsMessage.hpp"

GameContextRemoveMultipleElementsMessage::GameContextRemoveMultipleElementsMessage(std::vector<Number> id)
{
	this->id = id;

}

GameContextRemoveMultipleElementsMessage::GameContextRemoveMultipleElementsMessage()
{

}

ushort GameContextRemoveMultipleElementsMessage::getId()
{
	return id;
}

std::string GameContextRemoveMultipleElementsMessage::getName()
{
	return "GameContextRemoveMultipleElementsMessage";
}

void GameContextRemoveMultipleElementsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->id.size());
         while(_loc2_ < this->id.size())
}

void GameContextRemoveMultipleElementsMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}