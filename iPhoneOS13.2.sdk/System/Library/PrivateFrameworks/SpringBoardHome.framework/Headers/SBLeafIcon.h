//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIcon.h>


@class NSMutableSet, NSString;
@protocol SBLeafIconDataSource;

@interface SBLeafIcon : SBIcon <NSCopying>
{
    NSString *_leafIdentifier;
    NSString *_applicationBundleID;
    NSMutableSet *_dataSources;
    id <SBLeafIconDataSource> _activeDataSource;
    id <SBLeafIconDataSource> _dataSourceAtUninstallation;
}

+ (Class)downloadingIconClass;
// - (void).cxx_destruct;
- (id)nodeIdentifier;
- (void)launchFromLocation:(id)arg1 context:(id)arg2;
- (id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1;
- (BOOL)isLaunchDisabledForObscuredReason;
- (BOOL)isLaunchEnabled;
- (void)completeUninstall;
- (void)setUninstalled;
- (BOOL)isUninstallSupported;
- (long long)labelAccessoryType;
- (long long)accessoryTypeForLocation:(id)arg1;
- (id)accessoryTextForLocation:(id)arg1;
- (id)badgeNumberOrString;
- (BOOL)isProgressPaused;
- (double)progressPercent;
- (long long)progressState;
- (BOOL)canTightenLabel;
- (BOOL)canTruncateLabel;
- (id)displayNameForLocation:(id)arg1;
//  (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo)arg1;
//  (id)genericIconImageWithInfo:(struct SBIconImageInfo)arg1;
//  (id)generateIconImageWithInfo:(struct SBIconImageInfo)arg1;
- (void)_noteDataSourceDidInvalidateNotification:(id)arg1;
- (void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1;
- (void)_noteActiveDataSourceDidChangeNotification:(id)arg1;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1;
@property(readonly, nonatomic) id <SBLeafIconDataSource> activeDataSource;
- (void)removeIconDataSourcesOfClass:(Class)arg1;
- (void)removeIconDataSource:(id)arg1;
- (void)addIconDataSource:(id)arg1;
- (void)_updateActiveDataSource;
- (BOOL)isTimedOut;
@property(readonly, copy, nonatomic) NSString *masqueradeIdentifier;
@property(readonly, copy, nonatomic) NSString *applicationBundleID;
- (id)leafIdentifier;
- (BOOL)isLeafIcon;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (id)init;

@end

