//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHManager, PSConfirmationSpecifier, PSSpecifier;
@protocol PSUIResetStatisticsGroupDelegate;

__attribute__((visibility("hidden")))
@interface PSUIResetStatisticsGroup : NSObject
{
    id <PSUIResetStatisticsGroupDelegate> _delegate;
    unsigned long long _policy;
    PSSpecifier *_groupSpecifier;
    PSConfirmationSpecifier *_resetButtonSpecifier;
    CHManager *_callHistoryManager;
}

@property(retain, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property(retain, nonatomic) PSConfirmationSpecifier *resetButtonSpecifier; // @synthesize resetButtonSpecifier=_resetButtonSpecifier;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) unsigned long long policy; // @synthesize policy=_policy;
@property(nonatomic) __weak id <PSUIResetStatisticsGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearStats:(id)arg1;
- (void)_updateLastResetText;
- (id)_lastUpdateDate;
- (id)specifiers;
- (id)initWithPolicy:(unsigned long long)arg1;

@end
