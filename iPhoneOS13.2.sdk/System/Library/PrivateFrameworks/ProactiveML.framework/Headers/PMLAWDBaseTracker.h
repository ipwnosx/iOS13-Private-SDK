//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDProactiveModelFittingModelInfo;

@interface PMLAWDBaseTracker : NSObject
{
    AWDProactiveModelFittingModelInfo *_modelInfo;
}

+ (id)trackerForPlanId:(NSString *)arg1;
+ (id)trackerForModelName:(id)arg1 modelVersion:(id)arg2 modelLocale:(id)arg3;
@property(readonly, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo; // @synthesize modelInfo=_modelInfo;
// - (void).cxx_destruct;
- (void)postMetricId:(unsigned int)arg1 message:(id)arg2;
- (id)initWithModel:(id)arg1;

@end

