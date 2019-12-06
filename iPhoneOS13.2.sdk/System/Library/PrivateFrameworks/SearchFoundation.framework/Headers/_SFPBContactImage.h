//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/_SFPBContactImage-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding>
{
    BOOL _threeDTouchEnabled;
    NSString *_contactIdentifier;
    NSArray *_contactIdentifiers;
}

@property(nonatomic) BOOL threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)contactIdentifiersAtIndex:(NSUInteger)arg1;
- (NSUInteger)contactIdentifiersCount;
- (void)addContactIdentifiers:(id)arg1;
- (void)clearContactIdentifiers;
- (id)initWithFacade:(id)arg1;

@end

