//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject
{
    NSMutableArray *_matches;
}

+ (id)matchingEngine;
- (id)matchResults;
- (void)addMatches:(id)arg1;
- (void)addMatch:(id)arg1;
- (void)dealloc;
- (id)init;

@end

