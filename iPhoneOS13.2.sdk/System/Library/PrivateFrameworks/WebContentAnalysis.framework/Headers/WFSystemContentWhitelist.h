//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WFSystemContentWhitelist : NSObject
{
    NSArray *_whitelistItems;
}

+ (id)defaultSystemWhitelist;
+ (id)newWhitelistItemFromPlistEntry:(id)arg1;
- (BOOL)isURLWhitelisted:(id)arg1;
- (void)dealloc;
- (id)initWithWhitelistURL:(id)arg1;

@end

