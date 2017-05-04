#include "MapComplementaryInformationsWithCoordsMessage.hpp"

MapComplementaryInformationsWithCoordsMessage::MapComplementaryInformationsWithCoordsMessage(int worldX, int worldY)
{
	this->worldX = worldX;
this->worldY = worldY;

}

MapComplementaryInformationsWithCoordsMessage::MapComplementaryInformationsWithCoordsMessage()
{

}

ushort MapComplementaryInformationsWithCoordsMessage::getId()
{
	return id;
}

std::string MapComplementaryInformationsWithCoordsMessage::getName()
{
	return "MapComplementaryInformationsWithCoordsMessage";
}

void MapComplementaryInformationsWithCoordsMessage::serialize(BinaryWriter& writer)
{
	         super.serialize(writer);
         writer.writeShort(this->worldX);
}

void MapComplementaryInformationsWithCoordsMessage::deserialize(BinaryReader& reader)
{
	      {
}