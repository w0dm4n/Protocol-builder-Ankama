#include "GameContextRemoveMultipleElementsWithEventsMessage.hpp"

GameContextRemoveMultipleElementsWithEventsMessage::GameContextRemoveMultipleElementsWithEventsMessage(std::vector<uint> elementEventIds)
{
	this->elementEventIds = elementEventIds;

}

GameContextRemoveMultipleElementsWithEventsMessage::GameContextRemoveMultipleElementsWithEventsMessage()
{

}

ushort GameContextRemoveMultipleElementsWithEventsMessage::getId()
{
	return id;
}

std::string GameContextRemoveMultipleElementsWithEventsMessage::getName()
{
	return "GameContextRemoveMultipleElementsWithEventsMessage";
}

void GameContextRemoveMultipleElementsWithEventsMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         writer.writeShort(this->elementEventIds.size());
         while(_loc2_ < this->elementEventIds.size())
}

void GameContextRemoveMultipleElementsWithEventsMessage::deserialize(BinaryReader& reader)
{
	      {
         super.deserialize(reader);
         while(_loc3_ < _loc2_)
}