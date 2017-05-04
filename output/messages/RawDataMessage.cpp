#include "RawDataMessage.hpp"

RawDataMessage::RawDataMessage(ByteArray& content)
{
	this->content = content;

}

RawDataMessage::RawDataMessage()
{

}

ushort RawDataMessage::getId()
{
	return id;
}

std::string RawDataMessage::getName()
{
	return "RawDataMessage";
}

void RawDataMessage::serialize(BinaryWriter& writer)
{
	         writer.writeVarInt(this->content.size());
         while(_loc2_ < this->content.size())
}

void RawDataMessage::deserialize(BinaryReader& reader)
{
	      {
}