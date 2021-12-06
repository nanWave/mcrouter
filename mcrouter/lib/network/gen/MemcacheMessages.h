/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>
#include <mcrouter/lib/carbon/TypeList.h>
#include <mcrouter/lib/carbon/Variant.h>

#include "mcrouter/lib/network/gen/gen-cpp2/Memcache_types.h"

#include "mcrouter/lib/network/gen/CommonMessages.h"

namespace facebook {
namespace memcache {

using MemcacheRequestCommon = facebook::memcache::thrift::MemcacheRequestCommon;

class McGetReply;

class McGetRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McGetRequest {
 public:
  using reply_type = McGetReply;

  static constexpr size_t typeId = 1;
  static constexpr const char* name = "get";

  McGetRequest() = default;
  McGetRequest(const McGetRequest&) = default;
  McGetRequest& operator=(const McGetRequest&) = default;
  McGetRequest(McGetRequest&&) = default;
  McGetRequest& operator=(McGetRequest&&) = default;
  explicit McGetRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McGetRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McGetRequest>;

};

class McGetReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McGetReply {
 public:

  static constexpr size_t typeId = 2;

  McGetReply() = default;
  McGetReply(const McGetReply&) = default;
  McGetReply& operator=(const McGetReply&) = default;
  McGetReply(McGetReply&&) = default;
  McGetReply& operator=(McGetReply&&) = default;
  explicit McGetReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McGetReply>;

};

class McSetReply;

class McSetRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McSetRequest {
 public:
  using reply_type = McSetReply;

  static constexpr size_t typeId = 3;
  static constexpr const char* name = "set";

  McSetRequest() = default;
  McSetRequest(const McSetRequest&) = default;
  McSetRequest& operator=(const McSetRequest&) = default;
  McSetRequest(McSetRequest&&) = default;
  McSetRequest& operator=(McSetRequest&&) = default;
  explicit McSetRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McSetRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McSetRequest>;

};

class McSetReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McSetReply {
 public:

  static constexpr size_t typeId = 4;

  McSetReply() = default;
  McSetReply(const McSetReply&) = default;
  McSetReply& operator=(const McSetReply&) = default;
  McSetReply(McSetReply&&) = default;
  McSetReply& operator=(McSetReply&&) = default;
  explicit McSetReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McSetReply>;

};

class McDeleteReply;

class McDeleteRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McDeleteRequest {
 public:
  using reply_type = McDeleteReply;

  static constexpr size_t typeId = 5;
  static constexpr const char* name = "delete";

  McDeleteRequest() = default;
  McDeleteRequest(const McDeleteRequest&) = default;
  McDeleteRequest& operator=(const McDeleteRequest&) = default;
  McDeleteRequest(McDeleteRequest&&) = default;
  McDeleteRequest& operator=(McDeleteRequest&&) = default;
  explicit McDeleteRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McDeleteRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McDeleteRequest>;

};

class McDeleteReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McDeleteReply {
 public:

  static constexpr size_t typeId = 6;

  McDeleteReply() = default;
  McDeleteReply(const McDeleteReply&) = default;
  McDeleteReply& operator=(const McDeleteReply&) = default;
  McDeleteReply(McDeleteReply&&) = default;
  McDeleteReply& operator=(McDeleteReply&&) = default;
  explicit McDeleteReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McDeleteReply>;

};

class McLeaseGetReply;

class McLeaseGetRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McLeaseGetRequest {
 public:
  using reply_type = McLeaseGetReply;

  static constexpr size_t typeId = 7;
  static constexpr const char* name = "lease-get";

  McLeaseGetRequest() = default;
  McLeaseGetRequest(const McLeaseGetRequest&) = default;
  McLeaseGetRequest& operator=(const McLeaseGetRequest&) = default;
  McLeaseGetRequest(McLeaseGetRequest&&) = default;
  McLeaseGetRequest& operator=(McLeaseGetRequest&&) = default;
  explicit McLeaseGetRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McLeaseGetRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McLeaseGetRequest>;

};

class McLeaseGetReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McLeaseGetReply {
 public:

  static constexpr size_t typeId = 8;

  McLeaseGetReply() = default;
  McLeaseGetReply(const McLeaseGetReply&) = default;
  McLeaseGetReply& operator=(const McLeaseGetReply&) = default;
  McLeaseGetReply(McLeaseGetReply&&) = default;
  McLeaseGetReply& operator=(McLeaseGetReply&&) = default;
  explicit McLeaseGetReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McLeaseGetReply>;

};

class McLeaseSetReply;

class McLeaseSetRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McLeaseSetRequest {
 public:
  using reply_type = McLeaseSetReply;

  static constexpr size_t typeId = 9;
  static constexpr const char* name = "lease-set";

  McLeaseSetRequest() = default;
  McLeaseSetRequest(const McLeaseSetRequest&) = default;
  McLeaseSetRequest& operator=(const McLeaseSetRequest&) = default;
  McLeaseSetRequest(McLeaseSetRequest&&) = default;
  McLeaseSetRequest& operator=(McLeaseSetRequest&&) = default;
  explicit McLeaseSetRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McLeaseSetRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McLeaseSetRequest>;

};

class McLeaseSetReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McLeaseSetReply {
 public:

  static constexpr size_t typeId = 10;

  McLeaseSetReply() = default;
  McLeaseSetReply(const McLeaseSetReply&) = default;
  McLeaseSetReply& operator=(const McLeaseSetReply&) = default;
  McLeaseSetReply(McLeaseSetReply&&) = default;
  McLeaseSetReply& operator=(McLeaseSetReply&&) = default;
  explicit McLeaseSetReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McLeaseSetReply>;

};

class McAddReply;

class McAddRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McAddRequest {
 public:
  using reply_type = McAddReply;

  static constexpr size_t typeId = 11;
  static constexpr const char* name = "add";

  McAddRequest() = default;
  McAddRequest(const McAddRequest&) = default;
  McAddRequest& operator=(const McAddRequest&) = default;
  McAddRequest(McAddRequest&&) = default;
  McAddRequest& operator=(McAddRequest&&) = default;
  explicit McAddRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McAddRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McAddRequest>;

};

class McAddReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McAddReply {
 public:

  static constexpr size_t typeId = 12;

  McAddReply() = default;
  McAddReply(const McAddReply&) = default;
  McAddReply& operator=(const McAddReply&) = default;
  McAddReply(McAddReply&&) = default;
  McAddReply& operator=(McAddReply&&) = default;
  explicit McAddReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McAddReply>;

};

class McReplaceReply;

class McReplaceRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McReplaceRequest {
 public:
  using reply_type = McReplaceReply;

  static constexpr size_t typeId = 13;
  static constexpr const char* name = "replace";

  McReplaceRequest() = default;
  McReplaceRequest(const McReplaceRequest&) = default;
  McReplaceRequest& operator=(const McReplaceRequest&) = default;
  McReplaceRequest(McReplaceRequest&&) = default;
  McReplaceRequest& operator=(McReplaceRequest&&) = default;
  explicit McReplaceRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McReplaceRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McReplaceRequest>;

};

class McReplaceReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McReplaceReply {
 public:

  static constexpr size_t typeId = 14;

  McReplaceReply() = default;
  McReplaceReply(const McReplaceReply&) = default;
  McReplaceReply& operator=(const McReplaceReply&) = default;
  McReplaceReply(McReplaceReply&&) = default;
  McReplaceReply& operator=(McReplaceReply&&) = default;
  explicit McReplaceReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McReplaceReply>;

};

class McGetsReply;

class McGetsRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McGetsRequest {
 public:
  using reply_type = McGetsReply;

  static constexpr size_t typeId = 15;
  static constexpr const char* name = "gets";

  McGetsRequest() = default;
  McGetsRequest(const McGetsRequest&) = default;
  McGetsRequest& operator=(const McGetsRequest&) = default;
  McGetsRequest(McGetsRequest&&) = default;
  McGetsRequest& operator=(McGetsRequest&&) = default;
  explicit McGetsRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McGetsRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McGetsRequest>;

};

class McGetsReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McGetsReply {
 public:

  static constexpr size_t typeId = 16;

  McGetsReply() = default;
  McGetsReply(const McGetsReply&) = default;
  McGetsReply& operator=(const McGetsReply&) = default;
  McGetsReply(McGetsReply&&) = default;
  McGetsReply& operator=(McGetsReply&&) = default;
  explicit McGetsReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McGetsReply>;

};

class McCasReply;

class McCasRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McCasRequest {
 public:
  using reply_type = McCasReply;

  static constexpr size_t typeId = 17;
  static constexpr const char* name = "cas";

  McCasRequest() = default;
  McCasRequest(const McCasRequest&) = default;
  McCasRequest& operator=(const McCasRequest&) = default;
  McCasRequest(McCasRequest&&) = default;
  McCasRequest& operator=(McCasRequest&&) = default;
  explicit McCasRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McCasRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McCasRequest>;

};

class McCasReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McCasReply {
 public:

  static constexpr size_t typeId = 18;

  McCasReply() = default;
  McCasReply(const McCasReply&) = default;
  McCasReply& operator=(const McCasReply&) = default;
  McCasReply(McCasReply&&) = default;
  McCasReply& operator=(McCasReply&&) = default;
  explicit McCasReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McCasReply>;

};

class McIncrReply;

class McIncrRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McIncrRequest {
 public:
  using reply_type = McIncrReply;

  static constexpr size_t typeId = 19;
  static constexpr const char* name = "incr";

  McIncrRequest() = default;
  McIncrRequest(const McIncrRequest&) = default;
  McIncrRequest& operator=(const McIncrRequest&) = default;
  McIncrRequest(McIncrRequest&&) = default;
  McIncrRequest& operator=(McIncrRequest&&) = default;
  explicit McIncrRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McIncrRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McIncrRequest>;

};

class McIncrReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McIncrReply {
 public:

  static constexpr size_t typeId = 20;

  McIncrReply() = default;
  McIncrReply(const McIncrReply&) = default;
  McIncrReply& operator=(const McIncrReply&) = default;
  McIncrReply(McIncrReply&&) = default;
  McIncrReply& operator=(McIncrReply&&) = default;
  explicit McIncrReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McIncrReply>;

};

class McDecrReply;

class McDecrRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McDecrRequest {
 public:
  using reply_type = McDecrReply;

  static constexpr size_t typeId = 21;
  static constexpr const char* name = "decr";

  McDecrRequest() = default;
  McDecrRequest(const McDecrRequest&) = default;
  McDecrRequest& operator=(const McDecrRequest&) = default;
  McDecrRequest(McDecrRequest&&) = default;
  McDecrRequest& operator=(McDecrRequest&&) = default;
  explicit McDecrRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McDecrRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McDecrRequest>;

};

class McDecrReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McDecrReply {
 public:

  static constexpr size_t typeId = 22;

  McDecrReply() = default;
  McDecrReply(const McDecrReply&) = default;
  McDecrReply& operator=(const McDecrReply&) = default;
  McDecrReply(McDecrReply&&) = default;
  McDecrReply& operator=(McDecrReply&&) = default;
  explicit McDecrReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McDecrReply>;

};

class McMetagetReply;

class McMetagetRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McMetagetRequest {
 public:
  using reply_type = McMetagetReply;

  static constexpr size_t typeId = 23;
  static constexpr const char* name = "metaget";

  McMetagetRequest() = default;
  McMetagetRequest(const McMetagetRequest&) = default;
  McMetagetRequest& operator=(const McMetagetRequest&) = default;
  McMetagetRequest(McMetagetRequest&&) = default;
  McMetagetRequest& operator=(McMetagetRequest&&) = default;
  explicit McMetagetRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McMetagetRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McMetagetRequest>;

};

class McMetagetReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McMetagetReply {
 public:

  static constexpr size_t typeId = 24;

  McMetagetReply() = default;
  McMetagetReply(const McMetagetReply&) = default;
  McMetagetReply& operator=(const McMetagetReply&) = default;
  McMetagetReply(McMetagetReply&&) = default;
  McMetagetReply& operator=(McMetagetReply&&) = default;
  explicit McMetagetReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McMetagetReply>;

};

class McAppendReply;

class McAppendRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McAppendRequest {
 public:
  using reply_type = McAppendReply;

  static constexpr size_t typeId = 27;
  static constexpr const char* name = "append";

  McAppendRequest() = default;
  McAppendRequest(const McAppendRequest&) = default;
  McAppendRequest& operator=(const McAppendRequest&) = default;
  McAppendRequest(McAppendRequest&&) = default;
  McAppendRequest& operator=(McAppendRequest&&) = default;
  explicit McAppendRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McAppendRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McAppendRequest>;

};

class McAppendReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McAppendReply {
 public:

  static constexpr size_t typeId = 28;

  McAppendReply() = default;
  McAppendReply(const McAppendReply&) = default;
  McAppendReply& operator=(const McAppendReply&) = default;
  McAppendReply(McAppendReply&&) = default;
  McAppendReply& operator=(McAppendReply&&) = default;
  explicit McAppendReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McAppendReply>;

};

class McPrependReply;

class McPrependRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McPrependRequest {
 public:
  using reply_type = McPrependReply;

  static constexpr size_t typeId = 29;
  static constexpr const char* name = "prepend";

  McPrependRequest() = default;
  McPrependRequest(const McPrependRequest&) = default;
  McPrependRequest& operator=(const McPrependRequest&) = default;
  McPrependRequest(McPrependRequest&&) = default;
  McPrependRequest& operator=(McPrependRequest&&) = default;
  explicit McPrependRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McPrependRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McPrependRequest>;

};

class McPrependReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McPrependReply {
 public:

  static constexpr size_t typeId = 30;

  McPrependReply() = default;
  McPrependReply(const McPrependReply&) = default;
  McPrependReply& operator=(const McPrependReply&) = default;
  McPrependReply(McPrependReply&&) = default;
  McPrependReply& operator=(McPrependReply&&) = default;
  explicit McPrependReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McPrependReply>;

};

class McTouchReply;

class McTouchRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McTouchRequest {
 public:
  using reply_type = McTouchReply;

  static constexpr size_t typeId = 31;
  static constexpr const char* name = "touch";

  McTouchRequest() = default;
  McTouchRequest(const McTouchRequest&) = default;
  McTouchRequest& operator=(const McTouchRequest&) = default;
  McTouchRequest(McTouchRequest&&) = default;
  McTouchRequest& operator=(McTouchRequest&&) = default;
  explicit McTouchRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McTouchRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McTouchRequest>;

};

class McTouchReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McTouchReply {
 public:

  static constexpr size_t typeId = 32;

  McTouchReply() = default;
  McTouchReply(const McTouchReply&) = default;
  McTouchReply& operator=(const McTouchReply&) = default;
  McTouchReply(McTouchReply&&) = default;
  McTouchReply& operator=(McTouchReply&&) = default;
  explicit McTouchReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McTouchReply>;

};

class McFlushReReply;

class McFlushReRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McFlushReRequest {
 public:
  using reply_type = McFlushReReply;

  static constexpr size_t typeId = 41;
  static constexpr const char* name = "flushre";

  McFlushReRequest() = default;
  McFlushReRequest(const McFlushReRequest&) = default;
  McFlushReRequest& operator=(const McFlushReRequest&) = default;
  McFlushReRequest(McFlushReRequest&&) = default;
  McFlushReRequest& operator=(McFlushReRequest&&) = default;
  explicit McFlushReRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McFlushReRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McFlushReRequest>;

};

class McFlushReReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McFlushReReply {
 public:

  static constexpr size_t typeId = 42;

  McFlushReReply() = default;
  McFlushReReply(const McFlushReReply&) = default;
  McFlushReReply& operator=(const McFlushReReply&) = default;
  McFlushReReply(McFlushReReply&&) = default;
  McFlushReReply& operator=(McFlushReReply&&) = default;
  explicit McFlushReReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McFlushReReply>;

};

class McFlushAllReply;

class McFlushAllRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McFlushAllRequest {
 public:
  using reply_type = McFlushAllReply;

  static constexpr size_t typeId = 43;
  static constexpr const char* name = "flushall";

  McFlushAllRequest() = default;
  McFlushAllRequest(const McFlushAllRequest&) = default;
  McFlushAllRequest& operator=(const McFlushAllRequest&) = default;
  McFlushAllRequest(McFlushAllRequest&&) = default;
  McFlushAllRequest& operator=(McFlushAllRequest&&) = default;
  explicit McFlushAllRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McFlushAllRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McFlushAllRequest>;

};

class McFlushAllReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McFlushAllReply {
 public:

  static constexpr size_t typeId = 44;

  McFlushAllReply() = default;
  McFlushAllReply(const McFlushAllReply&) = default;
  McFlushAllReply& operator=(const McFlushAllReply&) = default;
  McFlushAllReply(McFlushAllReply&&) = default;
  McFlushAllReply& operator=(McFlushAllReply&&) = default;
  explicit McFlushAllReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McFlushAllReply>;

};

class McGatReply;

class McGatRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McGatRequest {
 public:
  using reply_type = McGatReply;

  static constexpr size_t typeId = 45;
  static constexpr const char* name = "gat";

  McGatRequest() = default;
  McGatRequest(const McGatRequest&) = default;
  McGatRequest& operator=(const McGatRequest&) = default;
  McGatRequest(McGatRequest&&) = default;
  McGatRequest& operator=(McGatRequest&&) = default;
  explicit McGatRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McGatRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McGatRequest>;

};

class McGatReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McGatReply {
 public:

  static constexpr size_t typeId = 46;

  McGatReply() = default;
  McGatReply(const McGatReply&) = default;
  McGatReply& operator=(const McGatReply&) = default;
  McGatReply(McGatReply&&) = default;
  McGatReply& operator=(McGatReply&&) = default;
  explicit McGatReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McGatReply>;

};

class McGatsReply;

class McGatsRequest : public carbon::RequestCommon, public facebook::memcache::thrift::McGatsRequest {
 public:
  using reply_type = McGatsReply;

  static constexpr size_t typeId = 47;
  static constexpr const char* name = "gats";

  McGatsRequest() = default;
  McGatsRequest(const McGatsRequest&) = default;
  McGatsRequest& operator=(const McGatsRequest&) = default;
  McGatsRequest(McGatsRequest&&) = default;
  McGatsRequest& operator=(McGatsRequest&&) = default;
  explicit McGatsRequest(folly::StringPiece sp) {
    key_ref() = sp;
  }
  explicit McGatsRequest(folly::IOBuf&& carbonKey) {
    key_ref() = std::move(carbonKey);
  }

  friend class apache::thrift::Cpp2Ops<McGatsRequest>;

};

class McGatsReply : public carbon::ReplyCommon, public facebook::memcache::thrift::McGatsReply {
 public:

  static constexpr size_t typeId = 48;

  McGatsReply() = default;
  McGatsReply(const McGatsReply&) = default;
  McGatsReply& operator=(const McGatsReply&) = default;
  McGatsReply(McGatsReply&&) = default;
  McGatsReply& operator=(McGatsReply&&) = default;
  explicit McGatsReply(carbon::Result carbonResult) {
    result_ref() = carbonResult;
  }

  friend class apache::thrift::Cpp2Ops<McGatsReply>;

};
} // namespace memcache
} // namespace facebook

#include "MemcacheMessages-inl.h"
