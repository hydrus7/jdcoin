// Copyright (c) 2020 The PIVX developers
// Copyright (c) 2020 The JDCOIN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef JDCOIN_CONSENSUS_ZEROCOIN_VERIFY_H
#define JDCOIN_CONSENSUS_ZEROCOIN_VERIFY_H

#include "consensus/consensus.h"
#include "main.h"
#include "script/interpreter.h"
#include "zjdcchain.h"

/** Context-independent validity checks */
bool CheckZerocoinSpend(const CTransaction& tx, bool fVerifySignature, CValidationState& state, bool fFakeSerialAttack = false);
// Fake Serial attack Range
bool isBlockBetweenFakeSerialAttackRange(int nHeight);
// Public coin spend
bool CheckPublicCoinSpendEnforced(int blockHeight, bool isPublicSpend);
int CurrentPublicCoinSpendVersion();
bool CheckPublicCoinSpendVersion(int version);
bool ContextualCheckZerocoinSpend(const CTransaction& tx, const libzerocoin::CoinSpend* spend, int nHeight, const uint256& hashBlock);
bool ContextualCheckZerocoinSpendNoSerialCheck(const CTransaction& tx, const libzerocoin::CoinSpend* spend, int nHeight, const uint256& hashBlock);
bool RecalculateJDCOINupply(int nHeightStart, bool fSkipZjdc = true);
CAmount GetInvalidUTXOValue();

#endif //PIVX_CONSENSUS_ZEROCOIN_VERIFY_H
