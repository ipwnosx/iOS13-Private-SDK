//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PGRankedZeroKeyword : NSObject
{
    NSDictionary *_zeroKeyword;
    double _score;
}

@property(readonly) double score; // @synthesize score=_score;
@property(readonly) NSDictionary *zeroKeyword; // @synthesize zeroKeyword=_zeroKeyword;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKeyword:(id)arg1 score:(double)arg2;

@end

