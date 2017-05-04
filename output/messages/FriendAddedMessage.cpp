#include "FriendAddedMessage.hpp"

FriendAddedMessage::FriendAddedMessage(FriendInformations& friendAdded)
{
	this->friendAdded = friendAdded;

}

FriendAddedMessage::FriendAddedMessage()
{

}

ushort FriendAddedMessage::getId()
{
	return id;
}

std::string FriendAddedMessage::getName()
{
	return "FriendAddedMessage";
}

void FriendAddedMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->friendAdded.getTypeId());
}

void FriendAddedMessage::deserialize(BinaryReader& reader)
{
	      {
}