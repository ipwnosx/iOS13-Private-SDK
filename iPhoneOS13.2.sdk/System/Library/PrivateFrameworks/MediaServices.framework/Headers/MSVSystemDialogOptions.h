//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MSVSystemDialogOptions : NSObject
{
    BOOL _showAsTopmost;
    BOOL _forceModalAlertAppearance;
    BOOL _showOnLockscreen;
    BOOL _dismissOverlaysOnLockscreen;
    NSString *_alertHeader;
    NSString *_alertMessage;
    NSURL *_alertIconURL;
    NSArray *_allowedApplicationBundleIDs;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
}

@property(nonatomic) BOOL dismissOverlaysOnLockscreen; // @synthesize dismissOverlaysOnLockscreen=_dismissOverlaysOnLockscreen;
@property(nonatomic) BOOL showOnLockscreen; // @synthesize showOnLockscreen=_showOnLockscreen;
@property(nonatomic) BOOL forceModalAlertAppearance; // @synthesize forceModalAlertAppearance=_forceModalAlertAppearance;
@property(nonatomic) BOOL showAsTopmost; // @synthesize showAsTopmost=_showAsTopmost;
@property(copy, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(copy, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(copy, nonatomic) NSArray *allowedApplicationBundleIDs; // @synthesize allowedApplicationBundleIDs=_allowedApplicationBundleIDs;
@property(copy, nonatomic) NSURL *alertIconURL; // @synthesize alertIconURL=_alertIconURL;
@property(copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(copy, nonatomic) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;
// - (void).cxx_destruct;

@end

