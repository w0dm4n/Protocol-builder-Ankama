#include "TeleportOnSameMapMessage.hpp"

TeleportOnSameMapMessage::TeleportOnSameMapMessage(int targetId, int cellId)
{
	this->targetId = targetId;
this->cellId = cellId;

}

TeleportOnSameMapMessage::TeleportOnSameMapMessage()
{

}

ushort TeleportOnSameMapMessage::getId()
{
	return id;
}

std::string TeleportOnSameMapMessage::getName()
{
	return "TeleportOnSameMapMessage";
}

void TeleportOnSameMapMessage::serialize(BinaryWriter& writer)
{
	         writer.writeDouble(this->targetId);
}

void TeleportOnSameMapMessage::deserialize(BinaryReader& reader)
{
	      {
}