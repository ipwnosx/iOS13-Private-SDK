//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@interface NURepeatPattern : NUPattern
{
    NUPattern *_pattern;
    long long _minCount;
    long long _maxCount;
}

@property(readonly) long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly) long long minCount; // @synthesize minCount=_minCount;
@property(readonly) NUPattern *pattern; // @synthesize pattern=_pattern;
// - (void).cxx_destruct;
- (BOOL)match:(id)arg1 location:(NSUInteger )arg2 count:(NSUInteger )arg3;
- (BOOL)isEqualToRepeatPattern:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (id)stringRepresentation;
- (id)optimizedPattern;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (id)tokens;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2 maxCount:(long long)arg3;
- (id)initWithPattern:(id)arg1 minCount:(long long)arg2;
- (id)initWithPattern:(id)arg1 count:(long long)arg2;
- (id)init;

@end

