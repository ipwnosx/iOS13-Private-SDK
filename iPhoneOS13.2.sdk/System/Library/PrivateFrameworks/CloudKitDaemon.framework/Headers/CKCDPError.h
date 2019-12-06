//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPError : PBCodable <NSCopying>
{
    int _auxiliaryCode;
    NSString *_auxiliaryDomain;
    NSMutableArray *_auxiliaryUserInfos;
    int _code;
    NSString *_message;
   struct {
        unsigned int auxiliaryCode:1;
        unsigned int code:1;
    } _has;
}

+ (Class)auxiliaryUserInfoType;
@property(retain, nonatomic) NSMutableArray *auxiliaryUserInfos; // @synthesize auxiliaryUserInfos=_auxiliaryUserInfos;
@property(nonatomic) int auxiliaryCode; // @synthesize auxiliaryCode=_auxiliaryCode;
@property(retain, nonatomic) NSString *auxiliaryDomain; // @synthesize auxiliaryDomain=_auxiliaryDomain;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)auxiliaryUserInfoAtIndex:(NSUInteger)arg1;
- (NSUInteger)auxiliaryUserInfosCount;
- (void)addAuxiliaryUserInfo:(id)arg1;
- (void)clearAuxiliaryUserInfos;
@property(nonatomic) BOOL hasAuxiliaryCode;
@property(readonly, nonatomic) BOOL hasAuxiliaryDomain;
@property(readonly, nonatomic) BOOL hasMessage;
- (int)StringAsCode:(id)arg1;
- (id)codeAsString:(int)arg1;
@property(nonatomic) BOOL hasCode;
@property(nonatomic) int code; // @synthesize code=_code;

@end

