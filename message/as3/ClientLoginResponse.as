package  {
	import com.netease.protobuf.*;
	use namespace com.netease.protobuf.used_by_generated_code;
	import com.netease.protobuf.fieldDescriptors.*;
	import flash.utils.Endian;
	import flash.utils.IDataInput;
	import flash.utils.IDataOutput;
	import flash.utils.IExternalizable;
	import flash.errors.IOError;
	import db_role_info;
	// @@protoc_insertion_point(imports)

	// @@protoc_insertion_point(class_metadata)
	public dynamic final class ClientLoginResponse extends com.netease.protobuf.Message {
		/**
		 *  @private
		 */
		public static const RET:FieldDescriptor$TYPE_INT32 = new FieldDescriptor$TYPE_INT32("ClientLoginResponse.ret", "ret", (1 << 3) | com.netease.protobuf.WireType.VARINT);

		public var ret:int;

		/**
		 *  @private
		 */
		public static const PLAYER_ID:FieldDescriptor$TYPE_INT32 = new FieldDescriptor$TYPE_INT32("ClientLoginResponse.player_id", "playerId", (2 << 3) | com.netease.protobuf.WireType.VARINT);

		private var player_id$field:int;

		private var hasField$0:uint = 0;

		public function clearPlayerId():void {
			hasField$0 &= 0xfffffffe;
			player_id$field = new int();
		}

		public function get hasPlayerId():Boolean {
			return (hasField$0 & 0x1) != 0;
		}

		public function set playerId(value:int):void {
			hasField$0 |= 0x1;
			player_id$field = value;
		}

		public function get playerId():int {
			return player_id$field;
		}

		/**
		 *  @private
		 */
		public static const PLAYER_NAME:FieldDescriptor$TYPE_STRING = new FieldDescriptor$TYPE_STRING("ClientLoginResponse.player_name", "playerName", (3 << 3) | com.netease.protobuf.WireType.LENGTH_DELIMITED);

		private var player_name$field:String;

		public function clearPlayerName():void {
			player_name$field = null;
		}

		public function get hasPlayerName():Boolean {
			return player_name$field != null;
		}

		public function set playerName(value:String):void {
			player_name$field = value;
		}

		public function get playerName():String {
			return player_name$field;
		}

		/**
		 *  @private
		 */
		public static const ROLE_DATA:FieldDescriptor$TYPE_MESSAGE = new FieldDescriptor$TYPE_MESSAGE("ClientLoginResponse.role_data", "roleData", (4 << 3) | com.netease.protobuf.WireType.LENGTH_DELIMITED, db_role_info);

		private var role_data$field:db_role_info;

		public function clearRoleData():void {
			role_data$field = null;
		}

		public function get hasRoleData():Boolean {
			return role_data$field != null;
		}

		public function set roleData(value:db_role_info):void {
			role_data$field = value;
		}

		public function get roleData():db_role_info {
			return role_data$field;
		}

		/**
		 *  @private
		 */
		override used_by_generated_code final function writeToBuffer(output:com.netease.protobuf.WritingBuffer):void {
			com.netease.protobuf.WriteUtils.writeTag(output, com.netease.protobuf.WireType.VARINT, 1);
			com.netease.protobuf.WriteUtils.write$TYPE_INT32(output, this.ret);
			if (hasPlayerId) {
				com.netease.protobuf.WriteUtils.writeTag(output, com.netease.protobuf.WireType.VARINT, 2);
				com.netease.protobuf.WriteUtils.write$TYPE_INT32(output, player_id$field);
			}
			if (hasPlayerName) {
				com.netease.protobuf.WriteUtils.writeTag(output, com.netease.protobuf.WireType.LENGTH_DELIMITED, 3);
				com.netease.protobuf.WriteUtils.write$TYPE_STRING(output, player_name$field);
			}
			if (hasRoleData) {
				com.netease.protobuf.WriteUtils.writeTag(output, com.netease.protobuf.WireType.LENGTH_DELIMITED, 4);
				com.netease.protobuf.WriteUtils.write$TYPE_MESSAGE(output, role_data$field);
			}
			for (var fieldKey:* in this) {
				super.writeUnknown(output, fieldKey);
			}
		}

		/**
		 *  @private
		 */
		override used_by_generated_code final function readFromSlice(input:flash.utils.IDataInput, bytesAfterSlice:uint):void {
			var ret$count:uint = 0;
			var player_id$count:uint = 0;
			var player_name$count:uint = 0;
			var role_data$count:uint = 0;
			while (input.bytesAvailable > bytesAfterSlice) {
				var tag:uint = com.netease.protobuf.ReadUtils.read$TYPE_UINT32(input);
				switch (tag >> 3) {
				case 1:
					if (ret$count != 0) {
						throw new flash.errors.IOError('Bad data format: ClientLoginResponse.ret cannot be set twice.');
					}
					++ret$count;
					this.ret = com.netease.protobuf.ReadUtils.read$TYPE_INT32(input);
					break;
				case 2:
					if (player_id$count != 0) {
						throw new flash.errors.IOError('Bad data format: ClientLoginResponse.playerId cannot be set twice.');
					}
					++player_id$count;
					this.playerId = com.netease.protobuf.ReadUtils.read$TYPE_INT32(input);
					break;
				case 3:
					if (player_name$count != 0) {
						throw new flash.errors.IOError('Bad data format: ClientLoginResponse.playerName cannot be set twice.');
					}
					++player_name$count;
					this.playerName = com.netease.protobuf.ReadUtils.read$TYPE_STRING(input);
					break;
				case 4:
					if (role_data$count != 0) {
						throw new flash.errors.IOError('Bad data format: ClientLoginResponse.roleData cannot be set twice.');
					}
					++role_data$count;
					this.roleData = new db_role_info();
					com.netease.protobuf.ReadUtils.read$TYPE_MESSAGE(input, this.roleData);
					break;
				default:
					super.readUnknown(input, tag);
					break;
				}
			}
		}

	}
}
