//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFStaticItemProvider.h>

@class NSSet;

@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider
{
    NSUInteger _displayStyle;
    NSSet *_cameraProfiles;
}

@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(readonly, nonatomic) NSUInteger displayStyle; // @synthesize displayStyle=_displayStyle;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)initWithItems:(id)arg1;
- (id)initWithCameraProfiles:(id)arg1 displayStyle:(NSUInteger)arg2;

@end

