//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SBAWDMetricDelegate;

@interface SBAWDMetric : NSObject
{
    id <SBAWDMetricDelegate> _delegate;
}

@property(nonatomic) __weak id <SBAWDMetricDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)configureWithData:(id)arg1;
- (NSUInteger)metricID;
- (Class)dataClass;
- (void)_postMetric:(id)arg1 withID:(unsigned int)arg2;
- (void)postWithDataBuilder:(CDUnknownBlockType)arg1;
- (NSUInteger)componentID;

@end

