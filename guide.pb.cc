// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: guide.proto

#include "guide.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class CarStateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CarState> _instance;
} _CarState_default_instance_;
class StepDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Step> _instance;
} _Step_default_instance_;
static void InitDefaultsscc_info_CarState_guide_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_CarState_default_instance_;
    new (ptr) ::CarState();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::CarState::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CarState_guide_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CarState_guide_2eproto}, {}};

static void InitDefaultsscc_info_Step_guide_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Step_default_instance_;
    new (ptr) ::Step();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Step::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Step_guide_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Step_guide_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_guide_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_guide_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_guide_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_guide_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::CarState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::CarState, car_id_),
  PROTOBUF_FIELD_OFFSET(::CarState, cur_row_idx_),
  PROTOBUF_FIELD_OFFSET(::CarState, cur_col_idx_),
  PROTOBUF_FIELD_OFFSET(::CarState, goal_row_idx_),
  PROTOBUF_FIELD_OFFSET(::CarState, goal_col_idx_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Step, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Step, step_code_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::CarState)},
  { 10, -1, sizeof(::Step)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CarState_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Step_default_instance_),
};

const char descriptor_table_protodef_guide_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013guide.proto\"p\n\010CarState\022\016\n\006car_id\030\001 \001("
  "\005\022\023\n\013cur_row_idx\030\002 \001(\005\022\023\n\013cur_col_idx\030\003 "
  "\001(\005\022\024\n\014goal_row_idx\030\004 \001(\005\022\024\n\014goal_col_id"
  "x\030\005 \001(\005\"o\n\004Step\022!\n\tstep_code\030\001 \001(\0162\016.Ste"
  "p.StepCode\"D\n\010StepCode\022\010\n\004LEFT\020\000\022\t\n\005RIGH"
  "T\020\001\022\013\n\007FORWARD\020\002\022\014\n\010BACKWARD\020\003\022\010\n\004STOP\020\004"
  "2*\n\005Guide\022!\n\013GetNextStep\022\t.CarState\032\005.St"
  "ep\"\000b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_guide_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_guide_2eproto_sccs[2] = {
  &scc_info_CarState_guide_2eproto.base,
  &scc_info_Step_guide_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_guide_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_guide_2eproto = {
  false, false, descriptor_table_protodef_guide_2eproto, "guide.proto", 292,
  &descriptor_table_guide_2eproto_once, descriptor_table_guide_2eproto_sccs, descriptor_table_guide_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_guide_2eproto::offsets,
  file_level_metadata_guide_2eproto, 2, file_level_enum_descriptors_guide_2eproto, file_level_service_descriptors_guide_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_guide_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_guide_2eproto)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Step_StepCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_guide_2eproto);
  return file_level_enum_descriptors_guide_2eproto[0];
}
bool Step_StepCode_IsValid(int value) {
  switch (value) {
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

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr Step_StepCode Step::LEFT;
constexpr Step_StepCode Step::RIGHT;
constexpr Step_StepCode Step::FORWARD;
constexpr Step_StepCode Step::BACKWARD;
constexpr Step_StepCode Step::STOP;
constexpr Step_StepCode Step::StepCode_MIN;
constexpr Step_StepCode Step::StepCode_MAX;
constexpr int Step::StepCode_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void CarState::InitAsDefaultInstance() {
}
class CarState::_Internal {
 public:
};

CarState::CarState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:CarState)
}
CarState::CarState(const CarState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&car_id_, &from.car_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&goal_col_idx_) -
    reinterpret_cast<char*>(&car_id_)) + sizeof(goal_col_idx_));
  // @@protoc_insertion_point(copy_constructor:CarState)
}

void CarState::SharedCtor() {
  ::memset(&car_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&goal_col_idx_) -
      reinterpret_cast<char*>(&car_id_)) + sizeof(goal_col_idx_));
}

CarState::~CarState() {
  // @@protoc_insertion_point(destructor:CarState)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CarState::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void CarState::ArenaDtor(void* object) {
  CarState* _this = reinterpret_cast< CarState* >(object);
  (void)_this;
}
void CarState::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CarState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CarState& CarState::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CarState_guide_2eproto.base);
  return *internal_default_instance();
}


void CarState::Clear() {
// @@protoc_insertion_point(message_clear_start:CarState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&car_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&goal_col_idx_) -
      reinterpret_cast<char*>(&car_id_)) + sizeof(goal_col_idx_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CarState::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 car_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          car_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 cur_row_idx = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          cur_row_idx_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 cur_col_idx = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          cur_col_idx_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 goal_row_idx = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          goal_row_idx_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 goal_col_idx = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          goal_col_idx_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CarState::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CarState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 car_id = 1;
  if (this->car_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_car_id(), target);
  }

  // int32 cur_row_idx = 2;
  if (this->cur_row_idx() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_cur_row_idx(), target);
  }

  // int32 cur_col_idx = 3;
  if (this->cur_col_idx() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_cur_col_idx(), target);
  }

  // int32 goal_row_idx = 4;
  if (this->goal_row_idx() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_goal_row_idx(), target);
  }

  // int32 goal_col_idx = 5;
  if (this->goal_col_idx() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_goal_col_idx(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CarState)
  return target;
}

size_t CarState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CarState)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 car_id = 1;
  if (this->car_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_car_id());
  }

  // int32 cur_row_idx = 2;
  if (this->cur_row_idx() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_cur_row_idx());
  }

  // int32 cur_col_idx = 3;
  if (this->cur_col_idx() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_cur_col_idx());
  }

  // int32 goal_row_idx = 4;
  if (this->goal_row_idx() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_goal_row_idx());
  }

  // int32 goal_col_idx = 5;
  if (this->goal_col_idx() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_goal_col_idx());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CarState::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CarState)
  GOOGLE_DCHECK_NE(&from, this);
  const CarState* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CarState>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CarState)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CarState)
    MergeFrom(*source);
  }
}

void CarState::MergeFrom(const CarState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CarState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.car_id() != 0) {
    _internal_set_car_id(from._internal_car_id());
  }
  if (from.cur_row_idx() != 0) {
    _internal_set_cur_row_idx(from._internal_cur_row_idx());
  }
  if (from.cur_col_idx() != 0) {
    _internal_set_cur_col_idx(from._internal_cur_col_idx());
  }
  if (from.goal_row_idx() != 0) {
    _internal_set_goal_row_idx(from._internal_goal_row_idx());
  }
  if (from.goal_col_idx() != 0) {
    _internal_set_goal_col_idx(from._internal_goal_col_idx());
  }
}

void CarState::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CarState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CarState::CopyFrom(const CarState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CarState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CarState::IsInitialized() const {
  return true;
}

void CarState::InternalSwap(CarState* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CarState, goal_col_idx_)
      + sizeof(CarState::goal_col_idx_)
      - PROTOBUF_FIELD_OFFSET(CarState, car_id_)>(
          reinterpret_cast<char*>(&car_id_),
          reinterpret_cast<char*>(&other->car_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CarState::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Step::InitAsDefaultInstance() {
}
class Step::_Internal {
 public:
};

Step::Step(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:Step)
}
Step::Step(const Step& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  step_code_ = from.step_code_;
  // @@protoc_insertion_point(copy_constructor:Step)
}

void Step::SharedCtor() {
  step_code_ = 0;
}

Step::~Step() {
  // @@protoc_insertion_point(destructor:Step)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Step::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Step::ArenaDtor(void* object) {
  Step* _this = reinterpret_cast< Step* >(object);
  (void)_this;
}
void Step::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Step::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Step& Step::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Step_guide_2eproto.base);
  return *internal_default_instance();
}


void Step::Clear() {
// @@protoc_insertion_point(message_clear_start:Step)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  step_code_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Step::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .Step.StepCode step_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_step_code(static_cast<::Step_StepCode>(val));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Step::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Step)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .Step.StepCode step_code = 1;
  if (this->step_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_step_code(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Step)
  return target;
}

size_t Step::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Step)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .Step.StepCode step_code = 1;
  if (this->step_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_step_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Step::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Step)
  GOOGLE_DCHECK_NE(&from, this);
  const Step* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Step>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Step)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Step)
    MergeFrom(*source);
  }
}

void Step::MergeFrom(const Step& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Step)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.step_code() != 0) {
    _internal_set_step_code(from._internal_step_code());
  }
}

void Step::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Step)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Step::CopyFrom(const Step& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Step)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Step::IsInitialized() const {
  return true;
}

void Step::InternalSwap(Step* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(step_code_, other->step_code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Step::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::CarState* Arena::CreateMaybeMessage< ::CarState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::CarState >(arena);
}
template<> PROTOBUF_NOINLINE ::Step* Arena::CreateMaybeMessage< ::Step >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Step >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
