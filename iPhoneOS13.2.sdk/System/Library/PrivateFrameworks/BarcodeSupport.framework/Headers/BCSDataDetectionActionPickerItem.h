//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/BCSActionPickerItem.h>

#import <BarcodeSupport/DDDetectionControllerInteractionDelegate-Protocol.h>

@class CNContact, DDAction, NSString;

@interface BCSDataDetectionActionPickerItem : BCSActionPickerItem <DDDetectionControllerInteractionDelegate>
{
    DDAction *_ddAction;
}

// - (void).cxx_destruct;
- (void)action:(id)arg1 didDismissAlertController:(id)arg2;
- (void)performAction;
@property(readonly, nonatomic) NSString *icsString;
@property(readonly, nonatomic) CNContact *contact;
- (id)actionURL;
- (id)targetApplicationBundleIdentifier;
- (id)label;
- (BOOL)isCopyActionItem;
- (BOOL)shouldDismissAlertWhenActionIsTaken;
- (id)initWithAction:(id)arg1 ddAction:(id)arg2;

@end

