//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPVisibleSectionHeaderFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPVisibleSectionHeaderFeedback : PBCodable <_CPProcessableFeedback, _CPVisibleSectionHeaderFeedback, NSSecureCoding>
{
    int _headerType;
    NSUInteger _timestamp;
    NSString *_sectionId;
}

@property(copy, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(nonatomic) int headerType; // @synthesize headerType=_headerType;
@property(nonatomic) NSUInteger timestamp;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;

@end

