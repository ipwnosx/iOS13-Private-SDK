//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKHeartRateQueryObserver-Protocol.h>

@class HKQuantitySample;
@protocol NTKHeartRateModelDelegate;

@interface NTKHeartRateModel : NSObject <NTKHeartRateQueryObserver>
{
    id <NTKHeartRateModelDelegate> _delegate;
    HKQuantitySample *_mostRecentHeartRate;
}

@property(retain, nonatomic) HKQuantitySample *mostRecentHeartRate; // @synthesize mostRecentHeartRate=_mostRecentHeartRate;
@property(readonly, nonatomic) __weak id <NTKHeartRateModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)manager:(id)arg1 receivedLatestHeartRateSample:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
