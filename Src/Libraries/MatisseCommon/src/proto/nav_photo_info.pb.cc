// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nav_photo_info.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "nav_photo_info.pb.h"

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

const ::google::protobuf::Descriptor* NavPhotoInfoMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  NavPhotoInfoMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* NavPhotoInfoMessage_TimeStamp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  NavPhotoInfoMessage_TimeStamp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_nav_5fphoto_5finfo_2eproto() {
  protobuf_AddDesc_nav_5fphoto_5finfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "nav_photo_info.proto");
  GOOGLE_CHECK(file != NULL);
  NavPhotoInfoMessage_descriptor_ = file->message_type(0);
  static const int NavPhotoInfoMessage_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, latitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, longitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, yaw_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, roll_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, pitch_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, depth_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, altitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, photopath_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, photostamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, pan_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, tilt_),
  };
  NavPhotoInfoMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      NavPhotoInfoMessage_descriptor_,
      NavPhotoInfoMessage::default_instance_,
      NavPhotoInfoMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(NavPhotoInfoMessage));
  NavPhotoInfoMessage_TimeStamp_descriptor_ = NavPhotoInfoMessage_descriptor_->nested_type(0);
  static const int NavPhotoInfoMessage_TimeStamp_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage_TimeStamp, sec_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage_TimeStamp, nsec_),
  };
  NavPhotoInfoMessage_TimeStamp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      NavPhotoInfoMessage_TimeStamp_descriptor_,
      NavPhotoInfoMessage_TimeStamp::default_instance_,
      NavPhotoInfoMessage_TimeStamp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage_TimeStamp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NavPhotoInfoMessage_TimeStamp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(NavPhotoInfoMessage_TimeStamp));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_nav_5fphoto_5finfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    NavPhotoInfoMessage_descriptor_, &NavPhotoInfoMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    NavPhotoInfoMessage_TimeStamp_descriptor_, &NavPhotoInfoMessage_TimeStamp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_nav_5fphoto_5finfo_2eproto() {
  delete NavPhotoInfoMessage::default_instance_;
  delete NavPhotoInfoMessage_reflection_;
  delete NavPhotoInfoMessage_TimeStamp::default_instance_;
  delete NavPhotoInfoMessage_TimeStamp_reflection_;
}

void protobuf_AddDesc_nav_5fphoto_5finfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024nav_photo_info.proto\"\217\002\n\023NavPhotoInfoM"
    "essage\022\020\n\010latitude\030\001 \002(\001\022\021\n\tlongitude\030\002 "
    "\002(\001\022\013\n\003yaw\030\003 \002(\001\022\014\n\004roll\030\004 \002(\001\022\r\n\005pitch\030"
    "\005 \002(\001\022\r\n\005depth\030\006 \002(\001\022\020\n\010altitude\030\007 \002(\001\022\021"
    "\n\tphotopath\030\010 \001(\t\0222\n\nphotostamp\030\t \001(\0132\036."
    "NavPhotoInfoMessage.TimeStamp\022\013\n\003pan\030\n \001"
    "(\001\022\014\n\004tilt\030\013 \001(\001\032&\n\tTimeStamp\022\013\n\003sec\030\001 \002"
    "(\r\022\014\n\004nsec\030\002 \002(\r", 296);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "nav_photo_info.proto", &protobuf_RegisterTypes);
  NavPhotoInfoMessage::default_instance_ = new NavPhotoInfoMessage();
  NavPhotoInfoMessage_TimeStamp::default_instance_ = new NavPhotoInfoMessage_TimeStamp();
  NavPhotoInfoMessage::default_instance_->InitAsDefaultInstance();
  NavPhotoInfoMessage_TimeStamp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_nav_5fphoto_5finfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_nav_5fphoto_5finfo_2eproto {
  StaticDescriptorInitializer_nav_5fphoto_5finfo_2eproto() {
    protobuf_AddDesc_nav_5fphoto_5finfo_2eproto();
  }
} static_descriptor_initializer_nav_5fphoto_5finfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int NavPhotoInfoMessage_TimeStamp::kSecFieldNumber;
const int NavPhotoInfoMessage_TimeStamp::kNsecFieldNumber;
#endif  // !_MSC_VER

NavPhotoInfoMessage_TimeStamp::NavPhotoInfoMessage_TimeStamp()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:NavPhotoInfoMessage.TimeStamp)
}

void NavPhotoInfoMessage_TimeStamp::InitAsDefaultInstance() {
}

NavPhotoInfoMessage_TimeStamp::NavPhotoInfoMessage_TimeStamp(const NavPhotoInfoMessage_TimeStamp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:NavPhotoInfoMessage.TimeStamp)
}

void NavPhotoInfoMessage_TimeStamp::SharedCtor() {
  _cached_size_ = 0;
  sec_ = 0u;
  nsec_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NavPhotoInfoMessage_TimeStamp::~NavPhotoInfoMessage_TimeStamp() {
  // @@protoc_insertion_point(destructor:NavPhotoInfoMessage.TimeStamp)
  SharedDtor();
}

void NavPhotoInfoMessage_TimeStamp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void NavPhotoInfoMessage_TimeStamp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NavPhotoInfoMessage_TimeStamp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NavPhotoInfoMessage_TimeStamp_descriptor_;
}

const NavPhotoInfoMessage_TimeStamp& NavPhotoInfoMessage_TimeStamp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_nav_5fphoto_5finfo_2eproto();
  return *default_instance_;
}

NavPhotoInfoMessage_TimeStamp* NavPhotoInfoMessage_TimeStamp::default_instance_ = NULL;

NavPhotoInfoMessage_TimeStamp* NavPhotoInfoMessage_TimeStamp::New() const {
  return new NavPhotoInfoMessage_TimeStamp;
}

void NavPhotoInfoMessage_TimeStamp::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<NavPhotoInfoMessage_TimeStamp*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(sec_, nsec_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool NavPhotoInfoMessage_TimeStamp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:NavPhotoInfoMessage.TimeStamp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 sec = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sec_)));
          set_has_sec();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_nsec;
        break;
      }

      // required uint32 nsec = 2;
      case 2: {
        if (tag == 16) {
         parse_nsec:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &nsec_)));
          set_has_nsec();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:NavPhotoInfoMessage.TimeStamp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:NavPhotoInfoMessage.TimeStamp)
  return false;
#undef DO_
}

void NavPhotoInfoMessage_TimeStamp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:NavPhotoInfoMessage.TimeStamp)
  // required uint32 sec = 1;
  if (has_sec()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->sec(), output);
  }

  // required uint32 nsec = 2;
  if (has_nsec()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->nsec(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:NavPhotoInfoMessage.TimeStamp)
}

::google::protobuf::uint8* NavPhotoInfoMessage_TimeStamp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:NavPhotoInfoMessage.TimeStamp)
  // required uint32 sec = 1;
  if (has_sec()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->sec(), target);
  }

  // required uint32 nsec = 2;
  if (has_nsec()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->nsec(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:NavPhotoInfoMessage.TimeStamp)
  return target;
}

int NavPhotoInfoMessage_TimeStamp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 sec = 1;
    if (has_sec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sec());
    }

    // required uint32 nsec = 2;
    if (has_nsec()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->nsec());
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

void NavPhotoInfoMessage_TimeStamp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const NavPhotoInfoMessage_TimeStamp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const NavPhotoInfoMessage_TimeStamp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void NavPhotoInfoMessage_TimeStamp::MergeFrom(const NavPhotoInfoMessage_TimeStamp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_sec()) {
      set_sec(from.sec());
    }
    if (from.has_nsec()) {
      set_nsec(from.nsec());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void NavPhotoInfoMessage_TimeStamp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavPhotoInfoMessage_TimeStamp::CopyFrom(const NavPhotoInfoMessage_TimeStamp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavPhotoInfoMessage_TimeStamp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void NavPhotoInfoMessage_TimeStamp::Swap(NavPhotoInfoMessage_TimeStamp* other) {
  if (other != this) {
    std::swap(sec_, other->sec_);
    std::swap(nsec_, other->nsec_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata NavPhotoInfoMessage_TimeStamp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = NavPhotoInfoMessage_TimeStamp_descriptor_;
  metadata.reflection = NavPhotoInfoMessage_TimeStamp_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int NavPhotoInfoMessage::kLatitudeFieldNumber;
const int NavPhotoInfoMessage::kLongitudeFieldNumber;
const int NavPhotoInfoMessage::kYawFieldNumber;
const int NavPhotoInfoMessage::kRollFieldNumber;
const int NavPhotoInfoMessage::kPitchFieldNumber;
const int NavPhotoInfoMessage::kDepthFieldNumber;
const int NavPhotoInfoMessage::kAltitudeFieldNumber;
const int NavPhotoInfoMessage::kPhotopathFieldNumber;
const int NavPhotoInfoMessage::kPhotostampFieldNumber;
const int NavPhotoInfoMessage::kPanFieldNumber;
const int NavPhotoInfoMessage::kTiltFieldNumber;
#endif  // !_MSC_VER

NavPhotoInfoMessage::NavPhotoInfoMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:NavPhotoInfoMessage)
}

void NavPhotoInfoMessage::InitAsDefaultInstance() {
  photostamp_ = const_cast< ::NavPhotoInfoMessage_TimeStamp*>(&::NavPhotoInfoMessage_TimeStamp::default_instance());
}

NavPhotoInfoMessage::NavPhotoInfoMessage(const NavPhotoInfoMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:NavPhotoInfoMessage)
}

void NavPhotoInfoMessage::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  latitude_ = 0;
  longitude_ = 0;
  yaw_ = 0;
  roll_ = 0;
  pitch_ = 0;
  depth_ = 0;
  altitude_ = 0;
  photopath_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  photostamp_ = NULL;
  pan_ = 0;
  tilt_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NavPhotoInfoMessage::~NavPhotoInfoMessage() {
  // @@protoc_insertion_point(destructor:NavPhotoInfoMessage)
  SharedDtor();
}

void NavPhotoInfoMessage::SharedDtor() {
  if (photopath_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete photopath_;
  }
  if (this != default_instance_) {
    delete photostamp_;
  }
}

void NavPhotoInfoMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NavPhotoInfoMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NavPhotoInfoMessage_descriptor_;
}

const NavPhotoInfoMessage& NavPhotoInfoMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_nav_5fphoto_5finfo_2eproto();
  return *default_instance_;
}

NavPhotoInfoMessage* NavPhotoInfoMessage::default_instance_ = NULL;

NavPhotoInfoMessage* NavPhotoInfoMessage::New() const {
  return new NavPhotoInfoMessage;
}

void NavPhotoInfoMessage::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<NavPhotoInfoMessage*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(latitude_, altitude_);
    if (has_photopath()) {
      if (photopath_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        photopath_->clear();
      }
    }
  }
  if (_has_bits_[8 / 32] & 1792) {
    ZR_(pan_, tilt_);
    if (has_photostamp()) {
      if (photostamp_ != NULL) photostamp_->::NavPhotoInfoMessage_TimeStamp::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool NavPhotoInfoMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:NavPhotoInfoMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required double latitude = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_)));
          set_has_latitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_longitude;
        break;
      }

      // required double longitude = 2;
      case 2: {
        if (tag == 17) {
         parse_longitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longitude_)));
          set_has_longitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_yaw;
        break;
      }

      // required double yaw = 3;
      case 3: {
        if (tag == 25) {
         parse_yaw:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &yaw_)));
          set_has_yaw();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_roll;
        break;
      }

      // required double roll = 4;
      case 4: {
        if (tag == 33) {
         parse_roll:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &roll_)));
          set_has_roll();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_pitch;
        break;
      }

      // required double pitch = 5;
      case 5: {
        if (tag == 41) {
         parse_pitch:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &pitch_)));
          set_has_pitch();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(49)) goto parse_depth;
        break;
      }

      // required double depth = 6;
      case 6: {
        if (tag == 49) {
         parse_depth:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &depth_)));
          set_has_depth();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(57)) goto parse_altitude;
        break;
      }

      // required double altitude = 7;
      case 7: {
        if (tag == 57) {
         parse_altitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &altitude_)));
          set_has_altitude();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_photopath;
        break;
      }

      // optional string photopath = 8;
      case 8: {
        if (tag == 66) {
         parse_photopath:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_photopath()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->photopath().data(), this->photopath().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "photopath");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_photostamp;
        break;
      }

      // optional .NavPhotoInfoMessage.TimeStamp photostamp = 9;
      case 9: {
        if (tag == 74) {
         parse_photostamp:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_photostamp()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(81)) goto parse_pan;
        break;
      }

      // optional double pan = 10;
      case 10: {
        if (tag == 81) {
         parse_pan:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &pan_)));
          set_has_pan();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(89)) goto parse_tilt;
        break;
      }

      // optional double tilt = 11;
      case 11: {
        if (tag == 89) {
         parse_tilt:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &tilt_)));
          set_has_tilt();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:NavPhotoInfoMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:NavPhotoInfoMessage)
  return false;
#undef DO_
}

void NavPhotoInfoMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:NavPhotoInfoMessage)
  // required double latitude = 1;
  if (has_latitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->latitude(), output);
  }

  // required double longitude = 2;
  if (has_longitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->longitude(), output);
  }

  // required double yaw = 3;
  if (has_yaw()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->yaw(), output);
  }

  // required double roll = 4;
  if (has_roll()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->roll(), output);
  }

  // required double pitch = 5;
  if (has_pitch()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->pitch(), output);
  }

  // required double depth = 6;
  if (has_depth()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->depth(), output);
  }

  // required double altitude = 7;
  if (has_altitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->altitude(), output);
  }

  // optional string photopath = 8;
  if (has_photopath()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->photopath().data(), this->photopath().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "photopath");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->photopath(), output);
  }

  // optional .NavPhotoInfoMessage.TimeStamp photostamp = 9;
  if (has_photostamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->photostamp(), output);
  }

  // optional double pan = 10;
  if (has_pan()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->pan(), output);
  }

  // optional double tilt = 11;
  if (has_tilt()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->tilt(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:NavPhotoInfoMessage)
}

::google::protobuf::uint8* NavPhotoInfoMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:NavPhotoInfoMessage)
  // required double latitude = 1;
  if (has_latitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->latitude(), target);
  }

  // required double longitude = 2;
  if (has_longitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->longitude(), target);
  }

  // required double yaw = 3;
  if (has_yaw()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->yaw(), target);
  }

  // required double roll = 4;
  if (has_roll()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->roll(), target);
  }

  // required double pitch = 5;
  if (has_pitch()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->pitch(), target);
  }

  // required double depth = 6;
  if (has_depth()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->depth(), target);
  }

  // required double altitude = 7;
  if (has_altitude()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->altitude(), target);
  }

  // optional string photopath = 8;
  if (has_photopath()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->photopath().data(), this->photopath().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "photopath");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->photopath(), target);
  }

  // optional .NavPhotoInfoMessage.TimeStamp photostamp = 9;
  if (has_photostamp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        9, this->photostamp(), target);
  }

  // optional double pan = 10;
  if (has_pan()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(10, this->pan(), target);
  }

  // optional double tilt = 11;
  if (has_tilt()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(11, this->tilt(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:NavPhotoInfoMessage)
  return target;
}

int NavPhotoInfoMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required double latitude = 1;
    if (has_latitude()) {
      total_size += 1 + 8;
    }

    // required double longitude = 2;
    if (has_longitude()) {
      total_size += 1 + 8;
    }

    // required double yaw = 3;
    if (has_yaw()) {
      total_size += 1 + 8;
    }

    // required double roll = 4;
    if (has_roll()) {
      total_size += 1 + 8;
    }

    // required double pitch = 5;
    if (has_pitch()) {
      total_size += 1 + 8;
    }

    // required double depth = 6;
    if (has_depth()) {
      total_size += 1 + 8;
    }

    // required double altitude = 7;
    if (has_altitude()) {
      total_size += 1 + 8;
    }

    // optional string photopath = 8;
    if (has_photopath()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->photopath());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional .NavPhotoInfoMessage.TimeStamp photostamp = 9;
    if (has_photostamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->photostamp());
    }

    // optional double pan = 10;
    if (has_pan()) {
      total_size += 1 + 8;
    }

    // optional double tilt = 11;
    if (has_tilt()) {
      total_size += 1 + 8;
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

void NavPhotoInfoMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const NavPhotoInfoMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const NavPhotoInfoMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void NavPhotoInfoMessage::MergeFrom(const NavPhotoInfoMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_latitude()) {
      set_latitude(from.latitude());
    }
    if (from.has_longitude()) {
      set_longitude(from.longitude());
    }
    if (from.has_yaw()) {
      set_yaw(from.yaw());
    }
    if (from.has_roll()) {
      set_roll(from.roll());
    }
    if (from.has_pitch()) {
      set_pitch(from.pitch());
    }
    if (from.has_depth()) {
      set_depth(from.depth());
    }
    if (from.has_altitude()) {
      set_altitude(from.altitude());
    }
    if (from.has_photopath()) {
      set_photopath(from.photopath());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_photostamp()) {
      mutable_photostamp()->::NavPhotoInfoMessage_TimeStamp::MergeFrom(from.photostamp());
    }
    if (from.has_pan()) {
      set_pan(from.pan());
    }
    if (from.has_tilt()) {
      set_tilt(from.tilt());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void NavPhotoInfoMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavPhotoInfoMessage::CopyFrom(const NavPhotoInfoMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavPhotoInfoMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  if (has_photostamp()) {
    if (!this->photostamp().IsInitialized()) return false;
  }
  return true;
}

void NavPhotoInfoMessage::Swap(NavPhotoInfoMessage* other) {
  if (other != this) {
    std::swap(latitude_, other->latitude_);
    std::swap(longitude_, other->longitude_);
    std::swap(yaw_, other->yaw_);
    std::swap(roll_, other->roll_);
    std::swap(pitch_, other->pitch_);
    std::swap(depth_, other->depth_);
    std::swap(altitude_, other->altitude_);
    std::swap(photopath_, other->photopath_);
    std::swap(photostamp_, other->photostamp_);
    std::swap(pan_, other->pan_);
    std::swap(tilt_, other->tilt_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata NavPhotoInfoMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = NavPhotoInfoMessage_descriptor_;
  metadata.reflection = NavPhotoInfoMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)