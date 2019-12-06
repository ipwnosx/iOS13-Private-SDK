//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SFProximityEstimator.h>

__attribute__((visibility("hidden")))
@interface SFProximityEstimatorMaxOfMean : SFProximityEstimator
{
    char _channelNumberArray;
    char _rssiArray;
    unsigned int _rssiCount;
    unsigned int _rssiIndex;
    unsigned int _rssiMinCount;
}

- (int)_estimateRSSIForSFBLEDevice:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithProximityInfo:(id)arg1;

@end

