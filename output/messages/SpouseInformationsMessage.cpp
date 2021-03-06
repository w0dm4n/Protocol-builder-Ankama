#include "SpouseInformationsMessage.hpp"

SpouseInformationsMessage::SpouseInformationsMessage(FriendSpouseInformations& spouse)
{
	this->spouse = spouse;

}

SpouseInformationsMessage::SpouseInformationsMessage()
{

}

ushort SpouseInformationsMessage::getId()
{
	return id;
}

std::string SpouseInformationsMessage::getName()
{
	return "SpouseInformationsMessage";
}

void SpouseInformationsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->spouse.getId());         this->spouse.serialize(writer);      
}

void SpouseInformationsMessage::deserialize(BinaryReader& reader)
{
	      {	int _loc2_ = reader.readUnsignedShort();         this->spouse.deserialize(reader);      }
}