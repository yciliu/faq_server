# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: role_info.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='role_info.proto',
  package='',
  serialized_pb='\n\x0frole_info.proto\"\xa5\x07\n\x0c\x64\x62_role_info\x12\x0f\n\x07role_id\x18\x01 \x02(\x05\x12\x0b\n\x03uid\x18\x02 \x02(\x05\x12\x0b\n\x03tid\x18\x03 \x02(\x05\x12\x0c\n\x04name\x18\x04 \x02(\t\x12\x0e\n\x06gender\x18\x05 \x02(\x05\x12\x10\n\x08job_type\x18\x06 \x02(\x05\x12\x12\n\nrole_level\x18\x07 \x02(\x05\x12\x10\n\x08role_exp\x18\x08 \x02(\x05\x12\x13\n\x0b\x63ostume_tid\x18\t \x02(\x05\x12\r\n\x05title\x18\n \x02(\x05\x12\x0c\n\x04\x63oin\x18\x0b \x02(\x05\x12\x0e\n\x06\x63oupon\x18\x0c \x02(\x05\x12\x0f\n\x07\x64iamond\x18\r \x02(\x05\x12\x12\n\nvip_end_ts\x18\x0e \x02(\x05\x12\x11\n\tvip_level\x18\x0f \x02(\x05\x12\x0e\n\x06map_id\x18\x10 \x02(\x05\x12\r\n\x05map_x\x18\x11 \x02(\x05\x12\r\n\x05map_y\x18\x12 \x02(\x05\x12\x13\n\x0blast_map_id\x18\x13 \x02(\x05\x12\x12\n\nlast_map_x\x18\x14 \x02(\x05\x12\x12\n\nlast_map_y\x18\x15 \x02(\x05\x12\x0c\n\x04\x66lag\x18\x16 \x02(\x05\x12\x0e\n\x06status\x18\x17 \x02(\x05\x12\x11\n\tserver_id\x18\x18 \x02(\x05\x12\x13\n\x0b\x63reate_time\x18\x19 \x02(\x05\x12\x0f\n\x07team_id\x18\x1a \x02(\x05\x12\x18\n\x10team_create_time\x18\x1b \x02(\x05\x12\x10\n\x08\x62\x61g_size\x18\x1c \x02(\x05\x12\x12\n\ndepot_size\x18\x1d \x02(\x05\x12\x12\n\nbuddy_size\x18\x1e \x02(\x05\x12\x13\n\x0blineup_size\x18\x1f \x02(\x05\x12\x19\n\x11\x64\x65\x66\x61ult_lineup_id\x18  \x02(\x05\x12\x17\n\x0flineup_capacity\x18! \x02(\x05\x12\x12\n\nlogin_time\x18\" \x02(\x05\x12\x18\n\x10last_logoff_time\x18# \x02(\x05\x12\x10\n\x08login_ip\x18$ \x02(\t\x12\x16\n\x0einstance_count\x18% \x02(\x05\x12\x15\n\rinstance_time\x18& \x02(\x05\x12\x10\n\x08guild_id\x18\' \x02(\x05\x12\x12\n\nguild_time\x18( \x02(\x05\x12\x12\n\nguild_name\x18) \x02(\t\x12\x14\n\x0cphy_strength\x18* \x02(\x05\x12\x1a\n\x12\x65xtra_phy_strength\x18+ \x02(\x05\x12$\n\x1ctime_to_recover_phy_strength\x18, \x02(\x05\x12*\n\"time_to_recover_extra_phy_strength\x18- \x02(\x05\x12\x0e\n\x06renown\x18. \x02(\x05')




_DB_ROLE_INFO = _descriptor.Descriptor(
  name='db_role_info',
  full_name='db_role_info',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='role_id', full_name='db_role_info.role_id', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='uid', full_name='db_role_info.uid', index=1,
      number=2, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tid', full_name='db_role_info.tid', index=2,
      number=3, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='name', full_name='db_role_info.name', index=3,
      number=4, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gender', full_name='db_role_info.gender', index=4,
      number=5, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='job_type', full_name='db_role_info.job_type', index=5,
      number=6, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='role_level', full_name='db_role_info.role_level', index=6,
      number=7, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='role_exp', full_name='db_role_info.role_exp', index=7,
      number=8, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='costume_tid', full_name='db_role_info.costume_tid', index=8,
      number=9, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='title', full_name='db_role_info.title', index=9,
      number=10, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='coin', full_name='db_role_info.coin', index=10,
      number=11, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='coupon', full_name='db_role_info.coupon', index=11,
      number=12, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='diamond', full_name='db_role_info.diamond', index=12,
      number=13, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vip_end_ts', full_name='db_role_info.vip_end_ts', index=13,
      number=14, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vip_level', full_name='db_role_info.vip_level', index=14,
      number=15, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='map_id', full_name='db_role_info.map_id', index=15,
      number=16, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='map_x', full_name='db_role_info.map_x', index=16,
      number=17, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='map_y', full_name='db_role_info.map_y', index=17,
      number=18, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last_map_id', full_name='db_role_info.last_map_id', index=18,
      number=19, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last_map_x', full_name='db_role_info.last_map_x', index=19,
      number=20, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last_map_y', full_name='db_role_info.last_map_y', index=20,
      number=21, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='flag', full_name='db_role_info.flag', index=21,
      number=22, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='status', full_name='db_role_info.status', index=22,
      number=23, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='server_id', full_name='db_role_info.server_id', index=23,
      number=24, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='create_time', full_name='db_role_info.create_time', index=24,
      number=25, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='team_id', full_name='db_role_info.team_id', index=25,
      number=26, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='team_create_time', full_name='db_role_info.team_create_time', index=26,
      number=27, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bag_size', full_name='db_role_info.bag_size', index=27,
      number=28, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='depot_size', full_name='db_role_info.depot_size', index=28,
      number=29, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='buddy_size', full_name='db_role_info.buddy_size', index=29,
      number=30, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='lineup_size', full_name='db_role_info.lineup_size', index=30,
      number=31, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='default_lineup_id', full_name='db_role_info.default_lineup_id', index=31,
      number=32, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='lineup_capacity', full_name='db_role_info.lineup_capacity', index=32,
      number=33, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='login_time', full_name='db_role_info.login_time', index=33,
      number=34, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last_logoff_time', full_name='db_role_info.last_logoff_time', index=34,
      number=35, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='login_ip', full_name='db_role_info.login_ip', index=35,
      number=36, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='instance_count', full_name='db_role_info.instance_count', index=36,
      number=37, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='instance_time', full_name='db_role_info.instance_time', index=37,
      number=38, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='guild_id', full_name='db_role_info.guild_id', index=38,
      number=39, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='guild_time', full_name='db_role_info.guild_time', index=39,
      number=40, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='guild_name', full_name='db_role_info.guild_name', index=40,
      number=41, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='phy_strength', full_name='db_role_info.phy_strength', index=41,
      number=42, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='extra_phy_strength', full_name='db_role_info.extra_phy_strength', index=42,
      number=43, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='time_to_recover_phy_strength', full_name='db_role_info.time_to_recover_phy_strength', index=43,
      number=44, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='time_to_recover_extra_phy_strength', full_name='db_role_info.time_to_recover_extra_phy_strength', index=44,
      number=45, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='renown', full_name='db_role_info.renown', index=45,
      number=46, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=20,
  serialized_end=953,
)

DESCRIPTOR.message_types_by_name['db_role_info'] = _DB_ROLE_INFO

class db_role_info(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _DB_ROLE_INFO

  # @@protoc_insertion_point(class_scope:db_role_info)


# @@protoc_insertion_point(module_scope)
