#include "IgnoredDeleteRequestMessage.hpp"

IgnoredDeleteRequestMessage::IgnoredDeleteRequestMessage(int accountId, bool session)
{
	this->accountId = accountId;
this->session = session;

}

IgnoredDeleteRequestMessage::IgnoredDeleteRequestMessage()
{

}

ushort IgnoredDeleteRequestMessage::getId()
{
	return id;
}

std::string IgnoredDeleteRequestMessage::getName()
{
	return "IgnoredDeleteRequestMessage";
}

void IgnoredDeleteRequestMessage::serialize(BinaryWriter& writer)
{
	         writer.writeInt(this->accountId);
}

void IgnoredDeleteRequestMessage::deserialize(BinaryReader& reader)
{
	      {
}