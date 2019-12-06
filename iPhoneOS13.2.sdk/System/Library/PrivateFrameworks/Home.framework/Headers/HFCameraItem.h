//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAccessoryProfileItem.h>

#import <Home/HFCompoundItemProtocol-Protocol.h>

@class NSString;
@protocol HFHomeKitObject;

@interface HFCameraItem : HFAccessoryProfileItem <HFCompoundItemProtocol>
{
}

+ (BOOL)cameraContainsMotionServiceItem:(id)arg1;
+ (void)getErrorDescription:(out id )arg1 detailedErrorDescription:(out id )arg2 forCameraStreamError:(id)arg3;
@property(readonly, nonatomic) id <HFHomeKitObject> primaryHomeKitObject;
@property(readonly, nonatomic) NSUInteger numberOfCompoundItems;
@property(readonly, nonatomic) BOOL isCompoundItem;
- (id)_subclass_updateWithOptions:(id)arg1;
@property(readonly, copy) NSString *description;

@end

