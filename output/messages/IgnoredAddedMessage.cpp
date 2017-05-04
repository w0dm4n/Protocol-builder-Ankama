#include "IgnoredAddedMessage.hpp"

IgnoredAddedMessage::IgnoredAddedMessage(IgnoredInformations& ignoreAdded, bool session)
{
	this->ignoreAdded = ignoreAdded;
this->session = session;

}

IgnoredAddedMessage::IgnoredAddedMessage()
{

}

ushort IgnoredAddedMessage::getId()
{
	return id;
}

std::string IgnoredAddedMessage::getName()
{
	return "IgnoredAddedMessage";
}

void IgnoredAddedMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->ignoreAdded.getTypeId());
}

void IgnoredAddedMessage::deserialize(BinaryReader& reader)
{
	      {
}