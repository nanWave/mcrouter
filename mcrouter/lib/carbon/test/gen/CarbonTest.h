/*
 *  Copyright (c) 2016, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 */
#pragma once

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CarbonProtocolWriter.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>

namespace carbon {
namespace test {

enum class SimpleEnum : int64_t {
  Twenty = 20,
  Zero = 0,
  One = 1,
  Negative = -92233
};

class SimpleStruct {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;

  SimpleStruct() = default;
  SimpleStruct(const SimpleStruct&) = default;
  SimpleStruct& operator=(const SimpleStruct&) = default;
  SimpleStruct(SimpleStruct&&) = default;
  SimpleStruct& operator=(SimpleStruct&&) = default;

  int32_t int32Member() const {
    return int32Member_;
  }
  int32_t& int32Member() {
    return int32Member_;
  }
  const std::string& stringMember() const {
    return stringMember_;
  }
  std::string& stringMember() {
    return stringMember_;
  }
  const SimpleEnum& enumMember() const {
    return enumMember_;
  }
  SimpleEnum& enumMember() {
    return enumMember_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

 private:
  int32_t int32Member_{0};
  std::string stringMember_;
  SimpleEnum enumMember_{SimpleEnum::Twenty};
};

class TestReply;

class TestRequest : public carbon::RequestCommon {
 public:
  using reply_type = TestReply;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 65;
  static constexpr const char* name = "test";

  TestRequest() = default;
  TestRequest(const TestRequest&) = default;
  TestRequest& operator=(const TestRequest&) = default;
  TestRequest(TestRequest&&) = default;
  TestRequest& operator=(TestRequest&&) = default;
  explicit TestRequest(folly::StringPiece sp) : key_(sp) {}
  explicit TestRequest(folly::IOBuf&& carbonKey) : key_(std::move(carbonKey)) {}

  SimpleStruct& asBase() {
    return _carbon_simplestruct_;
  }
  const SimpleStruct& asBase() const {
    return _carbon_simplestruct_;
  }
  int32_t int32Member() const {
    return _carbon_simplestruct_.int32Member();
  }
  int32_t& int32Member() {
    return _carbon_simplestruct_.int32Member();
  }
  const std::string& stringMember() const {
    return _carbon_simplestruct_.stringMember();
  }
  std::string& stringMember() {
    return _carbon_simplestruct_.stringMember();
  }
  const SimpleEnum& enumMember() const {
    return _carbon_simplestruct_.enumMember();
  }
  SimpleEnum& enumMember() {
    return _carbon_simplestruct_.enumMember();
  }
  const carbon::Keys<folly::IOBuf>& key() const {
    return key_;
  }
  carbon::Keys<folly::IOBuf>& key() {
    return key_;
  }
  const SimpleEnum& testEnum() const {
    return testEnum_;
  }
  SimpleEnum& testEnum() {
    return testEnum_;
  }
  bool testBool() const {
    return testBool_;
  }
  bool& testBool() {
    return testBool_;
  }
  char testChar() const {
    return testChar_;
  }
  char& testChar() {
    return testChar_;
  }
  int8_t testInt8() const {
    return testInt8_;
  }
  int8_t& testInt8() {
    return testInt8_;
  }
  int16_t testInt16() const {
    return testInt16_;
  }
  int16_t& testInt16() {
    return testInt16_;
  }
  int32_t testInt32() const {
    return testInt32_;
  }
  int32_t& testInt32() {
    return testInt32_;
  }
  int64_t testInt64() const {
    return testInt64_;
  }
  int64_t& testInt64() {
    return testInt64_;
  }
  uint8_t testUInt8() const {
    return testUInt8_;
  }
  uint8_t& testUInt8() {
    return testUInt8_;
  }
  uint16_t testUInt16() const {
    return testUInt16_;
  }
  uint16_t& testUInt16() {
    return testUInt16_;
  }
  uint32_t testUInt32() const {
    return testUInt32_;
  }
  uint32_t& testUInt32() {
    return testUInt32_;
  }
  uint64_t testUInt64() const {
    return testUInt64_;
  }
  uint64_t& testUInt64() {
    return testUInt64_;
  }
  float testFloat() const {
    return testFloat_;
  }
  float& testFloat() {
    return testFloat_;
  }
  double testDouble() const {
    return testDouble_;
  }
  double& testDouble() {
    return testDouble_;
  }
  const std::string& testShortString() const {
    return testShortString_;
  }
  std::string& testShortString() {
    return testShortString_;
  }
  const std::string& testLongString() const {
    return testLongString_;
  }
  std::string& testLongString() {
    return testLongString_;
  }
  const folly::IOBuf& testIobuf() const {
    return testIobuf_;
  }
  folly::IOBuf& testIobuf() {
    return testIobuf_;
  }
  const SimpleStruct& testStruct() const {
    return testStruct_;
  }
  SimpleStruct& testStruct() {
    return testStruct_;
  }
  const std::vector<std::string>& testList() const {
    return testList_;
  }
  std::vector<std::string>& testList() {
    return testList_;
  }
  const folly::Optional<std::string>& testOptionalString() const {
    return testOptionalString_;
  }
  folly::Optional<std::string>& testOptionalString() {
    return testOptionalString_;
  }
  const folly::Optional<folly::IOBuf>& testOptionalIobuf() const {
    return testOptionalIobuf_;
  }
  folly::Optional<folly::IOBuf>& testOptionalIobuf() {
    return testOptionalIobuf_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

 private:
  SimpleStruct _carbon_simplestruct_;
  carbon::Keys<folly::IOBuf> key_;
  SimpleEnum testEnum_{SimpleEnum::Twenty};
  bool testBool_{false};
  char testChar_{'\0'};
  int8_t testInt8_{0};
  int16_t testInt16_{0};
  int32_t testInt32_{0};
  int64_t testInt64_{0};
  uint8_t testUInt8_{0};
  uint16_t testUInt16_{0};
  uint32_t testUInt32_{0};
  uint64_t testUInt64_{0};
  float testFloat_{0.0};
  double testDouble_{0.0};
  std::string testShortString_;
  std::string testLongString_;
  folly::IOBuf testIobuf_;
  SimpleStruct testStruct_;
  std::vector<std::string> testList_;
  folly::Optional<std::string> testOptionalString_;
  folly::Optional<folly::IOBuf> testOptionalIobuf_;
};

class TestReply : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 66;

  TestReply() = default;
  TestReply(const TestReply&) = default;
  TestReply& operator=(const TestReply&) = default;
  TestReply(TestReply&&) = default;
  TestReply& operator=(TestReply&&) = default;
  explicit TestReply(carbon::Result carbonResult) : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

 private:
  carbon::Result result_{mc_res_unknown};
};

} // test
} // carbon

#include "CarbonTest-inl.h"
