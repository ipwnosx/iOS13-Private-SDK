//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject
{
    FMDEmergencyCallInfoPublisherConfiguration *_publisherConfig;
}

@property(retain, nonatomic) FMDEmergencyCallInfoPublisherConfiguration *publisherConfig; // @synthesize publisherConfig=_publisherConfig;
// - (void).cxx_destruct;
- (void)publishInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

