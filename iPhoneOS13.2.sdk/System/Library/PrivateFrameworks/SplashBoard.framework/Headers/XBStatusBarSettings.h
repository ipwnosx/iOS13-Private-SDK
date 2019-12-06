//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSSettingDescriptionProvider-Protocol.h>

@class BSMutableSettings, NSString;

@interface XBStatusBarSettings : NSObject <BSSettingDescriptionProvider, NSCopying, NSMutableCopying, NSSecureCoding>
{
    BSMutableSettings *_settings;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(NSUInteger)arg3;
- (id)keyDescriptionForSetting:(NSUInteger)arg1;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isBackgroundActivityEnabled) BOOL backgroundActivityEnabled;
@property(readonly, nonatomic) long long style;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithBSSettings:(id)arg1;
- (id)init;

@end

