//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying>
{
    NSArray *_assertions;
    NSArray *_invalidations;
}

+ (id)emptyResult;
@property(readonly, copy, nonatomic) NSArray *invalidations; // @synthesize invalidations=_invalidations;
@property(readonly, copy, nonatomic) NSArray *assertions; // @synthesize assertions=_assertions;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)resultCombiningWithResult:(id)arg1;
- (id)initWithAssertions:(id)arg1 invalidations:(id)arg2;

@end

