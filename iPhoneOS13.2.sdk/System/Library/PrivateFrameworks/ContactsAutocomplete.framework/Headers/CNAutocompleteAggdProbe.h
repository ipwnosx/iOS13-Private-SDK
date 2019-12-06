//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteProbe-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNAutocompleteAggdProbe : NSObject <CNAutocompleteProbe>
{
    NSString *_keyPrefix;
    NSMutableDictionary *_setData;
    NSMutableDictionary *_addData;
    NSString *_bundleID;
}

+ (id)preparedBundleIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSMutableDictionary *addData; // @synthesize addData=_addData;
@property(retain, nonatomic) NSMutableDictionary *setData; // @synthesize setData=_setData;
@property(readonly, copy, nonatomic) NSString *keyPrefix; // @synthesize keyPrefix=_keyPrefix;
// - (void).cxx_destruct;
- (void)sendData;
- (void)recordAddValue:(id)arg1 forKey:(id)arg2;
- (void)recordSetValue:(id)arg1 forKey:(id)arg2;
- (id)fullKey:(id)arg1;
- (id)initWithKeyPrefix:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithKeyPrefix:(id)arg1;
- (id)init;

@end

