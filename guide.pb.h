// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: guide.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_guide_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_guide_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_guide_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_guide_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_guide_2eproto;
class CarState;
class CarStateDefaultTypeInternal;
extern CarStateDefaultTypeInternal _CarState_default_instance_;
class Step;
class StepDefaultTypeInternal;
extern StepDefaultTypeInternal _Step_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::CarState* Arena::CreateMaybeMessage<::CarState>(Arena*);
template<> ::Step* Arena::CreateMaybeMessage<::Step>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Step_StepCode : int {
  Step_StepCode_LEFT = 0,
  Step_StepCode_RIGHT = 1,
  Step_StepCode_FORWARD = 2,
  Step_StepCode_BACKWARD = 3,
  Step_StepCode_STOP = 4,
  Step_StepCode_Step_StepCode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Step_StepCode_Step_StepCode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Step_StepCode_IsValid(int value);
constexpr Step_StepCode Step_StepCode_StepCode_MIN = Step_StepCode_LEFT;
constexpr Step_StepCode Step_StepCode_StepCode_MAX = Step_StepCode_STOP;
constexpr int Step_StepCode_StepCode_ARRAYSIZE = Step_StepCode_StepCode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Step_StepCode_descriptor();
template<typename T>
inline const std::string& Step_StepCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Step_StepCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Step_StepCode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Step_StepCode_descriptor(), enum_t_value);
}
inline bool Step_StepCode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Step_StepCode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Step_StepCode>(
    Step_StepCode_descriptor(), name, value);
}
// ===================================================================

class CarState PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CarState) */ {
 public:
  inline CarState() : CarState(nullptr) {}
  virtual ~CarState();

  CarState(const CarState& from);
  CarState(CarState&& from) noexcept
    : CarState() {
    *this = ::std::move(from);
  }

  inline CarState& operator=(const CarState& from) {
    CopyFrom(from);
    return *this;
  }
  inline CarState& operator=(CarState&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CarState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CarState* internal_default_instance() {
    return reinterpret_cast<const CarState*>(
               &_CarState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CarState& a, CarState& b) {
    a.Swap(&b);
  }
  inline void Swap(CarState* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CarState* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CarState* New() const final {
    return CreateMaybeMessage<CarState>(nullptr);
  }

  CarState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CarState>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CarState& from);
  void MergeFrom(const CarState& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CarState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CarState";
  }
  protected:
  explicit CarState(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_guide_2eproto);
    return ::descriptor_table_guide_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCarIdFieldNumber = 1,
    kCurRowIdxFieldNumber = 2,
    kCurColIdxFieldNumber = 3,
    kGoalRowIdxFieldNumber = 4,
    kGoalColIdxFieldNumber = 5,
  };
  // int32 car_id = 1;
  void clear_car_id();
  ::PROTOBUF_NAMESPACE_ID::int32 car_id() const;
  void set_car_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_car_id() const;
  void _internal_set_car_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 cur_row_idx = 2;
  void clear_cur_row_idx();
  ::PROTOBUF_NAMESPACE_ID::int32 cur_row_idx() const;
  void set_cur_row_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_cur_row_idx() const;
  void _internal_set_cur_row_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 cur_col_idx = 3;
  void clear_cur_col_idx();
  ::PROTOBUF_NAMESPACE_ID::int32 cur_col_idx() const;
  void set_cur_col_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_cur_col_idx() const;
  void _internal_set_cur_col_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 goal_row_idx = 4;
  void clear_goal_row_idx();
  ::PROTOBUF_NAMESPACE_ID::int32 goal_row_idx() const;
  void set_goal_row_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_goal_row_idx() const;
  void _internal_set_goal_row_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 goal_col_idx = 5;
  void clear_goal_col_idx();
  ::PROTOBUF_NAMESPACE_ID::int32 goal_col_idx() const;
  void set_goal_col_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_goal_col_idx() const;
  void _internal_set_goal_col_idx(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:CarState)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 car_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 cur_row_idx_;
  ::PROTOBUF_NAMESPACE_ID::int32 cur_col_idx_;
  ::PROTOBUF_NAMESPACE_ID::int32 goal_row_idx_;
  ::PROTOBUF_NAMESPACE_ID::int32 goal_col_idx_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_guide_2eproto;
};
// -------------------------------------------------------------------

class Step PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Step) */ {
 public:
  inline Step() : Step(nullptr) {}
  virtual ~Step();

  Step(const Step& from);
  Step(Step&& from) noexcept
    : Step() {
    *this = ::std::move(from);
  }

  inline Step& operator=(const Step& from) {
    CopyFrom(from);
    return *this;
  }
  inline Step& operator=(Step&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Step& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Step* internal_default_instance() {
    return reinterpret_cast<const Step*>(
               &_Step_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Step& a, Step& b) {
    a.Swap(&b);
  }
  inline void Swap(Step* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Step* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Step* New() const final {
    return CreateMaybeMessage<Step>(nullptr);
  }

  Step* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Step>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Step& from);
  void MergeFrom(const Step& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Step* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Step";
  }
  protected:
  explicit Step(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_guide_2eproto);
    return ::descriptor_table_guide_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Step_StepCode StepCode;
  static constexpr StepCode LEFT =
    Step_StepCode_LEFT;
  static constexpr StepCode RIGHT =
    Step_StepCode_RIGHT;
  static constexpr StepCode FORWARD =
    Step_StepCode_FORWARD;
  static constexpr StepCode BACKWARD =
    Step_StepCode_BACKWARD;
  static constexpr StepCode STOP =
    Step_StepCode_STOP;
  static inline bool StepCode_IsValid(int value) {
    return Step_StepCode_IsValid(value);
  }
  static constexpr StepCode StepCode_MIN =
    Step_StepCode_StepCode_MIN;
  static constexpr StepCode StepCode_MAX =
    Step_StepCode_StepCode_MAX;
  static constexpr int StepCode_ARRAYSIZE =
    Step_StepCode_StepCode_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  StepCode_descriptor() {
    return Step_StepCode_descriptor();
  }
  template<typename T>
  static inline const std::string& StepCode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, StepCode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function StepCode_Name.");
    return Step_StepCode_Name(enum_t_value);
  }
  static inline bool StepCode_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      StepCode* value) {
    return Step_StepCode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kStepCodeFieldNumber = 1,
  };
  // .Step.StepCode step_code = 1;
  void clear_step_code();
  ::Step_StepCode step_code() const;
  void set_step_code(::Step_StepCode value);
  private:
  ::Step_StepCode _internal_step_code() const;
  void _internal_set_step_code(::Step_StepCode value);
  public:

  // @@protoc_insertion_point(class_scope:Step)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int step_code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_guide_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CarState

// int32 car_id = 1;
inline void CarState::clear_car_id() {
  car_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::_internal_car_id() const {
  return car_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::car_id() const {
  // @@protoc_insertion_point(field_get:CarState.car_id)
  return _internal_car_id();
}
inline void CarState::_internal_set_car_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  car_id_ = value;
}
inline void CarState::set_car_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_car_id(value);
  // @@protoc_insertion_point(field_set:CarState.car_id)
}

// int32 cur_row_idx = 2;
inline void CarState::clear_cur_row_idx() {
  cur_row_idx_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::_internal_cur_row_idx() const {
  return cur_row_idx_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::cur_row_idx() const {
  // @@protoc_insertion_point(field_get:CarState.cur_row_idx)
  return _internal_cur_row_idx();
}
inline void CarState::_internal_set_cur_row_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cur_row_idx_ = value;
}
inline void CarState::set_cur_row_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_cur_row_idx(value);
  // @@protoc_insertion_point(field_set:CarState.cur_row_idx)
}

// int32 cur_col_idx = 3;
inline void CarState::clear_cur_col_idx() {
  cur_col_idx_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::_internal_cur_col_idx() const {
  return cur_col_idx_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::cur_col_idx() const {
  // @@protoc_insertion_point(field_get:CarState.cur_col_idx)
  return _internal_cur_col_idx();
}
inline void CarState::_internal_set_cur_col_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cur_col_idx_ = value;
}
inline void CarState::set_cur_col_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_cur_col_idx(value);
  // @@protoc_insertion_point(field_set:CarState.cur_col_idx)
}

// int32 goal_row_idx = 4;
inline void CarState::clear_goal_row_idx() {
  goal_row_idx_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::_internal_goal_row_idx() const {
  return goal_row_idx_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::goal_row_idx() const {
  // @@protoc_insertion_point(field_get:CarState.goal_row_idx)
  return _internal_goal_row_idx();
}
inline void CarState::_internal_set_goal_row_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  goal_row_idx_ = value;
}
inline void CarState::set_goal_row_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_goal_row_idx(value);
  // @@protoc_insertion_point(field_set:CarState.goal_row_idx)
}

// int32 goal_col_idx = 5;
inline void CarState::clear_goal_col_idx() {
  goal_col_idx_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::_internal_goal_col_idx() const {
  return goal_col_idx_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 CarState::goal_col_idx() const {
  // @@protoc_insertion_point(field_get:CarState.goal_col_idx)
  return _internal_goal_col_idx();
}
inline void CarState::_internal_set_goal_col_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  goal_col_idx_ = value;
}
inline void CarState::set_goal_col_idx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_goal_col_idx(value);
  // @@protoc_insertion_point(field_set:CarState.goal_col_idx)
}

// -------------------------------------------------------------------

// Step

// .Step.StepCode step_code = 1;
inline void Step::clear_step_code() {
  step_code_ = 0;
}
inline ::Step_StepCode Step::_internal_step_code() const {
  return static_cast< ::Step_StepCode >(step_code_);
}
inline ::Step_StepCode Step::step_code() const {
  // @@protoc_insertion_point(field_get:Step.step_code)
  return _internal_step_code();
}
inline void Step::_internal_set_step_code(::Step_StepCode value) {
  
  step_code_ = value;
}
inline void Step::set_step_code(::Step_StepCode value) {
  _internal_set_step_code(value);
  // @@protoc_insertion_point(field_set:Step.step_code)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Step_StepCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Step_StepCode>() {
  return ::Step_StepCode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_guide_2eproto
