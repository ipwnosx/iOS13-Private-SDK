//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItem, HFUserNotificationServiceSettings, HUCameraSmartDetectionSettingsModule, HUTriggerConditionEditorItemModule;
@protocol HFServiceLikeItem, HFUserNotificationServiceSettingsProviding;

@interface HUStatusAndNotificationsItemManager : HFItemManager
{
    BOOL _showStatusSection;
    BOOL _showsCameraSnapshotSection;
    BOOL _showsMotionNotificationSection;
    BOOL _showsCameraSmartNotificationSection;
    BOOL _showsTriggerConditionSection;
    BOOL _showsDoorbellSection;
    BOOL _showsSmartActivitySection;
    BOOL _showsCameraStatusChangeSection;
    BOOL _serviceItemBelongsToCamera;
    HFStaticItem *_includeInStatusItem;
    HFStaticItem *_allowNotificationsItem;
    HFStaticItem *_allowMotionNotificationsItem;
    HFStaticItem *_allowCameraSnapshotsItem;
    HFStaticItem *_allowDoorbellNotificationsItem;
    HFStaticItem *_allowActivityNotificationsItem;
    HFStaticItem *_allowCameraStatusChangesItem;
    HFItem<HFServiceLikeItem> *_serviceItem;
    HUTriggerConditionEditorItemModule *_conditionModule;
    HUCameraSmartDetectionSettingsModule *_cameraSmartDetectionSettingsModule;
}

@property(nonatomic) BOOL serviceItemBelongsToCamera; // @synthesize serviceItemBelongsToCamera=_serviceItemBelongsToCamera;
@property(nonatomic) BOOL showsCameraStatusChangeSection; // @synthesize showsCameraStatusChangeSection=_showsCameraStatusChangeSection;
@property(nonatomic) BOOL showsSmartActivitySection; // @synthesize showsSmartActivitySection=_showsSmartActivitySection;
@property(nonatomic) BOOL showsDoorbellSection; // @synthesize showsDoorbellSection=_showsDoorbellSection;
@property(nonatomic) BOOL showsTriggerConditionSection; // @synthesize showsTriggerConditionSection=_showsTriggerConditionSection;
@property(nonatomic) BOOL showsCameraSmartNotificationSection; // @synthesize showsCameraSmartNotificationSection=_showsCameraSmartNotificationSection;
@property(nonatomic) BOOL showsMotionNotificationSection; // @synthesize showsMotionNotificationSection=_showsMotionNotificationSection;
@property(nonatomic) BOOL showsCameraSnapshotSection; // @synthesize showsCameraSnapshotSection=_showsCameraSnapshotSection;
@property(readonly, nonatomic) HUCameraSmartDetectionSettingsModule *cameraSmartDetectionSettingsModule; // @synthesize cameraSmartDetectionSettingsModule=_cameraSmartDetectionSettingsModule;
@property(readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionModule; // @synthesize conditionModule=_conditionModule;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceItem; // @synthesize serviceItem=_serviceItem;
@property(retain, nonatomic) HFStaticItem *allowCameraStatusChangesItem; // @synthesize allowCameraStatusChangesItem=_allowCameraStatusChangesItem;
@property(retain, nonatomic) HFStaticItem *allowActivityNotificationsItem; // @synthesize allowActivityNotificationsItem=_allowActivityNotificationsItem;
@property(retain, nonatomic) HFStaticItem *allowDoorbellNotificationsItem; // @synthesize allowDoorbellNotificationsItem=_allowDoorbellNotificationsItem;
@property(retain, nonatomic) HFStaticItem *allowCameraSnapshotsItem; // @synthesize allowCameraSnapshotsItem=_allowCameraSnapshotsItem;
@property(retain, nonatomic) HFStaticItem *allowMotionNotificationsItem; // @synthesize allowMotionNotificationsItem=_allowMotionNotificationsItem;
@property(retain, nonatomic) HFStaticItem *allowNotificationsItem; // @synthesize allowNotificationsItem=_allowNotificationsItem;
@property(retain, nonatomic) HFStaticItem *includeInStatusItem; // @synthesize includeInStatusItem=_includeInStatusItem;
@property(nonatomic) BOOL showStatusSection; // @synthesize showStatusSection=_showStatusSection;
// - (void).cxx_destruct;
- (id)homeStatusVisibleObject;
@property(readonly, nonatomic) HFUserNotificationServiceSettings *notificationSettings;
@property(readonly, nonatomic) id <HFUserNotificationServiceSettingsProviding> notificationSettingsProvider;
- (id)_updateNotificationSettings:(id)arg1;
- (id)updateCameraSmartNotificationCondition:(id)arg1;
- (id)updateNotificationCondition:(id)arg1;
- (id)updateAllowCameraStatusChangeNotifications:(BOOL)arg1;
- (id)updateAllowSmartActivityNotifications:(BOOL)arg1;
- (id)updateAllowSnapshotsInNotifications:(BOOL)arg1;
- (id)updateAllowDoorbellNotifications:(BOOL)arg1;
- (id)updateAllowMotionNotifications:(BOOL)arg1;
- (id)updateAllowNotifications:(BOOL)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithServiceItem:(id)arg1 delegate:(id)arg2 home:(id)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end

