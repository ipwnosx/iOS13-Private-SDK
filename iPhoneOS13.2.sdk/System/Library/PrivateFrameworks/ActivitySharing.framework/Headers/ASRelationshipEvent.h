//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface ASRelationshipEvent : NSObject
{
    unsigned short _type;
    unsigned short _anchor;
    NSDate *_timestamp;
}

+ (id)relationshipEventWithRecord:(id)arg1;
+ (id)_relationshipEventWithCodable:(id)arg1;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned short anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) unsigned short type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToRelationshipEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithType:(unsigned short)arg1 anchor:(unsigned short)arg2 timestamp:(id)arg3;
- (id)_codableRelationshipEvent;

@end

