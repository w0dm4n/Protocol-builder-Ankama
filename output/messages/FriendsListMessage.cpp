#include "FriendsListMessage.hpp"

FriendsListMessage::FriendsListMessage(std::vector<FriendInformations> friendsList)
{
	this->friendsList = friendsList;

}

FriendsListMessage::FriendsListMessage()
{

}

ushort FriendsListMessage::getId()
{
	return id;
}

std::string FriendsListMessage::getName()
{
	return "FriendsListMessage";
}

void FriendsListMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->friendsList.size());
         while(_loc2_ < this->friendsList.size())
}

void FriendsListMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc5_ = 0;
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}