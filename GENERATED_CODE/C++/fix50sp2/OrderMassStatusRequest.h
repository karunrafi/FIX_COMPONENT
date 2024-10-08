#ifndef FIX50SP2_ORDERMASSSTATUSREQUEST_H
#define FIX50SP2_ORDERMASSSTATUSREQUEST_H

#include "Message.h"

namespace FIX50SP2
{

  class OrderMassStatusRequest : public Message
  {
  public:
    OrderMassStatusRequest() : Message(MsgType()) {}
    OrderMassStatusRequest(const FIX::Message& m) : Message(m) {}
    OrderMassStatusRequest(const Message& m) : Message(m) {}
    OrderMassStatusRequest(const OrderMassStatusRequest&) = default;
    OrderMassStatusRequest(OrderMassStatusRequest&&) = default;
    OrderMassStatusRequest& operator=(const OrderMassStatusRequest&) = default;
    OrderMassStatusRequest& operator=(OrderMassStatusRequest&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("AF"); }

    OrderMassStatusRequest(
      const FIX::MassStatusReqID& aMassStatusReqID,
      const FIX::MassStatusReqType& aMassStatusReqType )
    : Message(MsgType())
    {
      set(aMassStatusReqID);
      set(aMassStatusReqType);
    }

    FIELD_SET(*this, FIX::MassStatusReqID);
    FIELD_SET(*this, FIX::MassStatusReqType);
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,447,452,802,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyIDSource);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::NoPartySubIDs);
      class NoPartySubIDs: public FIX::Group
      {
      public:
      NoPartySubIDs() : FIX::Group(802,523,FIX::message_order(523,803,0)) {}
        FIELD_SET(*this, FIX::PartySubID);
        FIELD_SET(*this, FIX::PartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::AcctIDSource);
    FIELD_SET(*this, FIX::TradingSessionID);
    FIELD_SET(*this, FIX::TradingSessionSubID);
    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SymbolSfx);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::SecurityIDSource);
    FIELD_SET(*this, FIX::NoSecurityAltID);
    class NoSecurityAltID: public FIX::Group
    {
    public:
    NoSecurityAltID() : FIX::Group(454,455,FIX::message_order(455,456,0)) {}
      FIELD_SET(*this, FIX::SecurityAltID);
      FIELD_SET(*this, FIX::SecurityAltIDSource);
    };
    FIELD_SET(*this, FIX::Product);
    FIELD_SET(*this, FIX::ProductComplex);
    FIELD_SET(*this, FIX::SecurityGroup);
    FIELD_SET(*this, FIX::CFICode);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::SecuritySubType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDate);
    FIELD_SET(*this, FIX::MaturityTime);
    FIELD_SET(*this, FIX::SettleOnOpenFlag);
    FIELD_SET(*this, FIX::InstrmtAssignmentMethod);
    FIELD_SET(*this, FIX::SecurityStatus);
    FIELD_SET(*this, FIX::CouponPaymentDate);
    FIELD_SET(*this, FIX::IssueDate);
    FIELD_SET(*this, FIX::RepoCollateralSecurityType);
    FIELD_SET(*this, FIX::RepurchaseTerm);
    FIELD_SET(*this, FIX::RepurchaseRate);
    FIELD_SET(*this, FIX::Factor);
    FIELD_SET(*this, FIX::CreditRating);
    FIELD_SET(*this, FIX::InstrRegistry);
    FIELD_SET(*this, FIX::CountryOfIssue);
    FIELD_SET(*this, FIX::StateOrProvinceOfIssue);
    FIELD_SET(*this, FIX::LocaleOfIssue);
    FIELD_SET(*this, FIX::RedemptionDate);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::StrikeCurrency);
    FIELD_SET(*this, FIX::StrikeMultiplier);
    FIELD_SET(*this, FIX::StrikeValue);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::ContractMultiplier);
    FIELD_SET(*this, FIX::MinPriceIncrement);
    FIELD_SET(*this, FIX::MinPriceIncrementAmount);
    FIELD_SET(*this, FIX::UnitOfMeasure);
    FIELD_SET(*this, FIX::UnitOfMeasureQty);
    FIELD_SET(*this, FIX::PriceUnitOfMeasure);
    FIELD_SET(*this, FIX::PriceUnitOfMeasureQty);
    FIELD_SET(*this, FIX::SettlMethod);
    FIELD_SET(*this, FIX::ExerciseStyle);
    FIELD_SET(*this, FIX::OptPayoutAmount);
    FIELD_SET(*this, FIX::PriceQuoteMethod);
    FIELD_SET(*this, FIX::ValuationMethod);
    FIELD_SET(*this, FIX::ListMethod);
    FIELD_SET(*this, FIX::CapPrice);
    FIELD_SET(*this, FIX::FloorPrice);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::FlexibleIndicator);
    FIELD_SET(*this, FIX::FlexProductEligibilityIndicator);
    FIELD_SET(*this, FIX::TimeUnit);
    FIELD_SET(*this, FIX::CouponRate);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::PositionLimit);
    FIELD_SET(*this, FIX::NTPositionLimit);
    FIELD_SET(*this, FIX::Issuer);
    FIELD_SET(*this, FIX::EncodedIssuerLen);
    FIELD_SET(*this, FIX::EncodedIssuer);
    FIELD_SET(*this, FIX::SecurityDesc);
    FIELD_SET(*this, FIX::EncodedSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedSecurityDesc);
    FIELD_SET(*this, FIX::SecurityXMLLen);
    FIELD_SET(*this, FIX::SecurityXML);
    FIELD_SET(*this, FIX::SecurityXMLSchema);
    FIELD_SET(*this, FIX::Pool);
    FIELD_SET(*this, FIX::ContractSettlMonth);
    FIELD_SET(*this, FIX::CPProgram);
    FIELD_SET(*this, FIX::CPRegType);
    FIELD_SET(*this, FIX::NoEvents);
    class NoEvents: public FIX::Group
    {
    public:
    NoEvents() : FIX::Group(864,865,FIX::message_order(865,866,1145,867,868,0)) {}
      FIELD_SET(*this, FIX::EventType);
      FIELD_SET(*this, FIX::EventDate);
      FIELD_SET(*this, FIX::EventTime);
      FIELD_SET(*this, FIX::EventPx);
      FIELD_SET(*this, FIX::EventText);
    };
    FIELD_SET(*this, FIX::DatedDate);
    FIELD_SET(*this, FIX::InterestAccrualDate);
    FIELD_SET(*this, FIX::NoInstrumentParties);
    class NoInstrumentParties: public FIX::Group
    {
    public:
    NoInstrumentParties() : FIX::Group(1018,1019,FIX::message_order(1019,1050,1051,1052,0)) {}
      FIELD_SET(*this, FIX::InstrumentPartyID);
      FIELD_SET(*this, FIX::InstrumentPartyIDSource);
      FIELD_SET(*this, FIX::InstrumentPartyRole);
      FIELD_SET(*this, FIX::NoInstrumentPartySubIDs);
      class NoInstrumentPartySubIDs: public FIX::Group
      {
      public:
      NoInstrumentPartySubIDs() : FIX::Group(1052,1053,FIX::message_order(1053,1054,0)) {}
        FIELD_SET(*this, FIX::InstrumentPartySubID);
        FIELD_SET(*this, FIX::InstrumentPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::ContractMultiplierUnit);
    FIELD_SET(*this, FIX::FlowScheduleType);
    FIELD_SET(*this, FIX::RestructuringType);
    FIELD_SET(*this, FIX::Seniority);
    FIELD_SET(*this, FIX::NotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::OriginalNotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::AttachmentPoint);
    FIELD_SET(*this, FIX::DetachmentPoint);
    FIELD_SET(*this, FIX::StrikePriceDeterminationMethod);
    FIELD_SET(*this, FIX::StrikePriceBoundaryMethod);
    FIELD_SET(*this, FIX::StrikePriceBoundaryPrecision);
    FIELD_SET(*this, FIX::UnderlyingPriceDeterminationMethod);
    FIELD_SET(*this, FIX::OptPayoutType);
    FIELD_SET(*this, FIX::NoComplexEvents);
    class NoComplexEvents: public FIX::Group
    {
    public:
    NoComplexEvents() : FIX::Group(1483,1484,FIX::message_order(1484,1485,1486,1487,1488,1489,1490,1491,0)) {}
      FIELD_SET(*this, FIX::ComplexEventType);
      FIELD_SET(*this, FIX::ComplexOptPayoutAmount);
      FIELD_SET(*this, FIX::ComplexEventPrice);
      FIELD_SET(*this, FIX::ComplexEventPriceBoundaryMethod);
      FIELD_SET(*this, FIX::ComplexEventPriceBoundaryPrecision);
      FIELD_SET(*this, FIX::ComplexEventPriceTimeType);
      FIELD_SET(*this, FIX::ComplexEventCondition);
      FIELD_SET(*this, FIX::NoComplexEventDates);
      class NoComplexEventDates: public FIX::Group
      {
      public:
      NoComplexEventDates() : FIX::Group(1491,1492,FIX::message_order(1492,1493,1494,0)) {}
        FIELD_SET(*this, FIX::ComplexEventStartDate);
        FIELD_SET(*this, FIX::ComplexEventEndDate);
        FIELD_SET(*this, FIX::NoComplexEventTimes);
        class NoComplexEventTimes: public FIX::Group
        {
        public:
        NoComplexEventTimes() : FIX::Group(1494,1495,FIX::message_order(1495,1496,0)) {}
          FIELD_SET(*this, FIX::ComplexEventStartTime);
          FIELD_SET(*this, FIX::ComplexEventEndTime);
        };
      };
    };
    FIELD_SET(*this, FIX::UnderlyingSymbol);
    FIELD_SET(*this, FIX::UnderlyingSymbolSfx);
    FIELD_SET(*this, FIX::UnderlyingSecurityID);
    FIELD_SET(*this, FIX::UnderlyingSecurityIDSource);
    FIELD_SET(*this, FIX::NoUnderlyingSecurityAltID);
    class NoUnderlyingSecurityAltID: public FIX::Group
    {
    public:
    NoUnderlyingSecurityAltID() : FIX::Group(457,458,FIX::message_order(458,459,0)) {}
      FIELD_SET(*this, FIX::UnderlyingSecurityAltID);
      FIELD_SET(*this, FIX::UnderlyingSecurityAltIDSource);
    };
    FIELD_SET(*this, FIX::UnderlyingProduct);
    FIELD_SET(*this, FIX::UnderlyingCFICode);
    FIELD_SET(*this, FIX::UnderlyingSecurityType);
    FIELD_SET(*this, FIX::UnderlyingSecuritySubType);
    FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
    FIELD_SET(*this, FIX::UnderlyingMaturityDate);
    FIELD_SET(*this, FIX::UnderlyingMaturityTime);
    FIELD_SET(*this, FIX::UnderlyingCouponPaymentDate);
    FIELD_SET(*this, FIX::UnderlyingIssueDate);
    FIELD_SET(*this, FIX::UnderlyingRepoCollateralSecurityType);
    FIELD_SET(*this, FIX::UnderlyingRepurchaseTerm);
    FIELD_SET(*this, FIX::UnderlyingRepurchaseRate);
    FIELD_SET(*this, FIX::UnderlyingFactor);
    FIELD_SET(*this, FIX::UnderlyingCreditRating);
    FIELD_SET(*this, FIX::UnderlyingInstrRegistry);
    FIELD_SET(*this, FIX::UnderlyingCountryOfIssue);
    FIELD_SET(*this, FIX::UnderlyingStateOrProvinceOfIssue);
    FIELD_SET(*this, FIX::UnderlyingLocaleOfIssue);
    FIELD_SET(*this, FIX::UnderlyingRedemptionDate);
    FIELD_SET(*this, FIX::UnderlyingStrikePrice);
    FIELD_SET(*this, FIX::UnderlyingStrikeCurrency);
    FIELD_SET(*this, FIX::UnderlyingOptAttribute);
    FIELD_SET(*this, FIX::UnderlyingContractMultiplier);
    FIELD_SET(*this, FIX::UnderlyingUnitOfMeasure);
    FIELD_SET(*this, FIX::UnderlyingUnitOfMeasureQty);
    FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasure);
    FIELD_SET(*this, FIX::UnderlyingPriceUnitOfMeasureQty);
    FIELD_SET(*this, FIX::UnderlyingTimeUnit);
    FIELD_SET(*this, FIX::UnderlyingExerciseStyle);
    FIELD_SET(*this, FIX::UnderlyingCouponRate);
    FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
    FIELD_SET(*this, FIX::UnderlyingIssuer);
    FIELD_SET(*this, FIX::EncodedUnderlyingIssuerLen);
    FIELD_SET(*this, FIX::EncodedUnderlyingIssuer);
    FIELD_SET(*this, FIX::UnderlyingSecurityDesc);
    FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDescLen);
    FIELD_SET(*this, FIX::EncodedUnderlyingSecurityDesc);
    FIELD_SET(*this, FIX::UnderlyingCPProgram);
    FIELD_SET(*this, FIX::UnderlyingCPRegType);
    FIELD_SET(*this, FIX::UnderlyingAllocationPercent);
    FIELD_SET(*this, FIX::UnderlyingCurrency);
    FIELD_SET(*this, FIX::UnderlyingQty);
    FIELD_SET(*this, FIX::UnderlyingSettlementType);
    FIELD_SET(*this, FIX::UnderlyingCashAmount);
    FIELD_SET(*this, FIX::UnderlyingCashType);
    FIELD_SET(*this, FIX::UnderlyingPx);
    FIELD_SET(*this, FIX::UnderlyingDirtyPrice);
    FIELD_SET(*this, FIX::UnderlyingEndPrice);
    FIELD_SET(*this, FIX::UnderlyingStartValue);
    FIELD_SET(*this, FIX::UnderlyingCurrentValue);
    FIELD_SET(*this, FIX::UnderlyingEndValue);
    FIELD_SET(*this, FIX::NoUnderlyingStips);
    class NoUnderlyingStips: public FIX::Group
    {
    public:
    NoUnderlyingStips() : FIX::Group(887,888,FIX::message_order(888,889,0)) {}
      FIELD_SET(*this, FIX::UnderlyingStipType);
      FIELD_SET(*this, FIX::UnderlyingStipValue);
    };
    FIELD_SET(*this, FIX::UnderlyingAdjustedQuantity);
    FIELD_SET(*this, FIX::UnderlyingFXRate);
    FIELD_SET(*this, FIX::UnderlyingFXRateCalc);
    FIELD_SET(*this, FIX::UnderlyingCapValue);
    FIELD_SET(*this, FIX::NoUndlyInstrumentParties);
    class NoUndlyInstrumentParties: public FIX::Group
    {
    public:
    NoUndlyInstrumentParties() : FIX::Group(1058,1059,FIX::message_order(1059,1060,1061,1062,0)) {}
      FIELD_SET(*this, FIX::UnderlyingInstrumentPartyID);
      FIELD_SET(*this, FIX::UnderlyingInstrumentPartyIDSource);
      FIELD_SET(*this, FIX::UnderlyingInstrumentPartyRole);
      FIELD_SET(*this, FIX::NoUndlyInstrumentPartySubIDs);
      class NoUndlyInstrumentPartySubIDs: public FIX::Group
      {
      public:
      NoUndlyInstrumentPartySubIDs() : FIX::Group(1062,1063,FIX::message_order(1063,1064,0)) {}
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartySubID);
        FIELD_SET(*this, FIX::UnderlyingInstrumentPartySubIDType);
      };
    };
    FIELD_SET(*this, FIX::UnderlyingSettlMethod);
    FIELD_SET(*this, FIX::UnderlyingPutOrCall);
    FIELD_SET(*this, FIX::UnderlyingContractMultiplierUnit);
    FIELD_SET(*this, FIX::UnderlyingFlowScheduleType);
    FIELD_SET(*this, FIX::UnderlyingRestructuringType);
    FIELD_SET(*this, FIX::UnderlyingSeniority);
    FIELD_SET(*this, FIX::UnderlyingNotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::UnderlyingOriginalNotionalPercentageOutstanding);
    FIELD_SET(*this, FIX::UnderlyingAttachmentPoint);
    FIELD_SET(*this, FIX::UnderlyingDetachmentPoint);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::NoTargetPartyIDs);
    class NoTargetPartyIDs: public FIX::Group
    {
    public:
    NoTargetPartyIDs() : FIX::Group(1461,1462,FIX::message_order(1462,1463,1464,0)) {}
      FIELD_SET(*this, FIX::TargetPartyID);
      FIELD_SET(*this, FIX::TargetPartyIDSource);
      FIELD_SET(*this, FIX::TargetPartyRole);
    };
  };

}

#endif
