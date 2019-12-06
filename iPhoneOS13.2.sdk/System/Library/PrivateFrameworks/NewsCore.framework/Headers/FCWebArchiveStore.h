//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetStore;

@interface FCWebArchiveStore : NSObject
{
    FCAssetStore *_assetStore;
}

@property(retain, nonatomic) FCAssetStore *assetStore; // @synthesize assetStore=_assetStore;
// - (void).cxx_destruct;
- (id)allWebArchiveKeys;
- (NSUInteger)totalSizeOfAllWebArchives;
- (BOOL)deleteWebArchiveForKey:(id)arg1;
- (BOOL)saveWebArchiveData:(id)arg1 forKey:(id)arg2;
- (id)webArchiveURLForKey:(id)arg1;
- (id)initWithStoreDirectory:(id)arg1;

@end

