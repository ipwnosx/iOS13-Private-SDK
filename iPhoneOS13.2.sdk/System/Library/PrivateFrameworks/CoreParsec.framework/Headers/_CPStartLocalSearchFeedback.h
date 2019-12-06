//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/_CPFeedbackUUID-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPStartLocalSearchFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPStartLocalSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPStartLocalSearchFeedback, NSSecureCoding>
{
    int _triggerEvent;
    int _indexType;
    NSUInteger _timestamp;
    NSString *_input;
    NSString *_uuid;
    NSUInteger _queryId;
}

@property(nonatomic) int indexType; // @synthesize indexType=_indexType;
@property(nonatomic) NSUInteger queryId; // @synthesize queryId=_queryId;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
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

