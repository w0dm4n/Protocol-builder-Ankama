#include "CurrentMapMessage.hpp"

CurrentMapMessage::CurrentMapMessage(int mapId, std::string mapKey)
{
	this->mapId = mapId;
this->mapKey = mapKey;

}

CurrentMapMessage::CurrentMapMessage()
{

}

ushort CurrentMapMessage::getId()
{
	return id;
}

std::string CurrentMapMessage::getName()
{
	return "CurrentMapMessage";
}

void CurrentMapMessage::serialize(BinaryWriter& writer)
{
	         writer.writeInt(this->mapId);
}

void CurrentMapMessage::deserialize(BinaryReader& reader)
{
	      {
}