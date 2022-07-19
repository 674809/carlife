// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeContactsProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CarlifeContactsProto.pb.h"

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

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* CarlifeContacts_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CarlifeContacts_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CarlifeContactsProto_2eproto() {
  protobuf_AddDesc_CarlifeContactsProto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CarlifeContactsProto.proto");
  GOOGLE_CHECK(file != NULL);
  CarlifeContacts_descriptor_ = file->message_type(0);
  static const int CarlifeContacts_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeContacts, cid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeContacts, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeContacts, number_),
  };
  CarlifeContacts_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CarlifeContacts_descriptor_,
      CarlifeContacts::default_instance_,
      CarlifeContacts_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeContacts, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeContacts, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CarlifeContacts));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CarlifeContactsProto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CarlifeContacts_descriptor_, &CarlifeContacts::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CarlifeContactsProto_2eproto() {
  delete CarlifeContacts::default_instance_;
  delete CarlifeContacts_reflection_;
}

void protobuf_AddDesc_CarlifeContactsProto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\032CarlifeContactsProto.proto\022\032com.baidu."
    "carlife.protobuf\"<\n\017CarlifeContacts\022\013\n\003c"
    "id\030\001 \002(\005\022\014\n\004name\030\002 \002(\t\022\016\n\006number\030\003 \002(\t", 118);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CarlifeContactsProto.proto", &protobuf_RegisterTypes);
  CarlifeContacts::default_instance_ = new CarlifeContacts();
  CarlifeContacts::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CarlifeContactsProto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CarlifeContactsProto_2eproto {
  StaticDescriptorInitializer_CarlifeContactsProto_2eproto() {
    protobuf_AddDesc_CarlifeContactsProto_2eproto();
  }
} static_descriptor_initializer_CarlifeContactsProto_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CarlifeContacts::kCidFieldNumber;
const int CarlifeContacts::kNameFieldNumber;
const int CarlifeContacts::kNumberFieldNumber;
#endif  // !_MSC_VER

CarlifeContacts::CarlifeContacts()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CarlifeContacts::InitAsDefaultInstance() {
}

CarlifeContacts::CarlifeContacts(const CarlifeContacts& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CarlifeContacts::SharedCtor() {
  _cached_size_ = 0;
  cid_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CarlifeContacts::~CarlifeContacts() {
  SharedDtor();
}

void CarlifeContacts::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    delete number_;
  }
  if (this != default_instance_) {
  }
}

void CarlifeContacts::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CarlifeContacts::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CarlifeContacts_descriptor_;
}

const CarlifeContacts& CarlifeContacts::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CarlifeContactsProto_2eproto();
  return *default_instance_;
}

CarlifeContacts* CarlifeContacts::default_instance_ = NULL;

CarlifeContacts* CarlifeContacts::New() const {
  return new CarlifeContacts;
}

void CarlifeContacts::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cid_ = 0;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    if (has_number()) {
      if (number_ != &::google::protobuf::internal::kEmptyString) {
        number_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CarlifeContacts::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 cid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cid_)));
          set_has_cid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_number;
        break;
      }

      // required string number = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_number:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_number()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->number().data(), this->number().length(),
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

void CarlifeContacts::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 cid = 1;
  if (has_cid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->cid(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->name(), output);
  }

  // required string number = 3;
  if (has_number()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->number().data(), this->number().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->number(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CarlifeContacts::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 cid = 1;
  if (has_cid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->cid(), target);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // required string number = 3;
  if (has_number()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->number().data(), this->number().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->number(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CarlifeContacts::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 cid = 1;
    if (has_cid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cid());
    }

    // required string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required string number = 3;
    if (has_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->number());
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

void CarlifeContacts::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CarlifeContacts* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CarlifeContacts*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CarlifeContacts::MergeFrom(const CarlifeContacts& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cid()) {
      set_cid(from.cid());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_number()) {
      set_number(from.number());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CarlifeContacts::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CarlifeContacts::CopyFrom(const CarlifeContacts& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CarlifeContacts::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void CarlifeContacts::Swap(CarlifeContacts* other) {
  if (other != this) {
    std::swap(cid_, other->cid_);
    std::swap(name_, other->name_);
    std::swap(number_, other->number_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CarlifeContacts::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CarlifeContacts_descriptor_;
  metadata.reflection = CarlifeContacts_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

// @@protoc_insertion_point(global_scope)
