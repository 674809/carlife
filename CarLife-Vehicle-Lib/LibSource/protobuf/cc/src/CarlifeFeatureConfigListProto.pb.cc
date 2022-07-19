// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeFeatureConfigListProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CarlifeFeatureConfigListProto.pb.h"

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

const ::google::protobuf::Descriptor* CarlifeFeatureConfigList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CarlifeFeatureConfigList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CarlifeFeatureConfigListProto_2eproto() {
  protobuf_AddDesc_CarlifeFeatureConfigListProto_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CarlifeFeatureConfigListProto.proto");
  GOOGLE_CHECK(file != NULL);
  CarlifeFeatureConfigList_descriptor_ = file->message_type(0);
  static const int CarlifeFeatureConfigList_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeFeatureConfigList, cnt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeFeatureConfigList, featureconfig_),
  };
  CarlifeFeatureConfigList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CarlifeFeatureConfigList_descriptor_,
      CarlifeFeatureConfigList::default_instance_,
      CarlifeFeatureConfigList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeFeatureConfigList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CarlifeFeatureConfigList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CarlifeFeatureConfigList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CarlifeFeatureConfigListProto_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CarlifeFeatureConfigList_descriptor_, &CarlifeFeatureConfigList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CarlifeFeatureConfigListProto_2eproto() {
  delete CarlifeFeatureConfigList::default_instance_;
  delete CarlifeFeatureConfigList_reflection_;
}

void protobuf_AddDesc_CarlifeFeatureConfigListProto_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com::baidu::carlife::protobuf::protobuf_AddDesc_CarlifeFeatureConfigProto_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n#CarlifeFeatureConfigListProto.proto\022\032c"
    "om.baidu.carlife.protobuf\032\037CarlifeFeatur"
    "eConfigProto.proto\"p\n\030CarlifeFeatureConf"
    "igList\022\013\n\003cnt\030\001 \002(\005\022G\n\rfeatureConfig\030\002 \003"
    "(\01320.com.baidu.carlife.protobuf.CarlifeF"
    "eatureConfig", 212);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CarlifeFeatureConfigListProto.proto", &protobuf_RegisterTypes);
  CarlifeFeatureConfigList::default_instance_ = new CarlifeFeatureConfigList();
  CarlifeFeatureConfigList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CarlifeFeatureConfigListProto_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CarlifeFeatureConfigListProto_2eproto {
  StaticDescriptorInitializer_CarlifeFeatureConfigListProto_2eproto() {
    protobuf_AddDesc_CarlifeFeatureConfigListProto_2eproto();
  }
} static_descriptor_initializer_CarlifeFeatureConfigListProto_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CarlifeFeatureConfigList::kCntFieldNumber;
const int CarlifeFeatureConfigList::kFeatureConfigFieldNumber;
#endif  // !_MSC_VER

CarlifeFeatureConfigList::CarlifeFeatureConfigList()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CarlifeFeatureConfigList::InitAsDefaultInstance() {
}

CarlifeFeatureConfigList::CarlifeFeatureConfigList(const CarlifeFeatureConfigList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CarlifeFeatureConfigList::SharedCtor() {
  _cached_size_ = 0;
  cnt_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CarlifeFeatureConfigList::~CarlifeFeatureConfigList() {
  SharedDtor();
}

void CarlifeFeatureConfigList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CarlifeFeatureConfigList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CarlifeFeatureConfigList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CarlifeFeatureConfigList_descriptor_;
}

const CarlifeFeatureConfigList& CarlifeFeatureConfigList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CarlifeFeatureConfigListProto_2eproto();
  return *default_instance_;
}

CarlifeFeatureConfigList* CarlifeFeatureConfigList::default_instance_ = NULL;

CarlifeFeatureConfigList* CarlifeFeatureConfigList::New() const {
  return new CarlifeFeatureConfigList;
}

void CarlifeFeatureConfigList::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    cnt_ = 0;
  }
  featureconfig_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CarlifeFeatureConfigList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 cnt = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cnt_)));
          set_has_cnt();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_featureConfig;
        break;
      }

      // repeated .com.baidu.carlife.protobuf.CarlifeFeatureConfig featureConfig = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_featureConfig:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_featureconfig()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_featureConfig;
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

void CarlifeFeatureConfigList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 cnt = 1;
  if (has_cnt()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->cnt(), output);
  }

  // repeated .com.baidu.carlife.protobuf.CarlifeFeatureConfig featureConfig = 2;
  for (int i = 0; i < this->featureconfig_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->featureconfig(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CarlifeFeatureConfigList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 cnt = 1;
  if (has_cnt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->cnt(), target);
  }

  // repeated .com.baidu.carlife.protobuf.CarlifeFeatureConfig featureConfig = 2;
  for (int i = 0; i < this->featureconfig_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->featureconfig(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CarlifeFeatureConfigList::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 cnt = 1;
    if (has_cnt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cnt());
    }

  }
  // repeated .com.baidu.carlife.protobuf.CarlifeFeatureConfig featureConfig = 2;
  total_size += 1 * this->featureconfig_size();
  for (int i = 0; i < this->featureconfig_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->featureconfig(i));
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

void CarlifeFeatureConfigList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CarlifeFeatureConfigList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CarlifeFeatureConfigList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CarlifeFeatureConfigList::MergeFrom(const CarlifeFeatureConfigList& from) {
  GOOGLE_CHECK_NE(&from, this);
  featureconfig_.MergeFrom(from.featureconfig_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cnt()) {
      set_cnt(from.cnt());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CarlifeFeatureConfigList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CarlifeFeatureConfigList::CopyFrom(const CarlifeFeatureConfigList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CarlifeFeatureConfigList::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < featureconfig_size(); i++) {
    if (!this->featureconfig(i).IsInitialized()) return false;
  }
  return true;
}

void CarlifeFeatureConfigList::Swap(CarlifeFeatureConfigList* other) {
  if (other != this) {
    std::swap(cnt_, other->cnt_);
    featureconfig_.Swap(&other->featureconfig_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CarlifeFeatureConfigList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CarlifeFeatureConfigList_descriptor_;
  metadata.reflection = CarlifeFeatureConfigList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

// @@protoc_insertion_point(global_scope)
