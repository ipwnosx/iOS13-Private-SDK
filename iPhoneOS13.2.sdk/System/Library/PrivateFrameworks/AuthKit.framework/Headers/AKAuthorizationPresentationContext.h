//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AKCredentialRequestContext, AKUserInformation, NSArray, NSData, NSNumber, NSString;

@interface AKAuthorizationPresentationContext : NSObject <NSSecureCoding>
{
    NSString *_bundleID;
    NSString *_localizedAppName;
    NSString *_informativeText;
    NSString *_iconName;
    NSData *_iconData;
    NSNumber *_iconScale;
    AKCredentialRequestContext *_credentialRequestContext;
    AKUserInformation *_userInformation;
    NSArray *_loginChoices;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *loginChoices; // @synthesize loginChoices=_loginChoices;
@property(retain, nonatomic) AKUserInformation *userInformation; // @synthesize userInformation=_userInformation;
@property(retain, nonatomic) AKCredentialRequestContext *credentialRequestContext; // @synthesize credentialRequestContext=_credentialRequestContext;
@property(readonly, copy, nonatomic) NSNumber *iconScale; // @synthesize iconScale=_iconScale;
@property(readonly, copy, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(readonly, copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(readonly, copy, nonatomic) NSString *localizedAppName; // @synthesize localizedAppName=_localizedAppName;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (void)_addPresentationParametersForContext:(id)arg1;
- (void)_addPresenterParameters;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithContext:(id)arg1 bundleID:(id)arg2;

@end

