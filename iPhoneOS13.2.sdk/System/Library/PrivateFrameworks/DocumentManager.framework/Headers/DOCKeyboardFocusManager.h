//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol DOCKeyboardFocusable;

@interface DOCKeyboardFocusManager : NSObject
{
    id <DOCKeyboardFocusable> _currentlyFocused;
    NSPointerArray *_allKeyboardFocusable;
}

+ (id)sharedManager;
@property(retain) NSPointerArray *allKeyboardFocusable; // @synthesize allKeyboardFocusable=_allKeyboardFocusable;
// - (void).cxx_destruct;
- (BOOL)_isRegistered:(id)arg1;
- (void)_printAllRegisteredFocusable;
- (id)adjacentFocusableToFocusable:(id)arg1 direction:(long long)arg2;
- (BOOL)restoreCurrentlyFocused;
- (BOOL)requestCurrentFocus:(id)arg1;
- (id)currentlyFocused;
- (void)unregisterKeyboardFocusable:(id)arg1;
- (void)registerKeyboardFocusable:(id)arg1;
- (id)init;

@end

