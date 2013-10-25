// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msgs2c.proto

#ifndef PROTOBUF_msgs2c_2eproto__INCLUDED
#define PROTOBUF_msgs2c_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace msgs2c {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_msgs2c_2eproto();
void protobuf_AssignDesc_msgs2c_2eproto();
void protobuf_ShutdownFile_msgs2c_2eproto();

class MsgS2CCreatePlayerError;

enum enumCreateCharResult {
  Create_Success = 0,
  Create_SystemError = 1,
  Create_Name_Repeat = 2
};
bool enumCreateCharResult_IsValid(int value);
const enumCreateCharResult enumCreateCharResult_MIN = Create_Success;
const enumCreateCharResult enumCreateCharResult_MAX = Create_Name_Repeat;
const int enumCreateCharResult_ARRAYSIZE = enumCreateCharResult_MAX + 1;

const ::google::protobuf::EnumDescriptor* enumCreateCharResult_descriptor();
inline const ::std::string& enumCreateCharResult_Name(enumCreateCharResult value) {
  return ::google::protobuf::internal::NameOfEnum(
    enumCreateCharResult_descriptor(), value);
}
inline bool enumCreateCharResult_Parse(
    const ::std::string& name, enumCreateCharResult* value) {
  return ::google::protobuf::internal::ParseNamedEnum<enumCreateCharResult>(
    enumCreateCharResult_descriptor(), name, value);
}
// ===================================================================

class MsgS2CCreatePlayerError : public ::google::protobuf::Message {
 public:
  MsgS2CCreatePlayerError();
  virtual ~MsgS2CCreatePlayerError();

  MsgS2CCreatePlayerError(const MsgS2CCreatePlayerError& from);

  inline MsgS2CCreatePlayerError& operator=(const MsgS2CCreatePlayerError& from) {
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
  static const MsgS2CCreatePlayerError& default_instance();

  void Swap(MsgS2CCreatePlayerError* other);

  // implements Message ----------------------------------------------

  MsgS2CCreatePlayerError* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgS2CCreatePlayerError& from);
  void MergeFrom(const MsgS2CCreatePlayerError& from);
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

  // required .msgs2c.enumCreateCharResult result = 1;
  inline bool has_result() const;
  inline void clear_result();
  static const int kResultFieldNumber = 1;
  inline ::msgs2c::enumCreateCharResult result() const;
  inline void set_result(::msgs2c::enumCreateCharResult value);

  // @@protoc_insertion_point(class_scope:msgs2c.MsgS2CCreatePlayerError)
 private:
  inline void set_has_result();
  inline void clear_has_result();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int result_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_msgs2c_2eproto();
  friend void protobuf_AssignDesc_msgs2c_2eproto();
  friend void protobuf_ShutdownFile_msgs2c_2eproto();

  void InitAsDefaultInstance();
  static MsgS2CCreatePlayerError* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgS2CCreatePlayerError

// required .msgs2c.enumCreateCharResult result = 1;
inline bool MsgS2CCreatePlayerError::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgS2CCreatePlayerError::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgS2CCreatePlayerError::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgS2CCreatePlayerError::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::msgs2c::enumCreateCharResult MsgS2CCreatePlayerError::result() const {
  return static_cast< ::msgs2c::enumCreateCharResult >(result_);
}
inline void MsgS2CCreatePlayerError::set_result(::msgs2c::enumCreateCharResult value) {
  assert(::msgs2c::enumCreateCharResult_IsValid(value));
  set_has_result();
  result_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs2c

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::msgs2c::enumCreateCharResult>() {
  return ::msgs2c::enumCreateCharResult_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msgs2c_2eproto__INCLUDED
