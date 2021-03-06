// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ripple_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSRIPPLELIKEACCOUNT_HPP
#define DJINNI_GENERATED_NJSRIPPLELIKEACCOUNT_HPP


#include "NJSAmountCallback.hpp"
#include "NJSBoolCallback.hpp"
#include "NJSRippleLikeTransactionBuilderCpp.hpp"
#include "NJSRippleLikeTransactionCpp.hpp"
#include "NJSStringCallback.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/RippleLikeAccount.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSRippleLikeAccount final {
public:

    static void Initialize(Local<Object> target);
    NJSRippleLikeAccount() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::RippleLikeAccount> &object);
    static Nan::Persistent<ObjectTemplate> RippleLikeAccount_prototype;

private:
    static NAN_METHOD(broadcastRawTransaction);

    static NAN_METHOD(broadcastTransaction);

    static NAN_METHOD(buildTransaction);

    /**
     * Get fees from network
     * Note: it would have been better to have this method on RippleLikeWallet
     * but since RippleLikeWallet is not used anywhere, it's better to keep all
     * specific methods under the same specific class so it will be easy to segratate
     * when the right time comes !
     */
    static NAN_METHOD(getFees);

    /**
     * Get base reserve (dust to leave on an XRP account) from network
     * Note: same note as above
     */
    static NAN_METHOD(getBaseReserve);

    /**
     * Check whether an account has been activated or not
     * Here activation, means that the XRP account received a first transaction with a minimum amount
     * greater or equal to XRP base reserve
     * @param: address to check
     * @return: true if valid address and has been activated, false otherwise
     */
    static NAN_METHOD(isAddressActivated);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSRIPPLELIKEACCOUNT_HPP
