//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IconServices/ISIconCacheIOS.h>

__attribute__((visibility("hidden")))
@interface ISIconCacheClient : ISIconCacheIOS
{
    NSUInteger _sandboxExtensionHandle;
}

+ (id)serviceName;
+ (id)sharedInstance;
@property NSUInteger sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
- (void)invalidateCacheEntriesForBundleIdentifier:(id)arg1;
- (id)iconBitmapDataWithResourceLocator:(id)arg1 variant:(int)arg2 options:(int)arg3;
- (void)_fetchCacheURLAndSalt;
- (id)connection;
- (id)init;

@end

