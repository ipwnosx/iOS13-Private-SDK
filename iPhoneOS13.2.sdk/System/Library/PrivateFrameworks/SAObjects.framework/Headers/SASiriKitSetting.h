//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSArray;

@interface SASiriKitSetting : AceObject <SABackgroundContextObject>
{
}

+ (id)siriKitSettingWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriKitSetting;
@property(nonatomic) BOOL useSASAutoSelectionFeature;
@property(copy, nonatomic) NSArray *listOfSiriKitEnabledDomains;
@property(nonatomic) BOOL applySASToFirstPartyDomains;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

