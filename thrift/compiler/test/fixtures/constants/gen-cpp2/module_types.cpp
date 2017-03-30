/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.tcc"

#include <algorithm>

#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_data.h"



namespace cpp2 {

const typename apache::thrift::detail::TEnumMapFactory<EmptyEnum, EmptyEnum>::ValuesToNamesMapType _EmptyEnum_VALUES_TO_NAMES = apache::thrift::detail::TEnumMapFactory<EmptyEnum, EmptyEnum>::makeValuesToNamesMap();
const typename apache::thrift::detail::TEnumMapFactory<EmptyEnum, EmptyEnum>::NamesToValuesMapType _EmptyEnum_NAMES_TO_VALUES = apache::thrift::detail::TEnumMapFactory<EmptyEnum, EmptyEnum>::makeNamesToValuesMap();

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraitsBase< ::cpp2::EmptyEnum>::size = 0;
template <> const folly::Range<const  ::cpp2::EmptyEnum*> TEnumTraitsBase< ::cpp2::EmptyEnum>::values = {};
template <> const folly::Range<const folly::StringPiece*> TEnumTraitsBase< ::cpp2::EmptyEnum>::names = {};
template <> const char* TEnumTraitsBase< ::cpp2::EmptyEnum>::findName( ::cpp2::EmptyEnum value) {
  return findName( ::cpp2::_EmptyEnum_VALUES_TO_NAMES, value);
}

template <> bool TEnumTraitsBase< ::cpp2::EmptyEnum>::findValue(const char* name,  ::cpp2::EmptyEnum* outValue) {
  return findValue( ::cpp2::_EmptyEnum_NAMES_TO_VALUES, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

const typename apache::thrift::detail::TEnumMapFactory<City, City>::ValuesToNamesMapType _City_VALUES_TO_NAMES = apache::thrift::detail::TEnumMapFactory<City, City>::makeValuesToNamesMap();
const typename apache::thrift::detail::TEnumMapFactory<City, City>::NamesToValuesMapType _City_NAMES_TO_VALUES = apache::thrift::detail::TEnumMapFactory<City, City>::makeNamesToValuesMap();

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraitsBase< ::cpp2::City>::size = 4;
template <> const folly::Range<const  ::cpp2::City*> TEnumTraitsBase< ::cpp2::City>::values = folly::range( ::cpp2::_CityEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraitsBase< ::cpp2::City>::names = folly::range( ::cpp2::_CityEnumDataStorage::names);
template <> const char* TEnumTraitsBase< ::cpp2::City>::findName( ::cpp2::City value) {
  return findName( ::cpp2::_City_VALUES_TO_NAMES, value);
}

template <> bool TEnumTraitsBase< ::cpp2::City>::findValue(const char* name,  ::cpp2::City* outValue) {
  return findValue( ::cpp2::_City_NAMES_TO_VALUES, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

const typename apache::thrift::detail::TEnumMapFactory<Company, Company>::ValuesToNamesMapType _Company_VALUES_TO_NAMES = apache::thrift::detail::TEnumMapFactory<Company, Company>::makeValuesToNamesMap();
const typename apache::thrift::detail::TEnumMapFactory<Company, Company>::NamesToValuesMapType _Company_NAMES_TO_VALUES = apache::thrift::detail::TEnumMapFactory<Company, Company>::makeNamesToValuesMap();

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraitsBase< ::cpp2::Company>::size = 4;
template <> const folly::Range<const  ::cpp2::Company*> TEnumTraitsBase< ::cpp2::Company>::values = folly::range( ::cpp2::_CompanyEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraitsBase< ::cpp2::Company>::names = folly::range( ::cpp2::_CompanyEnumDataStorage::names);
template <> const char* TEnumTraitsBase< ::cpp2::Company>::findName( ::cpp2::Company value) {
  return findName( ::cpp2::_Company_VALUES_TO_NAMES, value);
}

template <> bool TEnumTraitsBase< ::cpp2::Company>::findValue(const char* name,  ::cpp2::Company* outValue) {
  return findValue( ::cpp2::_Company_NAMES_TO_VALUES, name, outValue);
}

}} // apache::thrift
namespace cpp2 {

void Internship::__clear() {
  // clear all fields
  weeks = 0;
  title = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  employer =  ::cpp2::Company::FACEBOOK;
  __isset.__clear();
}

bool Internship::operator==(const Internship& rhs) const {
  if (!((weeks == rhs.weeks))) {
    return false;
  }
  if (!((title == rhs.title))) {
    return false;
  }
  if (__isset.employer != rhs.__isset.employer) {
    return false;
  }
  else if (__isset.employer && !((employer == rhs.employer))) {
    return false;
  }
  return true;
}

void swap(Internship& a, Internship& b) {
  using ::std::swap;
  swap(a.weeks, b.weeks);
  swap(a.title, b.title);
  swap(a.employer, b.employer);
  swap(a.__isset, b.__isset);
}

template uint32_t Internship::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Internship::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Internship::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Internship::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Internship::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t Internship::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Internship::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Internship::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void UnEnumStruct::__clear() {
  // clear all fields
  city = static_cast< ::cpp2::City>(-1);
  __isset.__clear();
}

bool UnEnumStruct::operator==(const UnEnumStruct& rhs) const {
  if (!((city == rhs.city))) {
    return false;
  }
  return true;
}

void swap(UnEnumStruct& a, UnEnumStruct& b) {
  using ::std::swap;
  swap(a.city, b.city);
  swap(a.__isset, b.__isset);
}

template uint32_t UnEnumStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t UnEnumStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t UnEnumStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t UnEnumStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t UnEnumStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t UnEnumStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t UnEnumStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t UnEnumStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void Range::__clear() {
  // clear all fields
  min = 0;
  max = 0;
}

bool Range::operator==(const Range& rhs) const {
  if (!((min == rhs.min))) {
    return false;
  }
  if (!((max == rhs.max))) {
    return false;
  }
  return true;
}

void swap(Range& a, Range& b) {
  using ::std::swap;
  swap(a.min, b.min);
  swap(a.max, b.max);
}

template uint32_t Range::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Range::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Range::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Range::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Range::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t Range::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Range::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Range::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
