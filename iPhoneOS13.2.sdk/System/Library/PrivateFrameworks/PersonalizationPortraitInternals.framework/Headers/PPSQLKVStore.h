//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPSQLKVStore : NSObject
{
}

+ (void)removeBlobForKey:(id)arg1 transaction:(id)arg2;
+ (void)storeBlob:(id)arg1 forKey:(id)arg2 transaction:(id)arg3;
+ (id)loadBlobForKey:(id)arg1 transaction:(id)arg2;

@end

