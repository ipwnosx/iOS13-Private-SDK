//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject
{
    NSHashTable *_disabledContexts;
    BOOL _disabled;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (id)description;
- (void)enableAutomaticAppearanceForContext:(id)arg1;
- (void)disableAutomaticAppearanceForContext:(id)arg1;
- (id)init;

@end

