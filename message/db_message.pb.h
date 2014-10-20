// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: db_message.proto

#ifndef PROTOBUF_db_5fmessage_2eproto__INCLUDED
#define PROTOBUF_db_5fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "tb_user.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_db_5fmessage_2eproto();
void protobuf_AssignDesc_db_5fmessage_2eproto();
void protobuf_ShutdownFile_db_5fmessage_2eproto();

class DBUserItem;
class DBUserItemList;
class DBCommonReq;
class DBCommonRep;

enum DbOperateType {
  MSG_DB_WORK_START = 10000,
  MSG_DB_GET_USER_INFO = 10001,
  MSG_DB_GET_ITEM_LIST = 10002
};
bool DbOperateType_IsValid(int value);
const DbOperateType DbOperateType_MIN = MSG_DB_WORK_START;
const DbOperateType DbOperateType_MAX = MSG_DB_GET_ITEM_LIST;
const int DbOperateType_ARRAYSIZE = DbOperateType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DbOperateType_descriptor();
inline const ::std::string& DbOperateType_Name(DbOperateType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DbOperateType_descriptor(), value);
}
inline bool DbOperateType_Parse(
    const ::std::string& name, DbOperateType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DbOperateType>(
    DbOperateType_descriptor(), name, value);
}
// ===================================================================

class DBUserItem : public ::google::protobuf::Message {
 public:
  DBUserItem();
  virtual ~DBUserItem();

  DBUserItem(const DBUserItem& from);

  inline DBUserItem& operator=(const DBUserItem& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DBUserItem& default_instance();

  void Swap(DBUserItem* other);

  // implements Message ----------------------------------------------

  DBUserItem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DBUserItem& from);
  void MergeFrom(const DBUserItem& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 item_id = 1;
  inline bool has_item_id() const;
  inline void clear_item_id();
  static const int kItemIdFieldNumber = 1;
  inline ::google::protobuf::int32 item_id() const;
  inline void set_item_id(::google::protobuf::int32 value);

  // required int32 item_num = 2;
  inline bool has_item_num() const;
  inline void clear_item_num();
  static const int kItemNumFieldNumber = 2;
  inline ::google::protobuf::int32 item_num() const;
  inline void set_item_num(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:DBUserItem)
 private:
  inline void set_has_item_id();
  inline void clear_has_item_id();
  inline void set_has_item_num();
  inline void clear_has_item_num();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 item_id_;
  ::google::protobuf::int32 item_num_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fmessage_2eproto();
  friend void protobuf_AssignDesc_db_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_db_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static DBUserItem* default_instance_;
};
// -------------------------------------------------------------------

class DBUserItemList : public ::google::protobuf::Message {
 public:
  DBUserItemList();
  virtual ~DBUserItemList();

  DBUserItemList(const DBUserItemList& from);

  inline DBUserItemList& operator=(const DBUserItemList& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DBUserItemList& default_instance();

  void Swap(DBUserItemList* other);

  // implements Message ----------------------------------------------

  DBUserItemList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DBUserItemList& from);
  void MergeFrom(const DBUserItemList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .DBUserItem item_list = 1;
  inline int item_list_size() const;
  inline void clear_item_list();
  static const int kItemListFieldNumber = 1;
  inline const ::DBUserItem& item_list(int index) const;
  inline ::DBUserItem* mutable_item_list(int index);
  inline ::DBUserItem* add_item_list();
  inline const ::google::protobuf::RepeatedPtrField< ::DBUserItem >&
      item_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::DBUserItem >*
      mutable_item_list();

  // @@protoc_insertion_point(class_scope:DBUserItemList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::DBUserItem > item_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fmessage_2eproto();
  friend void protobuf_AssignDesc_db_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_db_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static DBUserItemList* default_instance_;
};
// -------------------------------------------------------------------

class DBCommonReq : public ::google::protobuf::Message {
 public:
  DBCommonReq();
  virtual ~DBCommonReq();

  DBCommonReq(const DBCommonReq& from);

  inline DBCommonReq& operator=(const DBCommonReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DBCommonReq& default_instance();

  void Swap(DBCommonReq* other);

  // implements Message ----------------------------------------------

  DBCommonReq* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DBCommonReq& from);
  void MergeFrom(const DBCommonReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 seq = 1;
  inline bool has_seq() const;
  inline void clear_seq();
  static const int kSeqFieldNumber = 1;
  inline ::google::protobuf::int32 seq() const;
  inline void set_seq(::google::protobuf::int32 value);

  // required int32 operate_type = 2;
  inline bool has_operate_type() const;
  inline void clear_operate_type();
  static const int kOperateTypeFieldNumber = 2;
  inline ::google::protobuf::int32 operate_type() const;
  inline void set_operate_type(::google::protobuf::int32 value);

  // required string operate_string = 3;
  inline bool has_operate_string() const;
  inline void clear_operate_string();
  static const int kOperateStringFieldNumber = 3;
  inline const ::std::string& operate_string() const;
  inline void set_operate_string(const ::std::string& value);
  inline void set_operate_string(const char* value);
  inline void set_operate_string(const char* value, size_t size);
  inline ::std::string* mutable_operate_string();
  inline ::std::string* release_operate_string();
  inline void set_allocated_operate_string(::std::string* operate_string);

  // @@protoc_insertion_point(class_scope:DBCommonReq)
 private:
  inline void set_has_seq();
  inline void clear_has_seq();
  inline void set_has_operate_type();
  inline void clear_has_operate_type();
  inline void set_has_operate_string();
  inline void clear_has_operate_string();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 seq_;
  ::google::protobuf::int32 operate_type_;
  ::std::string* operate_string_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fmessage_2eproto();
  friend void protobuf_AssignDesc_db_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_db_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static DBCommonReq* default_instance_;
};
// -------------------------------------------------------------------

class DBCommonRep : public ::google::protobuf::Message {
 public:
  DBCommonRep();
  virtual ~DBCommonRep();

  DBCommonRep(const DBCommonRep& from);

  inline DBCommonRep& operator=(const DBCommonRep& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DBCommonRep& default_instance();

  void Swap(DBCommonRep* other);

  // implements Message ----------------------------------------------

  DBCommonRep* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DBCommonRep& from);
  void MergeFrom(const DBCommonRep& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 ret = 1;
  inline bool has_ret() const;
  inline void clear_ret();
  static const int kRetFieldNumber = 1;
  inline ::google::protobuf::int32 ret() const;
  inline void set_ret(::google::protobuf::int32 value);

  // required int32 seq = 2;
  inline bool has_seq() const;
  inline void clear_seq();
  static const int kSeqFieldNumber = 2;
  inline ::google::protobuf::int32 seq() const;
  inline void set_seq(::google::protobuf::int32 value);

  // required int32 operate_type = 3;
  inline bool has_operate_type() const;
  inline void clear_operate_type();
  static const int kOperateTypeFieldNumber = 3;
  inline ::google::protobuf::int32 operate_type() const;
  inline void set_operate_type(::google::protobuf::int32 value);

  // optional .db_tb_user user_info = 4;
  inline bool has_user_info() const;
  inline void clear_user_info();
  static const int kUserInfoFieldNumber = 4;
  inline const ::db_tb_user& user_info() const;
  inline ::db_tb_user* mutable_user_info();
  inline ::db_tb_user* release_user_info();
  inline void set_allocated_user_info(::db_tb_user* user_info);

  // optional .DBUserItemList user_item_list = 5;
  inline bool has_user_item_list() const;
  inline void clear_user_item_list();
  static const int kUserItemListFieldNumber = 5;
  inline const ::DBUserItemList& user_item_list() const;
  inline ::DBUserItemList* mutable_user_item_list();
  inline ::DBUserItemList* release_user_item_list();
  inline void set_allocated_user_item_list(::DBUserItemList* user_item_list);

  // @@protoc_insertion_point(class_scope:DBCommonRep)
 private:
  inline void set_has_ret();
  inline void clear_has_ret();
  inline void set_has_seq();
  inline void clear_has_seq();
  inline void set_has_operate_type();
  inline void clear_has_operate_type();
  inline void set_has_user_info();
  inline void clear_has_user_info();
  inline void set_has_user_item_list();
  inline void clear_has_user_item_list();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 ret_;
  ::google::protobuf::int32 seq_;
  ::db_tb_user* user_info_;
  ::DBUserItemList* user_item_list_;
  ::google::protobuf::int32 operate_type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_db_5fmessage_2eproto();
  friend void protobuf_AssignDesc_db_5fmessage_2eproto();
  friend void protobuf_ShutdownFile_db_5fmessage_2eproto();

  void InitAsDefaultInstance();
  static DBCommonRep* default_instance_;
};
// ===================================================================


// ===================================================================

// DBUserItem

// required int32 item_id = 1;
inline bool DBUserItem::has_item_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DBUserItem::set_has_item_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DBUserItem::clear_has_item_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DBUserItem::clear_item_id() {
  item_id_ = 0;
  clear_has_item_id();
}
inline ::google::protobuf::int32 DBUserItem::item_id() const {
  return item_id_;
}
inline void DBUserItem::set_item_id(::google::protobuf::int32 value) {
  set_has_item_id();
  item_id_ = value;
}

// required int32 item_num = 2;
inline bool DBUserItem::has_item_num() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DBUserItem::set_has_item_num() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DBUserItem::clear_has_item_num() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DBUserItem::clear_item_num() {
  item_num_ = 0;
  clear_has_item_num();
}
inline ::google::protobuf::int32 DBUserItem::item_num() const {
  return item_num_;
}
inline void DBUserItem::set_item_num(::google::protobuf::int32 value) {
  set_has_item_num();
  item_num_ = value;
}

// -------------------------------------------------------------------

// DBUserItemList

// repeated .DBUserItem item_list = 1;
inline int DBUserItemList::item_list_size() const {
  return item_list_.size();
}
inline void DBUserItemList::clear_item_list() {
  item_list_.Clear();
}
inline const ::DBUserItem& DBUserItemList::item_list(int index) const {
  return item_list_.Get(index);
}
inline ::DBUserItem* DBUserItemList::mutable_item_list(int index) {
  return item_list_.Mutable(index);
}
inline ::DBUserItem* DBUserItemList::add_item_list() {
  return item_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DBUserItem >&
DBUserItemList::item_list() const {
  return item_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::DBUserItem >*
DBUserItemList::mutable_item_list() {
  return &item_list_;
}

// -------------------------------------------------------------------

// DBCommonReq

// required int32 seq = 1;
inline bool DBCommonReq::has_seq() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DBCommonReq::set_has_seq() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DBCommonReq::clear_has_seq() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DBCommonReq::clear_seq() {
  seq_ = 0;
  clear_has_seq();
}
inline ::google::protobuf::int32 DBCommonReq::seq() const {
  return seq_;
}
inline void DBCommonReq::set_seq(::google::protobuf::int32 value) {
  set_has_seq();
  seq_ = value;
}

// required int32 operate_type = 2;
inline bool DBCommonReq::has_operate_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DBCommonReq::set_has_operate_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DBCommonReq::clear_has_operate_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DBCommonReq::clear_operate_type() {
  operate_type_ = 0;
  clear_has_operate_type();
}
inline ::google::protobuf::int32 DBCommonReq::operate_type() const {
  return operate_type_;
}
inline void DBCommonReq::set_operate_type(::google::protobuf::int32 value) {
  set_has_operate_type();
  operate_type_ = value;
}

// required string operate_string = 3;
inline bool DBCommonReq::has_operate_string() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DBCommonReq::set_has_operate_string() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DBCommonReq::clear_has_operate_string() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DBCommonReq::clear_operate_string() {
  if (operate_string_ != &::google::protobuf::internal::kEmptyString) {
    operate_string_->clear();
  }
  clear_has_operate_string();
}
inline const ::std::string& DBCommonReq::operate_string() const {
  return *operate_string_;
}
inline void DBCommonReq::set_operate_string(const ::std::string& value) {
  set_has_operate_string();
  if (operate_string_ == &::google::protobuf::internal::kEmptyString) {
    operate_string_ = new ::std::string;
  }
  operate_string_->assign(value);
}
inline void DBCommonReq::set_operate_string(const char* value) {
  set_has_operate_string();
  if (operate_string_ == &::google::protobuf::internal::kEmptyString) {
    operate_string_ = new ::std::string;
  }
  operate_string_->assign(value);
}
inline void DBCommonReq::set_operate_string(const char* value, size_t size) {
  set_has_operate_string();
  if (operate_string_ == &::google::protobuf::internal::kEmptyString) {
    operate_string_ = new ::std::string;
  }
  operate_string_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* DBCommonReq::mutable_operate_string() {
  set_has_operate_string();
  if (operate_string_ == &::google::protobuf::internal::kEmptyString) {
    operate_string_ = new ::std::string;
  }
  return operate_string_;
}
inline ::std::string* DBCommonReq::release_operate_string() {
  clear_has_operate_string();
  if (operate_string_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = operate_string_;
    operate_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void DBCommonReq::set_allocated_operate_string(::std::string* operate_string) {
  if (operate_string_ != &::google::protobuf::internal::kEmptyString) {
    delete operate_string_;
  }
  if (operate_string) {
    set_has_operate_string();
    operate_string_ = operate_string;
  } else {
    clear_has_operate_string();
    operate_string_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// DBCommonRep

// required int32 ret = 1;
inline bool DBCommonRep::has_ret() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DBCommonRep::set_has_ret() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DBCommonRep::clear_has_ret() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DBCommonRep::clear_ret() {
  ret_ = 0;
  clear_has_ret();
}
inline ::google::protobuf::int32 DBCommonRep::ret() const {
  return ret_;
}
inline void DBCommonRep::set_ret(::google::protobuf::int32 value) {
  set_has_ret();
  ret_ = value;
}

// required int32 seq = 2;
inline bool DBCommonRep::has_seq() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DBCommonRep::set_has_seq() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DBCommonRep::clear_has_seq() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DBCommonRep::clear_seq() {
  seq_ = 0;
  clear_has_seq();
}
inline ::google::protobuf::int32 DBCommonRep::seq() const {
  return seq_;
}
inline void DBCommonRep::set_seq(::google::protobuf::int32 value) {
  set_has_seq();
  seq_ = value;
}

// required int32 operate_type = 3;
inline bool DBCommonRep::has_operate_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DBCommonRep::set_has_operate_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DBCommonRep::clear_has_operate_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DBCommonRep::clear_operate_type() {
  operate_type_ = 0;
  clear_has_operate_type();
}
inline ::google::protobuf::int32 DBCommonRep::operate_type() const {
  return operate_type_;
}
inline void DBCommonRep::set_operate_type(::google::protobuf::int32 value) {
  set_has_operate_type();
  operate_type_ = value;
}

// optional .db_tb_user user_info = 4;
inline bool DBCommonRep::has_user_info() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DBCommonRep::set_has_user_info() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DBCommonRep::clear_has_user_info() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DBCommonRep::clear_user_info() {
  if (user_info_ != NULL) user_info_->::db_tb_user::Clear();
  clear_has_user_info();
}
inline const ::db_tb_user& DBCommonRep::user_info() const {
  return user_info_ != NULL ? *user_info_ : *default_instance_->user_info_;
}
inline ::db_tb_user* DBCommonRep::mutable_user_info() {
  set_has_user_info();
  if (user_info_ == NULL) user_info_ = new ::db_tb_user;
  return user_info_;
}
inline ::db_tb_user* DBCommonRep::release_user_info() {
  clear_has_user_info();
  ::db_tb_user* temp = user_info_;
  user_info_ = NULL;
  return temp;
}
inline void DBCommonRep::set_allocated_user_info(::db_tb_user* user_info) {
  delete user_info_;
  user_info_ = user_info;
  if (user_info) {
    set_has_user_info();
  } else {
    clear_has_user_info();
  }
}

// optional .DBUserItemList user_item_list = 5;
inline bool DBCommonRep::has_user_item_list() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DBCommonRep::set_has_user_item_list() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DBCommonRep::clear_has_user_item_list() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DBCommonRep::clear_user_item_list() {
  if (user_item_list_ != NULL) user_item_list_->::DBUserItemList::Clear();
  clear_has_user_item_list();
}
inline const ::DBUserItemList& DBCommonRep::user_item_list() const {
  return user_item_list_ != NULL ? *user_item_list_ : *default_instance_->user_item_list_;
}
inline ::DBUserItemList* DBCommonRep::mutable_user_item_list() {
  set_has_user_item_list();
  if (user_item_list_ == NULL) user_item_list_ = new ::DBUserItemList;
  return user_item_list_;
}
inline ::DBUserItemList* DBCommonRep::release_user_item_list() {
  clear_has_user_item_list();
  ::DBUserItemList* temp = user_item_list_;
  user_item_list_ = NULL;
  return temp;
}
inline void DBCommonRep::set_allocated_user_item_list(::DBUserItemList* user_item_list) {
  delete user_item_list_;
  user_item_list_ = user_item_list;
  if (user_item_list) {
    set_has_user_item_list();
  } else {
    clear_has_user_item_list();
  }
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DbOperateType>() {
  return ::DbOperateType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_db_5fmessage_2eproto__INCLUDED
