//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReaderOutput/SCROPendingBrailleEdit.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCROPendingBrailleModifierPair : SCROPendingBrailleEdit
{
    NSString *_pendingBraille;
    NSArray *_modifiers;
}

@property(readonly, nonatomic) NSArray *modifiers; // @synthesize modifiers=_modifiers;
@property(readonly, nonatomic) NSString *pendingBraille; // @synthesize pendingBraille=_pendingBraille;
- (id)initWithPendingBraille:(id)arg1 modifiers:(id)arg2;

@end
