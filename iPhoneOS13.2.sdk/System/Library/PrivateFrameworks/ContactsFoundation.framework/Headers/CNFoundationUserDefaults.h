//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFoundationUserDefaults-Protocol.h>

@class CNUserDefaults, NSDictionary;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>
{
    CNUserDefaults *_userDefaults;
}

+ (NSUInteger)_convertNSNameOrderToCNNameOrder:(long long)arg1;
+ (id)sharedDefaults;
+ (id)registeredDefaults;
+ (id)makeRegisteredDefaults;
@property(retain) CNUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
// - (void).cxx_destruct;
@property(nonatomic) NSDictionary *filteredAccountsAndContainers;
@property(nonatomic, getter=isShortNameFormatEnabled) BOOL shortNameFormatEnabled;
@property NSUInteger shortNameFormat;
@property BOOL preferNickname;
@property NSUInteger nameOrder;
- (id)countryCode;
- (NSUInteger)sortOrder;
- (NSUInteger)newContactNameOrder;
- (id)init;

@end

