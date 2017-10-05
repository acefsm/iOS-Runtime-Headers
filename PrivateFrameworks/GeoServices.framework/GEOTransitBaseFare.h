/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitBaseFare : PBCodable <GEOTransitFare, NSCopying> {
    bool  _cashOnly;
    struct { 
        unsigned int numberOfLegs : 1; 
        unsigned int paymentType : 1; 
        unsigned int cashOnly : 1; 
    }  _has;
    unsigned int  _numberOfLegs;
    int  _paymentType;
    GEOTransitPrice * _price;
    NSMutableArray * _supportedPaymentMethods;
}

@property (nonatomic, readonly) bool cashOnly;
@property (nonatomic) bool cashOnly;
@property (nonatomic, readonly, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCashOnly;
@property (nonatomic) bool hasNumberOfLegs;
@property (nonatomic) bool hasPaymentType;
@property (nonatomic, readonly) bool hasPrice;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int numberOfLegs;
@property (nonatomic) int paymentType;
@property (nonatomic, retain) GEOTransitPrice *price;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedICCardProviders;
@property (nonatomic, retain) NSMutableArray *supportedPaymentMethods;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDecimalNumber *value;

+ (Class)supportedPaymentMethodType;

- (void).cxx_destruct;
- (int)StringAsPaymentType:(id)arg1;
- (void)addSupportedPaymentMethod:(id)arg1;
- (bool)cashOnly;
- (void)clearSupportedPaymentMethods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCashOnly;
- (bool)hasNumberOfLegs;
- (bool)hasPaymentType;
- (bool)hasPrice;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfLegs;
- (int)paymentType;
- (id)paymentTypeAsString:(int)arg1;
- (id)price;
- (bool)readFrom:(id)arg1;
- (void)setCashOnly:(bool)arg1;
- (void)setHasCashOnly:(bool)arg1;
- (void)setHasNumberOfLegs:(bool)arg1;
- (void)setHasPaymentType:(bool)arg1;
- (void)setNumberOfLegs:(unsigned int)arg1;
- (void)setPaymentType:(int)arg1;
- (void)setPrice:(id)arg1;
- (void)setSupportedPaymentMethods:(id)arg1;
- (id)supportedICCardProviders;
- (id)supportedPaymentMethodAtIndex:(unsigned long long)arg1;
- (id)supportedPaymentMethods;
- (unsigned long long)supportedPaymentMethodsCount;
- (long long)type;
- (id)value;
- (void)writeTo:(id)arg1;

@end
