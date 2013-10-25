// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "common.pb.h"

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

const ::google::protobuf::Descriptor* CharInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CharInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* MapCharInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MapCharInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* enCharState_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* enumGetCharResult_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* CommonConst_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* SCREEN_CONST_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DIR_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* enumCharType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* enumGroupType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* enumWordmsgType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* enumAssessType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* enumCompanyTalentType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_common_2eproto() {
  protobuf_AddDesc_common_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "common.proto");
  GOOGLE_CHECK(file != NULL);
  CharInfo_descriptor_ = file->message_type(0);
  static const int CharInfo_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, charid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, user_account_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, head_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, sex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, colthid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, chartype_),
  };
  CharInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CharInfo_descriptor_,
      CharInfo::default_instance_,
      CharInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CharInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CharInfo));
  MapCharInfo_descriptor_ = file->message_type(1);
  static const int MapCharInfo_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapCharInfo, charinfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapCharInfo, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapCharInfo, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapCharInfo, dir_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapCharInfo, state_),
  };
  MapCharInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MapCharInfo_descriptor_,
      MapCharInfo::default_instance_,
      MapCharInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapCharInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapCharInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MapCharInfo));
  enCharState_descriptor_ = file->enum_type(0);
  enumGetCharResult_descriptor_ = file->enum_type(1);
  CommonConst_descriptor_ = file->enum_type(2);
  SCREEN_CONST_descriptor_ = file->enum_type(3);
  DIR_descriptor_ = file->enum_type(4);
  enumCharType_descriptor_ = file->enum_type(5);
  enumGroupType_descriptor_ = file->enum_type(6);
  enumWordmsgType_descriptor_ = file->enum_type(7);
  enumAssessType_descriptor_ = file->enum_type(8);
  enumCompanyTalentType_descriptor_ = file->enum_type(9);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_common_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CharInfo_descriptor_, &CharInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MapCharInfo_descriptor_, &MapCharInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_common_2eproto() {
  delete CharInfo::default_instance_;
  delete CharInfo_reflection_;
  delete MapCharInfo::default_instance_;
  delete MapCharInfo_reflection_;
}

void protobuf_AddDesc_common_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014common.proto\"\213\001\n\010CharInfo\022\016\n\006charid\030\001 "
    "\001(\r\022\024\n\014user_account\030\002 \001(\r\022\014\n\004name\030\003 \001(\t\022"
    "\014\n\004head\030\004 \001(\r\022\013\n\003sex\030\005 \001(\r\022\017\n\007colthid\030\006 "
    "\001(\r\022\037\n\010chartype\030\007 \001(\0162\r.enumCharType\"j\n\013"
    "MapCharInfo\022\033\n\010charinfo\030\001 \001(\0132\t.CharInfo"
    "\022\t\n\001x\030\002 \001(\002\022\t\n\001y\030\003 \001(\002\022\013\n\003dir\030\004 \001(\002\022\033\n\005s"
    "tate\030\005 \001(\0162\014.enCharState*5\n\013enCharState\022"
    "\022\n\016CharState_Move\020\000\022\022\n\016CharState_Stop\020\001*"
    "Y\n\021enumGetCharResult\022\024\n\020Response_Success"
    "\020\000\022\030\n\024Response_SystemError\020\001\022\024\n\020Response"
    "_NewChar\020\002*\037\n\013CommonConst\022\020\n\014MAX_NAMESIZ"
    "E\020 *3\n\014SCREEN_CONST\022\020\n\014SCREEN_WIDTH\020\r\022\021\n"
    "\rSCREEN_HEIGHT\020\023*\221\001\n\003DIR\022\n\n\006DIR_UP\020\000\022\017\n\013"
    "DIR_UPRIGHT\020\001\022\r\n\tDIR_RIGHT\020\002\022\021\n\rDIR_DOWN"
    "RIGHT\020\003\022\014\n\010DIR_DOWN\020\004\022\020\n\014DIR_DOWNLEFT\020\005\022"
    "\014\n\010DIR_LEFT\020\006\022\016\n\nDIR_UPLEFT\020\007\022\r\n\tDIR_ERR"
    "OR\020\010*9\n\014enumCharType\022\023\n\017enumChar_Person\020"
    "\001\022\024\n\020enumChar_Company\020\002*\204\001\n\renumGroupTyp"
    "e\022\024\n\020enumGroup_Friend\020\001\022\022\n\016enumGroup_Sho"
    "p\020\002\022\025\n\021enumGroup_Recruit\020\003\022\027\n\023enumGroup_"
    "Blacklist\020\004\022\031\n\025enumGroup_ToBlacklist\020\005*B"
    "\n\017enumWordmsgType\022\032\n\026enumWordmsg_ComanyN"
    "eed\020\001\022\023\n\017enumWordmsg_Sys\020\002*\276\001\n\016enumAsses"
    "sType\022 \n\034enumAssess_Person_Resumeinfo\020\001\022"
    " \n\034enumAssess_Person_Friendinfo\020\002\022\"\n\036enu"
    "mAssess_Person_Shoppinginfo\020\003\022\"\n\036enumAss"
    "ess_Company_Companyinfo\020\004\022 \n\034enumAssess_"
    "Company_Proresume\020\005*y\n\025enumCompanyTalent"
    "Type\022\035\n\031enumCompanyTalent_Recycle\020\003\022\037\n\033e"
    "numCompanyTalent_Noprocess\020\001\022 \n\034enumComp"
    "anyTalent_Talentpool\020\002", 1222);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "common.proto", &protobuf_RegisterTypes);
  CharInfo::default_instance_ = new CharInfo();
  MapCharInfo::default_instance_ = new MapCharInfo();
  CharInfo::default_instance_->InitAsDefaultInstance();
  MapCharInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_common_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_common_2eproto {
  StaticDescriptorInitializer_common_2eproto() {
    protobuf_AddDesc_common_2eproto();
  }
} static_descriptor_initializer_common_2eproto_;
const ::google::protobuf::EnumDescriptor* enCharState_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enCharState_descriptor_;
}
bool enCharState_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* enumGetCharResult_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enumGetCharResult_descriptor_;
}
bool enumGetCharResult_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* CommonConst_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CommonConst_descriptor_;
}
bool CommonConst_IsValid(int value) {
  switch(value) {
    case 32:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* SCREEN_CONST_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SCREEN_CONST_descriptor_;
}
bool SCREEN_CONST_IsValid(int value) {
  switch(value) {
    case 13:
    case 19:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DIR_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DIR_descriptor_;
}
bool DIR_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* enumCharType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enumCharType_descriptor_;
}
bool enumCharType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* enumGroupType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enumGroupType_descriptor_;
}
bool enumGroupType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* enumWordmsgType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enumWordmsgType_descriptor_;
}
bool enumWordmsgType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* enumAssessType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enumAssessType_descriptor_;
}
bool enumAssessType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* enumCompanyTalentType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return enumCompanyTalentType_descriptor_;
}
bool enumCompanyTalentType_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int CharInfo::kCharidFieldNumber;
const int CharInfo::kUserAccountFieldNumber;
const int CharInfo::kNameFieldNumber;
const int CharInfo::kHeadFieldNumber;
const int CharInfo::kSexFieldNumber;
const int CharInfo::kColthidFieldNumber;
const int CharInfo::kChartypeFieldNumber;
#endif  // !_MSC_VER

CharInfo::CharInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CharInfo::InitAsDefaultInstance() {
}

CharInfo::CharInfo(const CharInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CharInfo::SharedCtor() {
  _cached_size_ = 0;
  charid_ = 0u;
  user_account_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  head_ = 0u;
  sex_ = 0u;
  colthid_ = 0u;
  chartype_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CharInfo::~CharInfo() {
  SharedDtor();
}

void CharInfo::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void CharInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CharInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CharInfo_descriptor_;
}

const CharInfo& CharInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

CharInfo* CharInfo::default_instance_ = NULL;

CharInfo* CharInfo::New() const {
  return new CharInfo;
}

void CharInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    charid_ = 0u;
    user_account_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    head_ = 0u;
    sex_ = 0u;
    colthid_ = 0u;
    chartype_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CharInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 charid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &charid_)));
          set_has_charid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_user_account;
        break;
      }

      // optional uint32 user_account = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_user_account:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &user_account_)));
          set_has_user_account();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_name;
        break;
      }

      // optional string name = 3;
      case 3: {
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
        if (input->ExpectTag(32)) goto parse_head;
        break;
      }

      // optional uint32 head = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_head:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &head_)));
          set_has_head();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_sex;
        break;
      }

      // optional uint32 sex = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sex_)));
          set_has_sex();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_colthid;
        break;
      }

      // optional uint32 colthid = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_colthid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &colthid_)));
          set_has_colthid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_chartype;
        break;
      }

      // optional .enumCharType chartype = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_chartype:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::enumCharType_IsValid(value)) {
            set_chartype(static_cast< ::enumCharType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(7, value);
          }
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

void CharInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint32 charid = 1;
  if (has_charid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->charid(), output);
  }

  // optional uint32 user_account = 2;
  if (has_user_account()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->user_account(), output);
  }

  // optional string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->name(), output);
  }

  // optional uint32 head = 4;
  if (has_head()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->head(), output);
  }

  // optional uint32 sex = 5;
  if (has_sex()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->sex(), output);
  }

  // optional uint32 colthid = 6;
  if (has_colthid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(6, this->colthid(), output);
  }

  // optional .enumCharType chartype = 7;
  if (has_chartype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      7, this->chartype(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CharInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional uint32 charid = 1;
  if (has_charid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->charid(), target);
  }

  // optional uint32 user_account = 2;
  if (has_user_account()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->user_account(), target);
  }

  // optional string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // optional uint32 head = 4;
  if (has_head()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->head(), target);
  }

  // optional uint32 sex = 5;
  if (has_sex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->sex(), target);
  }

  // optional uint32 colthid = 6;
  if (has_colthid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(6, this->colthid(), target);
  }

  // optional .enumCharType chartype = 7;
  if (has_chartype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      7, this->chartype(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CharInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 charid = 1;
    if (has_charid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->charid());
    }

    // optional uint32 user_account = 2;
    if (has_user_account()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->user_account());
    }

    // optional string name = 3;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional uint32 head = 4;
    if (has_head()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->head());
    }

    // optional uint32 sex = 5;
    if (has_sex()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sex());
    }

    // optional uint32 colthid = 6;
    if (has_colthid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->colthid());
    }

    // optional .enumCharType chartype = 7;
    if (has_chartype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->chartype());
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

void CharInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CharInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CharInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CharInfo::MergeFrom(const CharInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_charid()) {
      set_charid(from.charid());
    }
    if (from.has_user_account()) {
      set_user_account(from.user_account());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_head()) {
      set_head(from.head());
    }
    if (from.has_sex()) {
      set_sex(from.sex());
    }
    if (from.has_colthid()) {
      set_colthid(from.colthid());
    }
    if (from.has_chartype()) {
      set_chartype(from.chartype());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CharInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CharInfo::CopyFrom(const CharInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CharInfo::IsInitialized() const {

  return true;
}

void CharInfo::Swap(CharInfo* other) {
  if (other != this) {
    std::swap(charid_, other->charid_);
    std::swap(user_account_, other->user_account_);
    std::swap(name_, other->name_);
    std::swap(head_, other->head_);
    std::swap(sex_, other->sex_);
    std::swap(colthid_, other->colthid_);
    std::swap(chartype_, other->chartype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CharInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CharInfo_descriptor_;
  metadata.reflection = CharInfo_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MapCharInfo::kCharinfoFieldNumber;
const int MapCharInfo::kXFieldNumber;
const int MapCharInfo::kYFieldNumber;
const int MapCharInfo::kDirFieldNumber;
const int MapCharInfo::kStateFieldNumber;
#endif  // !_MSC_VER

MapCharInfo::MapCharInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MapCharInfo::InitAsDefaultInstance() {
  charinfo_ = const_cast< ::CharInfo*>(&::CharInfo::default_instance());
}

MapCharInfo::MapCharInfo(const MapCharInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MapCharInfo::SharedCtor() {
  _cached_size_ = 0;
  charinfo_ = NULL;
  x_ = 0;
  y_ = 0;
  dir_ = 0;
  state_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MapCharInfo::~MapCharInfo() {
  SharedDtor();
}

void MapCharInfo::SharedDtor() {
  if (this != default_instance_) {
    delete charinfo_;
  }
}

void MapCharInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MapCharInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MapCharInfo_descriptor_;
}

const MapCharInfo& MapCharInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_common_2eproto();
  return *default_instance_;
}

MapCharInfo* MapCharInfo::default_instance_ = NULL;

MapCharInfo* MapCharInfo::New() const {
  return new MapCharInfo;
}

void MapCharInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_charinfo()) {
      if (charinfo_ != NULL) charinfo_->::CharInfo::Clear();
    }
    x_ = 0;
    y_ = 0;
    dir_ = 0;
    state_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MapCharInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .CharInfo charinfo = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_charinfo()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_x;
        break;
      }

      // optional float x = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_y;
        break;
      }

      // optional float y = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &y_)));
          set_has_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_dir;
        break;
      }

      // optional float dir = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_dir:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &dir_)));
          set_has_dir();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_state;
        break;
      }

      // optional .enCharState state = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_state:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::enCharState_IsValid(value)) {
            set_state(static_cast< ::enCharState >(value));
          } else {
            mutable_unknown_fields()->AddVarint(5, value);
          }
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

void MapCharInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .CharInfo charinfo = 1;
  if (has_charinfo()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->charinfo(), output);
  }

  // optional float x = 2;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->x(), output);
  }

  // optional float y = 3;
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->y(), output);
  }

  // optional float dir = 4;
  if (has_dir()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->dir(), output);
  }

  // optional .enCharState state = 5;
  if (has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->state(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MapCharInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .CharInfo charinfo = 1;
  if (has_charinfo()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->charinfo(), target);
  }

  // optional float x = 2;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->x(), target);
  }

  // optional float y = 3;
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(3, this->y(), target);
  }

  // optional float dir = 4;
  if (has_dir()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->dir(), target);
  }

  // optional .enCharState state = 5;
  if (has_state()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->state(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MapCharInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .CharInfo charinfo = 1;
    if (has_charinfo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->charinfo());
    }

    // optional float x = 2;
    if (has_x()) {
      total_size += 1 + 4;
    }

    // optional float y = 3;
    if (has_y()) {
      total_size += 1 + 4;
    }

    // optional float dir = 4;
    if (has_dir()) {
      total_size += 1 + 4;
    }

    // optional .enCharState state = 5;
    if (has_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->state());
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

void MapCharInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MapCharInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MapCharInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MapCharInfo::MergeFrom(const MapCharInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_charinfo()) {
      mutable_charinfo()->::CharInfo::MergeFrom(from.charinfo());
    }
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_dir()) {
      set_dir(from.dir());
    }
    if (from.has_state()) {
      set_state(from.state());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MapCharInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MapCharInfo::CopyFrom(const MapCharInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MapCharInfo::IsInitialized() const {

  return true;
}

void MapCharInfo::Swap(MapCharInfo* other) {
  if (other != this) {
    std::swap(charinfo_, other->charinfo_);
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(dir_, other->dir_);
    std::swap(state_, other->state_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MapCharInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MapCharInfo_descriptor_;
  metadata.reflection = MapCharInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)