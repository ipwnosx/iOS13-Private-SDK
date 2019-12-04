//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSArray, NSString;

@interface EDClientState : NSObject <EFLoggable>
{
    _Bool _isForeground;
    NSArray *_visibleMailboxesObjectIds;
}

+ (id)sharedInstance;
+ (id)log;
@property(readonly, nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(readonly, nonatomic) NSArray *visibleMailboxesObjectIds; // @synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds;
- (id)giveBoostWithCompletionBlock:(id /* block */)arg1;
- (void)setClientIsInForeground:(_Bool)arg1;
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
