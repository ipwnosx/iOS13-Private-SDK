//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WFLSMMap, WFSystemContentWhitelist;

__attribute__((visibility("hidden")))
@interface WFJudge : NSObject
{
    WFLSMMap *map;
    WFSystemContentWhitelist *whitelist;
}

+ (id)defaultJudge;
+ (id)defaultLSMMapPath;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id )arg4 pageTitle:(id )arg5;
- (id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id )arg3 pageTitle:(id )arg4;
- (id)_pronounceOnWebpage:(id)arg1;
- (id)pronounceOnWebpage:(id)arg1;
- (void)dealloc;
- (id)initWithMap:(id)arg1 systemContentWhitelist:(id)arg2;
- (id)initWithMap:(id)arg1;

@end

