//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/BSDescriptionProviding-Protocol.h>

@class CLRegion, NSArray, NSDate, NSDateComponents, NSDictionary, NSNumber, NSSet, NSString, NSTimeZone, NSURL;

@interface UNSNotificationRecord : NSObject <BSDescriptionProviding>
{
    BOOL _hasDefaultAction;
    BOOL _hasCriticalAlertSound;
    BOOL _shouldBadgeApplicationIcon;
    BOOL _shouldHideDate;
    BOOL _shouldHideTime;
    BOOL _shouldIgnoreDoNotDisturb;
    BOOL _shouldIgnoreDowntime;
    BOOL _shouldIgnoreRingerSwitch;
    BOOL _shouldSuppressScreenLightUp;
    BOOL _shouldPlaySound;
    BOOL _shouldPresentAlert;
    BOOL _shouldAuthenticateDefaultAction;
    BOOL _shouldBackgroundDefaultAction;
    BOOL _shouldPreventNotificationDismissalAfterDefaultAction;
    BOOL _shouldSoundRepeat;
    BOOL _shouldSuppressSyncDismissalWhenRemoved;
    BOOL _shouldUseRequestIdentifierForDismissalSync;
    BOOL _shouldPreemptPresentedNotification;
    BOOL _shouldPreemptSTAR;
    BOOL _allowsDefaultDestinations;
    BOOL _allowsAlertDestination;
    BOOL _allowsLockScreenDestination;
    BOOL _allowsNotificationCenterDestination;
    BOOL _allowsCarPlayDestination;
    BOOL _allowsSpokenDestination;
    BOOL _triggerRepeats;
    NSString *_accessoryImageName;
    NSArray *_attachments;
    NSNumber *_badge;
    NSString *_body;
    NSDate *_contentDate;
    NSArray *_bodyLocalizationArguments;
    NSString *_bodyLocalizationKey;
    NSString *_categoryIdentifier;
    NSString *_threadIdentifier;
    NSNumber *_contentAvailable;
    NSNumber *_mutableContent;
    NSDate *_date;
    NSString *_defaultActionTitle;
    NSString *_defaultActionTitleLocalizationKey;
    NSURL *_defaultActionURL;
    NSDate *_expirationDate;
    NSString *_header;
    NSArray *_headerLocalizationArguments;
    NSString *_headerLocalizationKey;
    NSString *_iconApplicationIdentifier;
    NSString *_iconName;
    NSString *_iconPath;
    NSString *_identifier;
    NSString *_launchImageName;
    NSDate *_requestDate;
    NSString *_audioCategory;
    NSNumber *_audioVolume;
    double _soundMaximumDuration;
    NSString *_subtitle;
    NSArray *_subtitleLocalizationArguments;
    NSString *_subtitleLocalizationKey;
    NSString *_title;
    NSArray *_titleLocalizationArguments;
    NSString *_titleLocalizationKey;
    NSUInteger _realertCount;
    NSString *_summaryArgument;
    NSUInteger _summaryArgumentCount;
    NSString *_targetContentIdentifier;
    NSString *_toneAlertTopic;
    long long _toneAlertType;
    NSString *_toneFileName;
    NSURL *_toneFileURL;
    NSString *_toneIdentifier;
    NSUInteger _toneMediaLibraryItemIdentifier;
    NSSet *_topicIdentifiers;
    NSDate *_triggerDate;
    NSDateComponents *_triggerDateComponents;
    NSString *_triggerRepeatCalendarIdentifier;
    NSUInteger _triggerRepeatInterval;
    CLRegion *_triggerRegion;
    double _triggerTimeInterval;
    NSTimeZone *_triggerTimeZone;
    NSString *_triggerType;
    NSDictionary *_userInfo;
    NSString *_vibrationIdentifier;
    NSURL *_vibrationPatternFileURL;
}

@property(copy, nonatomic) NSURL *vibrationPatternFileURL; // @synthesize vibrationPatternFileURL=_vibrationPatternFileURL;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *triggerType; // @synthesize triggerType=_triggerType;
@property(copy, nonatomic) NSTimeZone *triggerTimeZone; // @synthesize triggerTimeZone=_triggerTimeZone;
@property(nonatomic) double triggerTimeInterval; // @synthesize triggerTimeInterval=_triggerTimeInterval;
@property(copy, nonatomic) CLRegion *triggerRegion; // @synthesize triggerRegion=_triggerRegion;
@property(nonatomic) BOOL triggerRepeats; // @synthesize triggerRepeats=_triggerRepeats;
@property(nonatomic) NSUInteger triggerRepeatInterval; // @synthesize triggerRepeatInterval=_triggerRepeatInterval;
@property(copy, nonatomic) NSString *triggerRepeatCalendarIdentifier; // @synthesize triggerRepeatCalendarIdentifier=_triggerRepeatCalendarIdentifier;
@property(copy, nonatomic) NSDateComponents *triggerDateComponents; // @synthesize triggerDateComponents=_triggerDateComponents;
@property(copy, nonatomic) NSDate *triggerDate; // @synthesize triggerDate=_triggerDate;
@property(nonatomic) BOOL allowsSpokenDestination; // @synthesize allowsSpokenDestination=_allowsSpokenDestination;
@property(nonatomic) BOOL allowsCarPlayDestination; // @synthesize allowsCarPlayDestination=_allowsCarPlayDestination;
@property(nonatomic) BOOL allowsNotificationCenterDestination; // @synthesize allowsNotificationCenterDestination=_allowsNotificationCenterDestination;
@property(nonatomic) BOOL allowsLockScreenDestination; // @synthesize allowsLockScreenDestination=_allowsLockScreenDestination;
@property(nonatomic) BOOL allowsAlertDestination; // @synthesize allowsAlertDestination=_allowsAlertDestination;
@property(nonatomic) BOOL allowsDefaultDestinations; // @synthesize allowsDefaultDestinations=_allowsDefaultDestinations;
@property(copy, nonatomic) NSSet *topicIdentifiers; // @synthesize topicIdentifiers=_topicIdentifiers;
@property(nonatomic) NSUInteger toneMediaLibraryItemIdentifier; // @synthesize toneMediaLibraryItemIdentifier=_toneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(copy, nonatomic) NSURL *toneFileURL; // @synthesize toneFileURL=_toneFileURL;
@property(copy, nonatomic) NSString *toneFileName; // @synthesize toneFileName=_toneFileName;
@property(nonatomic) long long toneAlertType; // @synthesize toneAlertType=_toneAlertType;
@property(copy, nonatomic) NSString *toneAlertTopic; // @synthesize toneAlertTopic=_toneAlertTopic;
@property(copy, nonatomic) NSString *targetContentIdentifier; // @synthesize targetContentIdentifier=_targetContentIdentifier;
@property(nonatomic) NSUInteger summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(nonatomic) NSUInteger realertCount; // @synthesize realertCount=_realertCount;
@property(copy, nonatomic) NSString *titleLocalizationKey; // @synthesize titleLocalizationKey=_titleLocalizationKey;
@property(copy, nonatomic) NSArray *titleLocalizationArguments; // @synthesize titleLocalizationArguments=_titleLocalizationArguments;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *subtitleLocalizationKey; // @synthesize subtitleLocalizationKey=_subtitleLocalizationKey;
@property(copy, nonatomic) NSArray *subtitleLocalizationArguments; // @synthesize subtitleLocalizationArguments=_subtitleLocalizationArguments;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) double soundMaximumDuration; // @synthesize soundMaximumDuration=_soundMaximumDuration;
@property(copy, nonatomic) NSNumber *audioVolume; // @synthesize audioVolume=_audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @synthesize audioCategory=_audioCategory;
@property(nonatomic) BOOL shouldPreemptSTAR; // @synthesize shouldPreemptSTAR=_shouldPreemptSTAR;
@property(nonatomic) BOOL shouldPreemptPresentedNotification; // @synthesize shouldPreemptPresentedNotification=_shouldPreemptPresentedNotification;
@property(nonatomic) BOOL shouldUseRequestIdentifierForDismissalSync; // @synthesize shouldUseRequestIdentifierForDismissalSync=_shouldUseRequestIdentifierForDismissalSync;
@property(nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved; // @synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved;
@property(nonatomic) BOOL shouldSoundRepeat; // @synthesize shouldSoundRepeat=_shouldSoundRepeat;
@property(nonatomic) BOOL shouldPreventNotificationDismissalAfterDefaultAction; // @synthesize shouldPreventNotificationDismissalAfterDefaultAction=_shouldPreventNotificationDismissalAfterDefaultAction;
@property(nonatomic) BOOL shouldBackgroundDefaultAction; // @synthesize shouldBackgroundDefaultAction=_shouldBackgroundDefaultAction;
@property(nonatomic) BOOL shouldAuthenticateDefaultAction; // @synthesize shouldAuthenticateDefaultAction=_shouldAuthenticateDefaultAction;
@property(nonatomic) BOOL shouldPresentAlert; // @synthesize shouldPresentAlert=_shouldPresentAlert;
@property(nonatomic) BOOL shouldPlaySound; // @synthesize shouldPlaySound=_shouldPlaySound;
@property(nonatomic) BOOL shouldSuppressScreenLightUp; // @synthesize shouldSuppressScreenLightUp=_shouldSuppressScreenLightUp;
@property(nonatomic) BOOL shouldIgnoreRingerSwitch; // @synthesize shouldIgnoreRingerSwitch=_shouldIgnoreRingerSwitch;
@property(nonatomic) BOOL shouldIgnoreDowntime; // @synthesize shouldIgnoreDowntime=_shouldIgnoreDowntime;
@property(nonatomic) BOOL shouldIgnoreDoNotDisturb; // @synthesize shouldIgnoreDoNotDisturb=_shouldIgnoreDoNotDisturb;
@property(nonatomic) BOOL shouldHideTime; // @synthesize shouldHideTime=_shouldHideTime;
@property(nonatomic) BOOL shouldHideDate; // @synthesize shouldHideDate=_shouldHideDate;
@property(nonatomic) BOOL shouldBadgeApplicationIcon; // @synthesize shouldBadgeApplicationIcon=_shouldBadgeApplicationIcon;
@property(copy, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(copy, nonatomic) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(copy, nonatomic) NSString *iconApplicationIdentifier; // @synthesize iconApplicationIdentifier=_iconApplicationIdentifier;
@property(copy, nonatomic) NSString *headerLocalizationKey; // @synthesize headerLocalizationKey=_headerLocalizationKey;
@property(copy, nonatomic) NSArray *headerLocalizationArguments; // @synthesize headerLocalizationArguments=_headerLocalizationArguments;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) BOOL hasCriticalAlertSound; // @synthesize hasCriticalAlertSound=_hasCriticalAlertSound;
@property(copy, nonatomic) NSURL *defaultActionURL; // @synthesize defaultActionURL=_defaultActionURL;
@property(copy, nonatomic) NSString *defaultActionTitleLocalizationKey; // @synthesize defaultActionTitleLocalizationKey=_defaultActionTitleLocalizationKey;
@property(copy, nonatomic) NSString *defaultActionTitle; // @synthesize defaultActionTitle=_defaultActionTitle;
@property(nonatomic) BOOL hasDefaultAction; // @synthesize hasDefaultAction=_hasDefaultAction;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSNumber *mutableContent; // @synthesize mutableContent=_mutableContent;
@property(copy, nonatomic) NSNumber *contentAvailable; // @synthesize contentAvailable=_contentAvailable;
@property(copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(copy, nonatomic) NSString *bodyLocalizationKey; // @synthesize bodyLocalizationKey=_bodyLocalizationKey;
@property(copy, nonatomic) NSArray *bodyLocalizationArguments; // @synthesize bodyLocalizationArguments=_bodyLocalizationArguments;
@property(copy, nonatomic) NSDate *contentDate; // @synthesize contentDate=_contentDate;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSString *accessoryImageName; // @synthesize accessoryImageName=_accessoryImageName;
// - (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, nonatomic) BOOL hasPendingTrigger;
@property(readonly, nonatomic) BOOL hasSound;
@property(readonly, nonatomic) BOOL hasBadge;
@property(readonly, nonatomic) BOOL hasAlertContent;
- (BOOL)willNotifyUser;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSimilar:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end

