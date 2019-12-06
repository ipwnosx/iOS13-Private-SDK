//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition;

@interface RTTDictionaryManager : NSObject
{
    NSCondition *_condition;
    NSArray *_availableDictionaries;
}

+ (id)availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1;
@property(retain, nonatomic) NSArray *availableDictionaries; // @synthesize availableDictionaries=_availableDictionaries;
// - (void).cxx_destruct;
- (id)_ttyDictionaryAsset;
- (BOOL)_isStalledAutoDownloadAsset:(id)arg1;
- (BOOL)downloadAsset:(id)arg1 withError:(id )arg2;
- (void)deleteIfNeeded;
- (void)downloadIfNeeded;
- (void)dealloc;
- (id)init;

@end

