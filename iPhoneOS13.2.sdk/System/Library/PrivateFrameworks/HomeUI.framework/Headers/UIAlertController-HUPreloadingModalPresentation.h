//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HomeUI/HUPreloadableViewController-Protocol.h>

@interface UIAlertController (HUPreloadingModalPresentation) <HUPreloadableViewController>
+ (id)hu_actionSheetWithTitle:(id)arg1 message:(id)arg2 anchorView:(id)arg3;
+ (id)hu_alertControllerForAcknowledgementWithTitle:(id)arg1 message:(id)arg2;
+ (id)hu_alertControllerWithActivityIndicatorAndTitle:(id)arg1;
+ (id)hu_alertControllerForUnimplementedFeature:(id)arg1;
+ (id)alertControllerForAddingDestinationWithTypeString:(id)arg1 andProceed:(CDUnknownBlockType)arg2;
+ (id)alertControllerForAddingDestinationWithType:(NSUInteger)arg1 andProceed:(CDUnknownBlockType)arg2;
+ (id)alertControllerForAddingServiceGroupWithProceed:(CDUnknownBlockType)arg1;
+ (id)alertControllerForAddingRoomWithProceed:(CDUnknownBlockType)arg1;
+ (id)alertControllerForAddingZoneWithProceed:(CDUnknownBlockType)arg1;
+ (id)alertControllerForAddingHomeWithProceed:(CDUnknownBlockType)arg1;
- (id)hu_preloadContent;
- (void)anchorActionSheetIfNeededFrom:(id)arg1;
@end

