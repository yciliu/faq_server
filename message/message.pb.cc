// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* ClientHeartBeatRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClientHeartBeatRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* ClientHeartBeatResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClientHeartBeatResponse_reflection_ = NULL;
const ::google::protobuf::Descriptor* ClientLoginRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClientLoginRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* ClientLoginResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ClientLoginResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MSG_ACTION_TYPE_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* MessageType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DbMessageType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_2eproto() {
  protobuf_AddDesc_message_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message.proto");
  GOOGLE_CHECK(file != NULL);
  ClientHeartBeatRequest_descriptor_ = file->message_type(0);
  static const int ClientHeartBeatRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientHeartBeatRequest, client_time_),
  };
  ClientHeartBeatRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClientHeartBeatRequest_descriptor_,
      ClientHeartBeatRequest::default_instance_,
      ClientHeartBeatRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientHeartBeatRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientHeartBeatRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClientHeartBeatRequest));
  ClientHeartBeatResponse_descriptor_ = file->message_type(1);
  static const int ClientHeartBeatResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientHeartBeatResponse, server_time_),
  };
  ClientHeartBeatResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClientHeartBeatResponse_descriptor_,
      ClientHeartBeatResponse::default_instance_,
      ClientHeartBeatResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientHeartBeatResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientHeartBeatResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClientHeartBeatResponse));
  ClientLoginRequest_descriptor_ = file->message_type(2);
  static const int ClientLoginRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientLoginRequest, role_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientLoginRequest, token_),
  };
  ClientLoginRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClientLoginRequest_descriptor_,
      ClientLoginRequest::default_instance_,
      ClientLoginRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientLoginRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientLoginRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClientLoginRequest));
  ClientLoginResponse_descriptor_ = file->message_type(3);
  static const int ClientLoginResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientLoginResponse, ret_),
  };
  ClientLoginResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ClientLoginResponse_descriptor_,
      ClientLoginResponse::default_instance_,
      ClientLoginResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientLoginResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ClientLoginResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ClientLoginResponse));
  MSG_ACTION_TYPE_descriptor_ = file->enum_type(0);
  MessageType_descriptor_ = file->enum_type(1);
  DbMessageType_descriptor_ = file->enum_type(2);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClientHeartBeatRequest_descriptor_, &ClientHeartBeatRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClientHeartBeatResponse_descriptor_, &ClientHeartBeatResponse::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClientLoginRequest_descriptor_, &ClientLoginRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ClientLoginResponse_descriptor_, &ClientLoginResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_2eproto() {
  delete ClientHeartBeatRequest::default_instance_;
  delete ClientHeartBeatRequest_reflection_;
  delete ClientHeartBeatResponse::default_instance_;
  delete ClientHeartBeatResponse_reflection_;
  delete ClientLoginRequest::default_instance_;
  delete ClientLoginRequest_reflection_;
  delete ClientLoginResponse::default_instance_;
  delete ClientLoginResponse_reflection_;
}

void protobuf_AddDesc_message_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_db_5fmessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rmessage.proto\032\020db_message.proto\"-\n\026Cli"
    "entHeartBeatRequest\022\023\n\013client_time\030\001 \002(\005"
    "\".\n\027ClientHeartBeatResponse\022\023\n\013server_ti"
    "me\030\001 \002(\005\"4\n\022ClientLoginRequest\022\017\n\007role_i"
    "d\030\001 \002(\005\022\r\n\005token\030\002 \002(\t\"\"\n\023ClientLoginRes"
    "ponse\022\013\n\003ret\030\001 \002(\005*D\n\017MSG_ACTION_TYPE\022\017\n"
    "\013MSG_REQUEST\020\000\022\020\n\014MSG_RESPONSE\020\001\022\016\n\nMSG_"
    "NOTIFY\020\002*q\n\013MessageType\022\032\n\026MSG_SOCCER_PL"
    "AYER_INFO\020\001\022\022\n\016MSG_HEART_BEAT\020\002\022\024\n\020MSG_C"
    "LIENT_LOGIN\020\003\022\034\n\030MSG_GATE_SERVER_REGISTE"
    "R\020\004*#\n\rDbMessageType\022\022\n\rMSG_DB_COMMON\020\220N", 440);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message.proto", &protobuf_RegisterTypes);
  ClientHeartBeatRequest::default_instance_ = new ClientHeartBeatRequest();
  ClientHeartBeatResponse::default_instance_ = new ClientHeartBeatResponse();
  ClientLoginRequest::default_instance_ = new ClientLoginRequest();
  ClientLoginResponse::default_instance_ = new ClientLoginResponse();
  ClientHeartBeatRequest::default_instance_->InitAsDefaultInstance();
  ClientHeartBeatResponse::default_instance_->InitAsDefaultInstance();
  ClientLoginRequest::default_instance_->InitAsDefaultInstance();
  ClientLoginResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_2eproto {
  StaticDescriptorInitializer_message_2eproto() {
    protobuf_AddDesc_message_2eproto();
  }
} static_descriptor_initializer_message_2eproto_;
const ::google::protobuf::EnumDescriptor* MSG_ACTION_TYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_ACTION_TYPE_descriptor_;
}
bool MSG_ACTION_TYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* MessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageType_descriptor_;
}
bool MessageType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DbMessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DbMessageType_descriptor_;
}
bool DbMessageType_IsValid(int value) {
  switch(value) {
    case 10000:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int ClientHeartBeatRequest::kClientTimeFieldNumber;
#endif  // !_MSC_VER

ClientHeartBeatRequest::ClientHeartBeatRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ClientHeartBeatRequest::InitAsDefaultInstance() {
}

ClientHeartBeatRequest::ClientHeartBeatRequest(const ClientHeartBeatRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ClientHeartBeatRequest::SharedCtor() {
  _cached_size_ = 0;
  client_time_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientHeartBeatRequest::~ClientHeartBeatRequest() {
  SharedDtor();
}

void ClientHeartBeatRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ClientHeartBeatRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClientHeartBeatRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientHeartBeatRequest_descriptor_;
}

const ClientHeartBeatRequest& ClientHeartBeatRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_2eproto();
  return *default_instance_;
}

ClientHeartBeatRequest* ClientHeartBeatRequest::default_instance_ = NULL;

ClientHeartBeatRequest* ClientHeartBeatRequest::New() const {
  return new ClientHeartBeatRequest;
}

void ClientHeartBeatRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    client_time_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClientHeartBeatRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 client_time = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &client_time_)));
          set_has_client_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ClientHeartBeatRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 client_time = 1;
  if (has_client_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->client_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ClientHeartBeatRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 client_time = 1;
  if (has_client_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->client_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ClientHeartBeatRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 client_time = 1;
    if (has_client_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->client_time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientHeartBeatRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClientHeartBeatRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClientHeartBeatRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClientHeartBeatRequest::MergeFrom(const ClientHeartBeatRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_client_time()) {
      set_client_time(from.client_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClientHeartBeatRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClientHeartBeatRequest::CopyFrom(const ClientHeartBeatRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientHeartBeatRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ClientHeartBeatRequest::Swap(ClientHeartBeatRequest* other) {
  if (other != this) {
    std::swap(client_time_, other->client_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClientHeartBeatRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClientHeartBeatRequest_descriptor_;
  metadata.reflection = ClientHeartBeatRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ClientHeartBeatResponse::kServerTimeFieldNumber;
#endif  // !_MSC_VER

ClientHeartBeatResponse::ClientHeartBeatResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ClientHeartBeatResponse::InitAsDefaultInstance() {
}

ClientHeartBeatResponse::ClientHeartBeatResponse(const ClientHeartBeatResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ClientHeartBeatResponse::SharedCtor() {
  _cached_size_ = 0;
  server_time_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientHeartBeatResponse::~ClientHeartBeatResponse() {
  SharedDtor();
}

void ClientHeartBeatResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ClientHeartBeatResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClientHeartBeatResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientHeartBeatResponse_descriptor_;
}

const ClientHeartBeatResponse& ClientHeartBeatResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_2eproto();
  return *default_instance_;
}

ClientHeartBeatResponse* ClientHeartBeatResponse::default_instance_ = NULL;

ClientHeartBeatResponse* ClientHeartBeatResponse::New() const {
  return new ClientHeartBeatResponse;
}

void ClientHeartBeatResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    server_time_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClientHeartBeatResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 server_time = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &server_time_)));
          set_has_server_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ClientHeartBeatResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 server_time = 1;
  if (has_server_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->server_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ClientHeartBeatResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 server_time = 1;
  if (has_server_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->server_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ClientHeartBeatResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 server_time = 1;
    if (has_server_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->server_time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientHeartBeatResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClientHeartBeatResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClientHeartBeatResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClientHeartBeatResponse::MergeFrom(const ClientHeartBeatResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_server_time()) {
      set_server_time(from.server_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClientHeartBeatResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClientHeartBeatResponse::CopyFrom(const ClientHeartBeatResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientHeartBeatResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ClientHeartBeatResponse::Swap(ClientHeartBeatResponse* other) {
  if (other != this) {
    std::swap(server_time_, other->server_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClientHeartBeatResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClientHeartBeatResponse_descriptor_;
  metadata.reflection = ClientHeartBeatResponse_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ClientLoginRequest::kRoleIdFieldNumber;
const int ClientLoginRequest::kTokenFieldNumber;
#endif  // !_MSC_VER

ClientLoginRequest::ClientLoginRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ClientLoginRequest::InitAsDefaultInstance() {
}

ClientLoginRequest::ClientLoginRequest(const ClientLoginRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ClientLoginRequest::SharedCtor() {
  _cached_size_ = 0;
  role_id_ = 0;
  token_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientLoginRequest::~ClientLoginRequest() {
  SharedDtor();
}

void ClientLoginRequest::SharedDtor() {
  if (token_ != &::google::protobuf::internal::kEmptyString) {
    delete token_;
  }
  if (this != default_instance_) {
  }
}

void ClientLoginRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClientLoginRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientLoginRequest_descriptor_;
}

const ClientLoginRequest& ClientLoginRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_2eproto();
  return *default_instance_;
}

ClientLoginRequest* ClientLoginRequest::default_instance_ = NULL;

ClientLoginRequest* ClientLoginRequest::New() const {
  return new ClientLoginRequest;
}

void ClientLoginRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    role_id_ = 0;
    if (has_token()) {
      if (token_ != &::google::protobuf::internal::kEmptyString) {
        token_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClientLoginRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 role_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &role_id_)));
          set_has_role_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_token;
        break;
      }

      // required string token = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_token:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->token().data(), this->token().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ClientLoginRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 role_id = 1;
  if (has_role_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->role_id(), output);
  }

  // required string token = 2;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->token(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ClientLoginRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 role_id = 1;
  if (has_role_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->role_id(), target);
  }

  // required string token = 2;
  if (has_token()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->token(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ClientLoginRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 role_id = 1;
    if (has_role_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->role_id());
    }

    // required string token = 2;
    if (has_token()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->token());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientLoginRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClientLoginRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClientLoginRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClientLoginRequest::MergeFrom(const ClientLoginRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_role_id()) {
      set_role_id(from.role_id());
    }
    if (from.has_token()) {
      set_token(from.token());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClientLoginRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClientLoginRequest::CopyFrom(const ClientLoginRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientLoginRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void ClientLoginRequest::Swap(ClientLoginRequest* other) {
  if (other != this) {
    std::swap(role_id_, other->role_id_);
    std::swap(token_, other->token_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClientLoginRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClientLoginRequest_descriptor_;
  metadata.reflection = ClientLoginRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ClientLoginResponse::kRetFieldNumber;
#endif  // !_MSC_VER

ClientLoginResponse::ClientLoginResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ClientLoginResponse::InitAsDefaultInstance() {
}

ClientLoginResponse::ClientLoginResponse(const ClientLoginResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ClientLoginResponse::SharedCtor() {
  _cached_size_ = 0;
  ret_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ClientLoginResponse::~ClientLoginResponse() {
  SharedDtor();
}

void ClientLoginResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ClientLoginResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ClientLoginResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ClientLoginResponse_descriptor_;
}

const ClientLoginResponse& ClientLoginResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_2eproto();
  return *default_instance_;
}

ClientLoginResponse* ClientLoginResponse::default_instance_ = NULL;

ClientLoginResponse* ClientLoginResponse::New() const {
  return new ClientLoginResponse;
}

void ClientLoginResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ret_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ClientLoginResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 ret = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ret_)));
          set_has_ret();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ClientLoginResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 ret = 1;
  if (has_ret()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->ret(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ClientLoginResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 ret = 1;
  if (has_ret()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->ret(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ClientLoginResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 ret = 1;
    if (has_ret()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ret());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ClientLoginResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ClientLoginResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ClientLoginResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ClientLoginResponse::MergeFrom(const ClientLoginResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ret()) {
      set_ret(from.ret());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ClientLoginResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ClientLoginResponse::CopyFrom(const ClientLoginResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ClientLoginResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void ClientLoginResponse::Swap(ClientLoginResponse* other) {
  if (other != this) {
    std::swap(ret_, other->ret_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ClientLoginResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ClientLoginResponse_descriptor_;
  metadata.reflection = ClientLoginResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
