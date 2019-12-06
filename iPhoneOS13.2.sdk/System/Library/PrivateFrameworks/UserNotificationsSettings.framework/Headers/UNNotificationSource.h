//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString, UNNotificationIcon, UNNotificationSourceSettings;

@interface UNNotificationSource : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isHiddenFromSettings;
    NSString *_sourceIdentifier;
    NSString *_displayName;
    UNNotificationIcon *_icon;
    UNNotificationSourceSettings *_sourceSettings;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) UNNotificationSourceSettings *sourceSettings; // @synthesize sourceSettings=_sourceSettings;
@property(readonly, copy, nonatomic) UNNotificationIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) BOOL isHiddenFromSettings; // @synthesize isHiddenFromSettings=_isHiddenFromSettings;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 isHidden:(BOOL)arg2 displayName:(id)arg3 icon:(id)arg4 settings:(id)arg5;

@end

