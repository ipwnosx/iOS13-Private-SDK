//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSettingTransactionReceiverProtocol-Protocol.h>
#import <HomeKitDaemon/HMDSettingsControllerProtocol-Protocol.h>
#import <HomeKitDaemon/HMDSettingsMessageController-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSArray, NSMapTable;
@protocol HMDSettingGroupOwnerProtocol, HMDSettingsControllerDelegate, HMDSettingsControllerDependency, HMDSettingsMessageHandlerProtocol;

@interface HMDSettingsController : HMFObject <HMFLogging, HMDSettingsControllerProtocol, HMDSettingsMessageController, HMDSettingTransactionReceiverProtocol>
{
    id <HMDSettingsMessageHandlerProtocol> _messageHandler;
    id <HMDSettingsControllerDependency> _dependency;
    id <HMDSettingsControllerDelegate> _delegate;
    id <HMDSettingGroupOwnerProtocol> _rootGroup;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
}

+ (id)logCategory;
@property(retain) NSMapTable *settingsMap; // @synthesize settingsMap=_settingsMap;
@property(retain) NSMapTable *groupsMap; // @synthesize groupsMap=_groupsMap;
@property(retain) id <HMDSettingGroupOwnerProtocol> rootGroup; // @synthesize rootGroup=_rootGroup;
@property(readonly) __weak id <HMDSettingsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <HMDSettingsControllerDependency> dependency; // @synthesize dependency=_dependency;
@property(readonly) id <HMDSettingsMessageHandlerProtocol> messageHandler; // @synthesize messageHandler=_messageHandler;
// - (void).cxx_destruct;
- (void)transactionSettingConstraintModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionSettingConstraintModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)transactionSettingModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionSettingModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)transactionSettingGroupModelRemoved:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionSettingGroupModelUpdated:(id)arg1 previousModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadWithModels:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)migrateSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateParentsInKeyPathToModel:(id)arg1 usingKeyPathToSetting:(id)arg2;
- (id)_keyPathsFromGroup:(id)arg1 currentPath:(id)arg2;
- (id)keyPathsInExistingSettings;
- (id)_keyPathsToModelInModelIDToModelLookup:(id)arg1 parentIDToModelIDsLookup:(id)arg2 currentID:(id)arg3 currentPath:(id)arg4;
- (id)keyPathsInModels:(id)arg1;
- (id)modelsToMigrateSettings;
- (id)modelsToMakeSettings;
- (void)_updateRootGroup:(id)arg1;
- (void)updateRootGroup:(id)arg1;
- (void)settingsHierarchyDidChange;
- (void)resetupMessageHandlersWithAddedGroups:(id)arg1 removedGroups:(id)arg2 addedSettings:(id)arg3 removedSettings:(id)arg4;
- (void)handleAddedConstraintModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleAddedConstraintModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_flattenedSettingControllerRoot:(id)arg1 withCurrentPath:(id)arg2 andReturnDictionary:(id)arg3;
- (id)settingValuesByKeyPathWithPrefix:(id)arg1;
- (void)handleAddedSettingModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleAddedSettingModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAddedGroupModel:(id)arg1 shouldNotify:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleAddedGroupModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleAddedRootGroup:(id)arg1;
- (void)updateWithValue:(id)arg1 onSetting:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithValue:(id)arg1 onSettingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithEncodedValue:(id)arg1 onSettingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)settingForKeyPath:(id)arg1;
- (id)settingForIdentifier:(id)arg1;
- (id)settingGroupForIdentifier:(id)arg1;
@property(readonly) NSArray *allObjectIdentifiers;
- (void)configure;
- (id)logIdentifier;
- (id)initWithDependency:(id)arg1 delegate:(id)arg2;

@end

