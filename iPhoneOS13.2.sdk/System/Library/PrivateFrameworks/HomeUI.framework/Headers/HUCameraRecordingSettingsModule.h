//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUExpandableItemContainerModule.h>

#import <HomeUI/HUCameraSettingsModule-Protocol.h>

@class HFItemProvider, HUCameraPresenceRecordingSettingsModule, HUCameraRecordingOptionsItem, HULocationDeviceManager, NSArray, NSSet, NSString, UIViewController;
@protocol HUCameraRecordingSettingsModuleDelegate;

@interface HUCameraRecordingSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule>
{
    NSSet *_itemProviders;
    unsigned long long _displayStyle;
    NSString *_longestCameraUsageOptionItemTitle;
    NSString *_longestCameraPresenceItemTitle;
    NSArray *_cameraPresenceItems;
    id <HUCameraRecordingSettingsModuleDelegate> _delegate;
    NSSet *_cameraProfiles;
    HUCameraRecordingOptionsItem *_recordingOptionsItem;
    HUCameraPresenceRecordingSettingsModule *_whenHomeSectionModule;
    HUCameraPresenceRecordingSettingsModule *_whenAwaySectionModule;
    HFItemProvider *_headerItemProvider;
    HULocationDeviceManager *_locationDeviceManager;
    NSString *_locationDeviceName;
}

@property(retain, nonatomic) NSString *locationDeviceName; // @synthesize locationDeviceName=_locationDeviceName;
@property(retain, nonatomic) HULocationDeviceManager *locationDeviceManager; // @synthesize locationDeviceManager=_locationDeviceManager;
@property(readonly, nonatomic) HFItemProvider *headerItemProvider; // @synthesize headerItemProvider=_headerItemProvider;
@property(retain, nonatomic) HUCameraPresenceRecordingSettingsModule *whenAwaySectionModule; // @synthesize whenAwaySectionModule=_whenAwaySectionModule;
@property(retain, nonatomic) HUCameraPresenceRecordingSettingsModule *whenHomeSectionModule; // @synthesize whenHomeSectionModule=_whenHomeSectionModule;
@property(readonly, nonatomic) HUCameraRecordingOptionsItem *recordingOptionsItem; // @synthesize recordingOptionsItem=_recordingOptionsItem;
@property(readonly, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(nonatomic) __weak id <HUCameraRecordingSettingsModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *cameraPresenceItems; // @synthesize cameraPresenceItems=_cameraPresenceItems;
@property(readonly, nonatomic) NSString *longestCameraPresenceItemTitle; // @synthesize longestCameraPresenceItemTitle=_longestCameraPresenceItemTitle;
@property(readonly, nonatomic) NSString *longestCameraUsageOptionItemTitle; // @synthesize longestCameraUsageOptionItemTitle=_longestCameraUsageOptionItemTitle;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(retain, nonatomic) NSSet *itemProviders; // @synthesize itemProviders=_itemProviders;
- (id)didSelectItem:(id)arg1;
- (id)_attributedFooterTitle;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)expandableModules;
- (id)_expandingSectionModuleForPresenceType:(unsigned long long)arg1;
- (void)_buildItemProviders;
@property(readonly, nonatomic) NSArray *presenceModules;
@property(readonly, nonatomic) unsigned long long presentAccessModeSetting;
@property(readonly, nonatomic) unsigned long long awayAccessModeSetting;
- (_Bool)isItemHeader:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 displayStyle:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(retain, nonatomic) UIViewController *presentingViewController;
@property(readonly) Class superclass;

@end
