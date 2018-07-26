// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cvmat.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cvmat.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class ResponseDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<Response> {
} _Response_default_instance_;
class MatInputDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MatInput> {
} _MatInput_default_instance_;

namespace protobuf_cvmat_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Response, response_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatInput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MatInput, cvmat_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(Response)},
  { 5, -1, sizeof(MatInput)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_Response_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_MatInput_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cvmat.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _Response_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _MatInput_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _Response_default_instance_.DefaultConstruct();
  _MatInput_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\013cvmat.proto\"\034\n\010Response\022\020\n\010response\030\001 "
      "\001(\005\"\031\n\010MatInput\022\r\n\005cvmat\030\001 \001(\0142.\n\005CvMat\022"
      "%\n\013transferMat\022\t.MatInput\032\t.Response\"\000b\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 126);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cvmat.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cvmat_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Response::kResponseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Response::Response()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cvmat_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Response)
}
Response::Response(const Response& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  response_ = from.response_;
  // @@protoc_insertion_point(copy_constructor:Response)
}

void Response::SharedCtor() {
  response_ = 0;
  _cached_size_ = 0;
}

Response::~Response() {
  // @@protoc_insertion_point(destructor:Response)
  SharedDtor();
}

void Response::SharedDtor() {
}

void Response::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Response::descriptor() {
  protobuf_cvmat_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cvmat_2eproto::file_level_metadata[0].descriptor;
}

const Response& Response::default_instance() {
  protobuf_cvmat_2eproto::InitDefaults();
  return *internal_default_instance();
}

Response* Response::New(::google::protobuf::Arena* arena) const {
  Response* n = new Response;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Response::Clear() {
// @@protoc_insertion_point(message_clear_start:Response)
  response_ = 0;
}

bool Response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Response)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 response = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &response_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Response)
  return false;
#undef DO_
}

void Response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Response)
  // int32 response = 1;
  if (this->response() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->response(), output);
  }

  // @@protoc_insertion_point(serialize_end:Response)
}

::google::protobuf::uint8* Response::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Response)
  // int32 response = 1;
  if (this->response() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->response(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Response)
  return target;
}

size_t Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Response)
  size_t total_size = 0;

  // int32 response = 1;
  if (this->response() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->response());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Response::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Response)
  GOOGLE_DCHECK_NE(&from, this);
  const Response* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Response>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Response)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Response)
    MergeFrom(*source);
  }
}

void Response::MergeFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.response() != 0) {
    set_response(from.response());
  }
}

void Response::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Response::CopyFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Response::IsInitialized() const {
  return true;
}

void Response::Swap(Response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Response::InternalSwap(Response* other) {
  std::swap(response_, other->response_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Response::GetMetadata() const {
  protobuf_cvmat_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cvmat_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Response

// int32 response = 1;
void Response::clear_response() {
  response_ = 0;
}
::google::protobuf::int32 Response::response() const {
  // @@protoc_insertion_point(field_get:Response.response)
  return response_;
}
void Response::set_response(::google::protobuf::int32 value) {
  
  response_ = value;
  // @@protoc_insertion_point(field_set:Response.response)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MatInput::kCvmatFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MatInput::MatInput()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cvmat_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:MatInput)
}
MatInput::MatInput(const MatInput& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  cvmat_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.cvmat().size() > 0) {
    cvmat_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cvmat_);
  }
  // @@protoc_insertion_point(copy_constructor:MatInput)
}

void MatInput::SharedCtor() {
  cvmat_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

MatInput::~MatInput() {
  // @@protoc_insertion_point(destructor:MatInput)
  SharedDtor();
}

void MatInput::SharedDtor() {
  cvmat_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void MatInput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MatInput::descriptor() {
  protobuf_cvmat_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cvmat_2eproto::file_level_metadata[1].descriptor;
}

const MatInput& MatInput::default_instance() {
  protobuf_cvmat_2eproto::InitDefaults();
  return *internal_default_instance();
}

MatInput* MatInput::New(::google::protobuf::Arena* arena) const {
  MatInput* n = new MatInput;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MatInput::Clear() {
// @@protoc_insertion_point(message_clear_start:MatInput)
  cvmat_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MatInput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MatInput)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes cvmat = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_cvmat()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MatInput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MatInput)
  return false;
#undef DO_
}

void MatInput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MatInput)
  // bytes cvmat = 1;
  if (this->cvmat().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->cvmat(), output);
  }

  // @@protoc_insertion_point(serialize_end:MatInput)
}

::google::protobuf::uint8* MatInput::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:MatInput)
  // bytes cvmat = 1;
  if (this->cvmat().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->cvmat(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:MatInput)
  return target;
}

size_t MatInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MatInput)
  size_t total_size = 0;

  // bytes cvmat = 1;
  if (this->cvmat().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->cvmat());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MatInput::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MatInput)
  GOOGLE_DCHECK_NE(&from, this);
  const MatInput* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MatInput>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MatInput)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MatInput)
    MergeFrom(*source);
  }
}

void MatInput::MergeFrom(const MatInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MatInput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.cvmat().size() > 0) {

    cvmat_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cvmat_);
  }
}

void MatInput::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MatInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MatInput::CopyFrom(const MatInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MatInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MatInput::IsInitialized() const {
  return true;
}

void MatInput::Swap(MatInput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MatInput::InternalSwap(MatInput* other) {
  cvmat_.Swap(&other->cvmat_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MatInput::GetMetadata() const {
  protobuf_cvmat_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cvmat_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MatInput

// bytes cvmat = 1;
void MatInput::clear_cvmat() {
  cvmat_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& MatInput::cvmat() const {
  // @@protoc_insertion_point(field_get:MatInput.cvmat)
  return cvmat_.GetNoArena();
}
void MatInput::set_cvmat(const ::std::string& value) {
  
  cvmat_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MatInput.cvmat)
}
#if LANG_CXX11
void MatInput::set_cvmat(::std::string&& value) {
  
  cvmat_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:MatInput.cvmat)
}
#endif
void MatInput::set_cvmat(const char* value) {
  
  cvmat_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MatInput.cvmat)
}
void MatInput::set_cvmat(const void* value, size_t size) {
  
  cvmat_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MatInput.cvmat)
}
::std::string* MatInput::mutable_cvmat() {
  
  // @@protoc_insertion_point(field_mutable:MatInput.cvmat)
  return cvmat_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* MatInput::release_cvmat() {
  // @@protoc_insertion_point(field_release:MatInput.cvmat)
  
  return cvmat_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void MatInput::set_allocated_cvmat(::std::string* cvmat) {
  if (cvmat != NULL) {
    
  } else {
    
  }
  cvmat_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cvmat);
  // @@protoc_insertion_point(field_set_allocated:MatInput.cvmat)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
