#include "GameMapChangeOrientationsMessage.hpp"

GameMapChangeOrientationsMessage::GameMapChangeOrientationsMessage(std::vector<ActorOrientation> orientations)
{
	this->orientations = orientations;

}

GameMapChangeOrientationsMessage::GameMapChangeOrientationsMessage()
{

}

ushort GameMapChangeOrientationsMessage::getId()
{
	return id;
}

std::string GameMapChangeOrientationsMessage::getName()
{
	return "GameMapChangeOrientationsMessage";
}

void GameMapChangeOrientationsMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->orientations.size());
         while(_loc2_ < this->orientations.size())
            _loc2_++;
}

void GameMapChangeOrientationsMessage::deserialize(BinaryReader& reader)
{
	      {
	int _loc2_ = reader.readUnsignedShort();
         while(_loc3_ < _loc2_)
}