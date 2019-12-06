//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUPresenceUserOptionState : NSObject
{
    BOOL _selected;
    BOOL _locationAvailable;
    NSUInteger _activationGranularity;
}

@property(readonly, nonatomic, getter=isLocationAvailable) BOOL locationAvailable; // @synthesize locationAvailable=_locationAvailable;
@property(readonly, nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) NSUInteger activationGranularity; // @synthesize activationGranularity=_activationGranularity;
- (id)initWithActivationGranularity:(NSUInteger)arg1 selected:(BOOL)arg2 locationAvailable:(BOOL)arg3;
- (id)init;

@end

