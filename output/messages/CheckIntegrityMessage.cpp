#include "CheckIntegrityMessage.hpp"

CheckIntegrityMessage::CheckIntegrityMessage(ByteArray data)
{
	this->data = data;

}

CheckIntegrityMessage::CheckIntegrityMessage()
{

}

ushort CheckIntegrityMessage::getId()
{
	return id;
}

std::string CheckIntegrityMessage::getName()
{
	return "CheckIntegrityMessage";
}

void CheckIntegrityMessage::serialize(BinaryWriter& writer)
{
	         writer.writeVarInt(this->data.size());
         while(_loc2_ < this->data.size())
}

void CheckIntegrityMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc2_ = reader.readVarInt();
         while(_loc3_ < _loc2_)
}