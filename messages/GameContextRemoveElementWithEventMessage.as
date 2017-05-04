package com.ankamagames.dofus.network.messages.game.context
{
   import com.ankamagames.jerakine.network.INetworkMessage;
   import com.ankamagames.jerakine.network.ICustomDataOutput;
   import flash.utils.ByteArray;
   import com.ankamagames.jerakine.network.CustomDataWrapper;
   import com.ankamagames.jerakine.network.ICustomDataInput;
   
   [Trusted]
   public class GameContextRemoveElementWithEventMessage extends GameContextRemoveElementMessage implements INetworkMessage
   {
      
      public static const protocolId:uint = 6412;
       
      private var _isInitialized:Boolean = false;
      
      public var elementEventId:uint = 0;
      
      public function GameContextRemoveElementWithEventMessage()
      {
         super();
      }
      
      override public function get isInitialized() : Boolean
      {
         return Boolean(super.isInitialized) && Boolean(this._isInitialized);
      }
      
      override public function getMessageId() : uint
      {
         return 6412;
      }
      
      public function initGameContextRemoveElementWithEventMessage(param1:Number = 0, param2:uint = 0) : GameContextRemoveElementWithEventMessage
      {
         super.initGameContextRemoveElementMessage(param1);
         this.elementEventId = param2;
         this._isInitialized = true;
         return this;
      }
      
      override public function reset() : void
      {
         super.reset();
         this.elementEventId = 0;
         this._isInitialized = false;
      }
      
      override public function pack(param1:ICustomDataOutput) : void
      {
         var _loc2_:ByteArray = new ByteArray();
         this.serialize(new CustomDataWrapper(_loc2_));
         writePacket(param1,this.getMessageId(),_loc2_);
      }
      
      override public function unpack(param1:ICustomDataInput, param2:uint) : void
      {
         this.deserialize(param1);
      }
      
      override public function serialize(param1:ICustomDataOutput) : void
      {
         this.serializeAs_GameContextRemoveElementWithEventMessage(param1);
      }
      
      public function serializeAs_GameContextRemoveElementWithEventMessage(param1:ICustomDataOutput) : void
      {
         super.serializeAs_GameContextRemoveElementMessage(param1);
         if(this.elementEventId < 0)
         {
            throw new Error("Forbidden value (" + this.elementEventId + ") on element elementEventId.");
         }
         param1.writeByte(this.elementEventId);
      }
      
      override public function deserialize(param1:ICustomDataInput) : void
      {
         this.deserializeAs_GameContextRemoveElementWithEventMessage(param1);
      }
      
      public function deserializeAs_GameContextRemoveElementWithEventMessage(param1:ICustomDataInput) : void
      {
         super.deserialize(param1);
         this.elementEventId = param1.readByte();
         if(this.elementEventId < 0)
         {
            throw new Error("Forbidden value (" + this.elementEventId + ") on element of GameContextRemoveElementWithEventMessage.elementEventId.");
         }
      }
   }
}
