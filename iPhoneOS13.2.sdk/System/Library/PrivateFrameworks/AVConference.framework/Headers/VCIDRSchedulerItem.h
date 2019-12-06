//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCIDRSchedulerItem : NSObject
{
    unsigned int _framePosition;
    unsigned int _budgetInCaptureFrames;
    unsigned int _weightFactor;
    NSMutableArray *_streams;
}

@property(nonatomic) unsigned int framePosition; // @synthesize framePosition=_framePosition;
@property(nonatomic) unsigned int weightFactor; // @synthesize weightFactor=_weightFactor;
@property(readonly, nonatomic) NSArray *streams; // @synthesize streams=_streams;
@property(nonatomic) unsigned int budgetInCaptureFrames; // @synthesize budgetInCaptureFrames=_budgetInCaptureFrames;
- (id)description;
- (long long)compareBudget:(id)arg1;
- (void)addStream:(id)arg1;
- (void)dealloc;
- (id)init;

@end

