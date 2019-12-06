//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSArray;

@interface EDClientState : NSObject <EFLoggable>
{
    BOOL _isForeground;
    NSArray *_visibleMailboxesObjectIds;
}

+ (id)sharedInstance;
+ (id)log;
@property(readonly, nonatomic) BOOL isForeground; // @synthesize isForeground=_isForeground;
@property(readonly, nonatomic) NSArray *visibleMailboxesObjectIds; // @synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds;
// - (void).cxx_destruct;
- (id)giveBoostWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setClientIsInForeground:(BOOL)arg1;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1;
- (void)dealloc;
- (id)init;

@end

