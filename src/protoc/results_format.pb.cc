// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: results_format.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "results_format.pb.h"

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

namespace ecma_protoc {

namespace {

const ::google::protobuf::Descriptor* Simu_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Simu_reflection_ = NULL;
const ::google::protobuf::Descriptor* Simu_LinesSol_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Simu_LinesSol_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Simu_Solver_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Results_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Results_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_results_5fformat_2eproto() {
  protobuf_AddDesc_results_5fformat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "results_format.proto");
  GOOGLE_CHECK(file != NULL);
  Simu_descriptor_ = file->message_type(0);
  static const int Simu_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu, instance_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu, id_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu, solver_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu, cost_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu, x_),
  };
  Simu_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Simu_descriptor_,
      Simu::default_instance_,
      Simu_offsets_,
      -1,
      -1,
      -1,
      sizeof(Simu),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu, _is_default_instance_));
  Simu_LinesSol_descriptor_ = Simu_descriptor_->nested_type(0);
  static const int Simu_LinesSol_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu_LinesSol, l_),
  };
  Simu_LinesSol_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Simu_LinesSol_descriptor_,
      Simu_LinesSol::default_instance_,
      Simu_LinesSol_offsets_,
      -1,
      -1,
      -1,
      sizeof(Simu_LinesSol),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu_LinesSol, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Simu_LinesSol, _is_default_instance_));
  Simu_Solver_descriptor_ = Simu_descriptor_->enum_type(0);
  Results_descriptor_ = file->message_type(1);
  static const int Results_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Results, simu_),
  };
  Results_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Results_descriptor_,
      Results::default_instance_,
      Results_offsets_,
      -1,
      -1,
      -1,
      sizeof(Results),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Results, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Results, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_results_5fformat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Simu_descriptor_, &Simu::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Simu_LinesSol_descriptor_, &Simu_LinesSol::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Results_descriptor_, &Results::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_results_5fformat_2eproto() {
  delete Simu::default_instance_;
  delete Simu_reflection_;
  delete Simu_LinesSol::default_instance_;
  delete Simu_LinesSol_reflection_;
  delete Results::default_instance_;
  delete Results_reflection_;
}

void protobuf_AddDesc_results_5fformat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024results_format.proto\022\013ecma_protoc\"\200\002\n\004"
    "Simu\022\025\n\rinstance_name\030\001 \001(\t\022\017\n\007id_time\030\002"
    " \001(\003\022(\n\006solver\030\003 \001(\0162\030.ecma_protoc.Simu."
    "Solver\022\014\n\004cost\030\004 \001(\005\022\014\n\004time\030\005 \001(\005\022%\n\001x\030"
    "\006 \003(\0132\032.ecma_protoc.Simu.LinesSol\032\025\n\010Lin"
    "esSol\022\t\n\001l\030\001 \003(\010\"L\n\006Solver\022\n\n\006STUPID\020\000\022\013"
    "\n\007FRONTAL\020\001\022\016\n\nCONSTRAINT\020\002\022\n\n\006GREEDY\020\003\022"
    "\r\n\tANNEALING\020\004\"*\n\007Results\022\037\n\004simu\030\001 \003(\0132"
    "\021.ecma_protoc.Simub\006proto3", 346);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "results_format.proto", &protobuf_RegisterTypes);
  Simu::default_instance_ = new Simu();
  Simu_LinesSol::default_instance_ = new Simu_LinesSol();
  Results::default_instance_ = new Results();
  Simu::default_instance_->InitAsDefaultInstance();
  Simu_LinesSol::default_instance_->InitAsDefaultInstance();
  Results::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_results_5fformat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_results_5fformat_2eproto {
  StaticDescriptorInitializer_results_5fformat_2eproto() {
    protobuf_AddDesc_results_5fformat_2eproto();
  }
} static_descriptor_initializer_results_5fformat_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* Simu_Solver_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Simu_Solver_descriptor_;
}
bool Simu_Solver_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Simu_Solver Simu::STUPID;
const Simu_Solver Simu::FRONTAL;
const Simu_Solver Simu::CONSTRAINT;
const Simu_Solver Simu::GREEDY;
const Simu_Solver Simu::ANNEALING;
const Simu_Solver Simu::Solver_MIN;
const Simu_Solver Simu::Solver_MAX;
const int Simu::Solver_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Simu_LinesSol::kLFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Simu_LinesSol::Simu_LinesSol()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ecma_protoc.Simu.LinesSol)
}

void Simu_LinesSol::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Simu_LinesSol::Simu_LinesSol(const Simu_LinesSol& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ecma_protoc.Simu.LinesSol)
}

void Simu_LinesSol::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

Simu_LinesSol::~Simu_LinesSol() {
  // @@protoc_insertion_point(destructor:ecma_protoc.Simu.LinesSol)
  SharedDtor();
}

void Simu_LinesSol::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Simu_LinesSol::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Simu_LinesSol::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Simu_LinesSol_descriptor_;
}

const Simu_LinesSol& Simu_LinesSol::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_results_5fformat_2eproto();
  return *default_instance_;
}

Simu_LinesSol* Simu_LinesSol::default_instance_ = NULL;

Simu_LinesSol* Simu_LinesSol::New(::google::protobuf::Arena* arena) const {
  Simu_LinesSol* n = new Simu_LinesSol;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Simu_LinesSol::Clear() {
  l_.Clear();
}

bool Simu_LinesSol::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ecma_protoc.Simu.LinesSol)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated bool l = 1;
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, this->mutable_l())));
        } else if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 1, 10, input, this->mutable_l())));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ecma_protoc.Simu.LinesSol)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ecma_protoc.Simu.LinesSol)
  return false;
#undef DO_
}

void Simu_LinesSol::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ecma_protoc.Simu.LinesSol)
  // repeated bool l = 1;
  if (this->l_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_l_cached_byte_size_);
  }
  for (int i = 0; i < this->l_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBoolNoTag(
      this->l(i), output);
  }

  // @@protoc_insertion_point(serialize_end:ecma_protoc.Simu.LinesSol)
}

::google::protobuf::uint8* Simu_LinesSol::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ecma_protoc.Simu.LinesSol)
  // repeated bool l = 1;
  if (this->l_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _l_cached_byte_size_, target);
  }
  for (int i = 0; i < this->l_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBoolNoTagToArray(this->l(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ecma_protoc.Simu.LinesSol)
  return target;
}

int Simu_LinesSol::ByteSize() const {
  int total_size = 0;

  // repeated bool l = 1;
  {
    int data_size = 0;
    data_size = 1 * this->l_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _l_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Simu_LinesSol::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Simu_LinesSol* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Simu_LinesSol>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Simu_LinesSol::MergeFrom(const Simu_LinesSol& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  l_.MergeFrom(from.l_);
}

void Simu_LinesSol::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Simu_LinesSol::CopyFrom(const Simu_LinesSol& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Simu_LinesSol::IsInitialized() const {

  return true;
}

void Simu_LinesSol::Swap(Simu_LinesSol* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Simu_LinesSol::InternalSwap(Simu_LinesSol* other) {
  l_.UnsafeArenaSwap(&other->l_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Simu_LinesSol::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Simu_LinesSol_descriptor_;
  metadata.reflection = Simu_LinesSol_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Simu::kInstanceNameFieldNumber;
const int Simu::kIdTimeFieldNumber;
const int Simu::kSolverFieldNumber;
const int Simu::kCostFieldNumber;
const int Simu::kTimeFieldNumber;
const int Simu::kXFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Simu::Simu()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ecma_protoc.Simu)
}

void Simu::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Simu::Simu(const Simu& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ecma_protoc.Simu)
}

void Simu::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  instance_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_time_ = GOOGLE_LONGLONG(0);
  solver_ = 0;
  cost_ = 0;
  time_ = 0;
}

Simu::~Simu() {
  // @@protoc_insertion_point(destructor:ecma_protoc.Simu)
  SharedDtor();
}

void Simu::SharedDtor() {
  instance_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Simu::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Simu::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Simu_descriptor_;
}

const Simu& Simu::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_results_5fformat_2eproto();
  return *default_instance_;
}

Simu* Simu::default_instance_ = NULL;

Simu* Simu::New(::google::protobuf::Arena* arena) const {
  Simu* n = new Simu;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Simu::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Simu*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(id_time_, cost_);
  instance_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  time_ = 0;

#undef ZR_HELPER_
#undef ZR_

  x_.Clear();
}

bool Simu::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ecma_protoc.Simu)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string instance_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_instance_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->instance_name().data(), this->instance_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ecma_protoc.Simu.instance_name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_id_time;
        break;
      }

      // optional int64 id_time = 2;
      case 2: {
        if (tag == 16) {
         parse_id_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_solver;
        break;
      }

      // optional .ecma_protoc.Simu.Solver solver = 3;
      case 3: {
        if (tag == 24) {
         parse_solver:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_solver(static_cast< ::ecma_protoc::Simu_Solver >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_cost;
        break;
      }

      // optional int32 cost = 4;
      case 4: {
        if (tag == 32) {
         parse_cost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cost_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_time;
        break;
      }

      // optional int32 time = 5;
      case 5: {
        if (tag == 40) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &time_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_x;
        break;
      }

      // repeated .ecma_protoc.Simu.LinesSol x = 6;
      case 6: {
        if (tag == 50) {
         parse_x:
          DO_(input->IncrementRecursionDepth());
         parse_loop_x:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_x()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_loop_x;
        input->UnsafeDecrementRecursionDepth();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ecma_protoc.Simu)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ecma_protoc.Simu)
  return false;
#undef DO_
}

void Simu::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ecma_protoc.Simu)
  // optional string instance_name = 1;
  if (this->instance_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->instance_name().data(), this->instance_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ecma_protoc.Simu.instance_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->instance_name(), output);
  }

  // optional int64 id_time = 2;
  if (this->id_time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->id_time(), output);
  }

  // optional .ecma_protoc.Simu.Solver solver = 3;
  if (this->solver() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->solver(), output);
  }

  // optional int32 cost = 4;
  if (this->cost() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->cost(), output);
  }

  // optional int32 time = 5;
  if (this->time() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->time(), output);
  }

  // repeated .ecma_protoc.Simu.LinesSol x = 6;
  for (unsigned int i = 0, n = this->x_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->x(i), output);
  }

  // @@protoc_insertion_point(serialize_end:ecma_protoc.Simu)
}

::google::protobuf::uint8* Simu::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ecma_protoc.Simu)
  // optional string instance_name = 1;
  if (this->instance_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->instance_name().data(), this->instance_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ecma_protoc.Simu.instance_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->instance_name(), target);
  }

  // optional int64 id_time = 2;
  if (this->id_time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->id_time(), target);
  }

  // optional .ecma_protoc.Simu.Solver solver = 3;
  if (this->solver() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->solver(), target);
  }

  // optional int32 cost = 4;
  if (this->cost() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->cost(), target);
  }

  // optional int32 time = 5;
  if (this->time() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->time(), target);
  }

  // repeated .ecma_protoc.Simu.LinesSol x = 6;
  for (unsigned int i = 0, n = this->x_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->x(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ecma_protoc.Simu)
  return target;
}

int Simu::ByteSize() const {
  int total_size = 0;

  // optional string instance_name = 1;
  if (this->instance_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->instance_name());
  }

  // optional int64 id_time = 2;
  if (this->id_time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->id_time());
  }

  // optional .ecma_protoc.Simu.Solver solver = 3;
  if (this->solver() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->solver());
  }

  // optional int32 cost = 4;
  if (this->cost() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->cost());
  }

  // optional int32 time = 5;
  if (this->time() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->time());
  }

  // repeated .ecma_protoc.Simu.LinesSol x = 6;
  total_size += 1 * this->x_size();
  for (int i = 0; i < this->x_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->x(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Simu::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Simu* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Simu>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Simu::MergeFrom(const Simu& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  x_.MergeFrom(from.x_);
  if (from.instance_name().size() > 0) {

    instance_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.instance_name_);
  }
  if (from.id_time() != 0) {
    set_id_time(from.id_time());
  }
  if (from.solver() != 0) {
    set_solver(from.solver());
  }
  if (from.cost() != 0) {
    set_cost(from.cost());
  }
  if (from.time() != 0) {
    set_time(from.time());
  }
}

void Simu::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Simu::CopyFrom(const Simu& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Simu::IsInitialized() const {

  return true;
}

void Simu::Swap(Simu* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Simu::InternalSwap(Simu* other) {
  instance_name_.Swap(&other->instance_name_);
  std::swap(id_time_, other->id_time_);
  std::swap(solver_, other->solver_);
  std::swap(cost_, other->cost_);
  std::swap(time_, other->time_);
  x_.UnsafeArenaSwap(&other->x_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Simu::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Simu_descriptor_;
  metadata.reflection = Simu_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Simu_LinesSol

// repeated bool l = 1;
int Simu_LinesSol::l_size() const {
  return l_.size();
}
void Simu_LinesSol::clear_l() {
  l_.Clear();
}
 bool Simu_LinesSol::l(int index) const {
  // @@protoc_insertion_point(field_get:ecma_protoc.Simu.LinesSol.l)
  return l_.Get(index);
}
 void Simu_LinesSol::set_l(int index, bool value) {
  l_.Set(index, value);
  // @@protoc_insertion_point(field_set:ecma_protoc.Simu.LinesSol.l)
}
 void Simu_LinesSol::add_l(bool value) {
  l_.Add(value);
  // @@protoc_insertion_point(field_add:ecma_protoc.Simu.LinesSol.l)
}
 const ::google::protobuf::RepeatedField< bool >&
Simu_LinesSol::l() const {
  // @@protoc_insertion_point(field_list:ecma_protoc.Simu.LinesSol.l)
  return l_;
}
 ::google::protobuf::RepeatedField< bool >*
Simu_LinesSol::mutable_l() {
  // @@protoc_insertion_point(field_mutable_list:ecma_protoc.Simu.LinesSol.l)
  return &l_;
}

// -------------------------------------------------------------------

// Simu

// optional string instance_name = 1;
void Simu::clear_instance_name() {
  instance_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Simu::instance_name() const {
  // @@protoc_insertion_point(field_get:ecma_protoc.Simu.instance_name)
  return instance_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Simu::set_instance_name(const ::std::string& value) {
  
  instance_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ecma_protoc.Simu.instance_name)
}
 void Simu::set_instance_name(const char* value) {
  
  instance_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ecma_protoc.Simu.instance_name)
}
 void Simu::set_instance_name(const char* value, size_t size) {
  
  instance_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ecma_protoc.Simu.instance_name)
}
 ::std::string* Simu::mutable_instance_name() {
  
  // @@protoc_insertion_point(field_mutable:ecma_protoc.Simu.instance_name)
  return instance_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Simu::release_instance_name() {
  
  return instance_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Simu::set_allocated_instance_name(::std::string* instance_name) {
  if (instance_name != NULL) {
    
  } else {
    
  }
  instance_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), instance_name);
  // @@protoc_insertion_point(field_set_allocated:ecma_protoc.Simu.instance_name)
}

// optional int64 id_time = 2;
void Simu::clear_id_time() {
  id_time_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 Simu::id_time() const {
  // @@protoc_insertion_point(field_get:ecma_protoc.Simu.id_time)
  return id_time_;
}
 void Simu::set_id_time(::google::protobuf::int64 value) {
  
  id_time_ = value;
  // @@protoc_insertion_point(field_set:ecma_protoc.Simu.id_time)
}

// optional .ecma_protoc.Simu.Solver solver = 3;
void Simu::clear_solver() {
  solver_ = 0;
}
 ::ecma_protoc::Simu_Solver Simu::solver() const {
  // @@protoc_insertion_point(field_get:ecma_protoc.Simu.solver)
  return static_cast< ::ecma_protoc::Simu_Solver >(solver_);
}
 void Simu::set_solver(::ecma_protoc::Simu_Solver value) {
  
  solver_ = value;
  // @@protoc_insertion_point(field_set:ecma_protoc.Simu.solver)
}

// optional int32 cost = 4;
void Simu::clear_cost() {
  cost_ = 0;
}
 ::google::protobuf::int32 Simu::cost() const {
  // @@protoc_insertion_point(field_get:ecma_protoc.Simu.cost)
  return cost_;
}
 void Simu::set_cost(::google::protobuf::int32 value) {
  
  cost_ = value;
  // @@protoc_insertion_point(field_set:ecma_protoc.Simu.cost)
}

// optional int32 time = 5;
void Simu::clear_time() {
  time_ = 0;
}
 ::google::protobuf::int32 Simu::time() const {
  // @@protoc_insertion_point(field_get:ecma_protoc.Simu.time)
  return time_;
}
 void Simu::set_time(::google::protobuf::int32 value) {
  
  time_ = value;
  // @@protoc_insertion_point(field_set:ecma_protoc.Simu.time)
}

// repeated .ecma_protoc.Simu.LinesSol x = 6;
int Simu::x_size() const {
  return x_.size();
}
void Simu::clear_x() {
  x_.Clear();
}
const ::ecma_protoc::Simu_LinesSol& Simu::x(int index) const {
  // @@protoc_insertion_point(field_get:ecma_protoc.Simu.x)
  return x_.Get(index);
}
::ecma_protoc::Simu_LinesSol* Simu::mutable_x(int index) {
  // @@protoc_insertion_point(field_mutable:ecma_protoc.Simu.x)
  return x_.Mutable(index);
}
::ecma_protoc::Simu_LinesSol* Simu::add_x() {
  // @@protoc_insertion_point(field_add:ecma_protoc.Simu.x)
  return x_.Add();
}
::google::protobuf::RepeatedPtrField< ::ecma_protoc::Simu_LinesSol >*
Simu::mutable_x() {
  // @@protoc_insertion_point(field_mutable_list:ecma_protoc.Simu.x)
  return &x_;
}
const ::google::protobuf::RepeatedPtrField< ::ecma_protoc::Simu_LinesSol >&
Simu::x() const {
  // @@protoc_insertion_point(field_list:ecma_protoc.Simu.x)
  return x_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Results::kSimuFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Results::Results()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ecma_protoc.Results)
}

void Results::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Results::Results(const Results& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ecma_protoc.Results)
}

void Results::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

Results::~Results() {
  // @@protoc_insertion_point(destructor:ecma_protoc.Results)
  SharedDtor();
}

void Results::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Results::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Results::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Results_descriptor_;
}

const Results& Results::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_results_5fformat_2eproto();
  return *default_instance_;
}

Results* Results::default_instance_ = NULL;

Results* Results::New(::google::protobuf::Arena* arena) const {
  Results* n = new Results;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Results::Clear() {
  simu_.Clear();
}

bool Results::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ecma_protoc.Results)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ecma_protoc.Simu simu = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_simu:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_simu()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_simu;
        input->UnsafeDecrementRecursionDepth();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ecma_protoc.Results)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ecma_protoc.Results)
  return false;
#undef DO_
}

void Results::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ecma_protoc.Results)
  // repeated .ecma_protoc.Simu simu = 1;
  for (unsigned int i = 0, n = this->simu_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->simu(i), output);
  }

  // @@protoc_insertion_point(serialize_end:ecma_protoc.Results)
}

::google::protobuf::uint8* Results::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ecma_protoc.Results)
  // repeated .ecma_protoc.Simu simu = 1;
  for (unsigned int i = 0, n = this->simu_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->simu(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ecma_protoc.Results)
  return target;
}

int Results::ByteSize() const {
  int total_size = 0;

  // repeated .ecma_protoc.Simu simu = 1;
  total_size += 1 * this->simu_size();
  for (int i = 0; i < this->simu_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->simu(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Results::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Results* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Results>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Results::MergeFrom(const Results& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  simu_.MergeFrom(from.simu_);
}

void Results::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Results::CopyFrom(const Results& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Results::IsInitialized() const {

  return true;
}

void Results::Swap(Results* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Results::InternalSwap(Results* other) {
  simu_.UnsafeArenaSwap(&other->simu_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Results::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Results_descriptor_;
  metadata.reflection = Results_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Results

// repeated .ecma_protoc.Simu simu = 1;
int Results::simu_size() const {
  return simu_.size();
}
void Results::clear_simu() {
  simu_.Clear();
}
const ::ecma_protoc::Simu& Results::simu(int index) const {
  // @@protoc_insertion_point(field_get:ecma_protoc.Results.simu)
  return simu_.Get(index);
}
::ecma_protoc::Simu* Results::mutable_simu(int index) {
  // @@protoc_insertion_point(field_mutable:ecma_protoc.Results.simu)
  return simu_.Mutable(index);
}
::ecma_protoc::Simu* Results::add_simu() {
  // @@protoc_insertion_point(field_add:ecma_protoc.Results.simu)
  return simu_.Add();
}
::google::protobuf::RepeatedPtrField< ::ecma_protoc::Simu >*
Results::mutable_simu() {
  // @@protoc_insertion_point(field_mutable_list:ecma_protoc.Results.simu)
  return &simu_;
}
const ::google::protobuf::RepeatedPtrField< ::ecma_protoc::Simu >&
Results::simu() const {
  // @@protoc_insertion_point(field_list:ecma_protoc.Results.simu)
  return simu_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ecma_protoc

// @@protoc_insertion_point(global_scope)
