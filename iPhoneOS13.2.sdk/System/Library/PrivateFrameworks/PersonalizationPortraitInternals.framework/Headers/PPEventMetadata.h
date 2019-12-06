//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary;

@interface PPEventMetadata : NSObject <NSCopying>
{
    NSUInteger _ocnt_precomputedHash;
    BOOL _shouldConsiderAlarms;
    NSDictionary *_titlesAndParticipants;
    double _earliestStartTime;
}

+ (id)eventMetadataWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3;
@property(readonly, nonatomic) BOOL shouldConsiderAlarms; // @synthesize shouldConsiderAlarms=_shouldConsiderAlarms;
@property(readonly, nonatomic) double earliestStartTime; // @synthesize earliestStartTime=_earliestStartTime;
@property(readonly, nonatomic) NSDictionary *titlesAndParticipants; // @synthesize titlesAndParticipants=_titlesAndParticipants;
// - (void).cxx_destruct;
- (id)init;
- (NSUInteger)hash;
- (NSUInteger)_hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEventMetadata:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3;

@end

