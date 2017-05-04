#include "GameRolePlayShowActorMessage.hpp"

GameRolePlayShowActorMessage::GameRolePlayShowActorMessage(GameRolePlayActorInformations& informations)
{
	this->informations = informations;

}

GameRolePlayShowActorMessage::GameRolePlayShowActorMessage()
{

}

ushort GameRolePlayShowActorMessage::getId()
{
	return id;
}

std::string GameRolePlayShowActorMessage::getName()
{
	return "GameRolePlayShowActorMessage";
}

void GameRolePlayShowActorMessage::serialize(BinaryWriter& writer)
{
	         writer.writeShort(this->informations.getTypeId());
}

void GameRolePlayShowActorMessage::deserialize(BinaryReader& reader)
{
	      {
}