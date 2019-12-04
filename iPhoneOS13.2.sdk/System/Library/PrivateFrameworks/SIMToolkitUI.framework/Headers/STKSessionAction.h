//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAction, STKSessionBehavior;
@protocol BSXPCCoding;

@interface STKSessionAction : NSObject
{
    STKSessionBehavior *_behavior;
    id <BSXPCCoding> _data;
    BSAction *_action;
    _Bool _invalidated;
}

+ (id)_sessionActionFromBSAction:(id)arg1;
@property(readonly, nonatomic) BSAction *_BSAction; // @synthesize _BSAction=_action;
- (void)invalidate;
- (void)sendResponse:(long long)arg1 withContext:(id)arg2;
- (void)sendResponse:(long long)arg1;
@property(readonly, nonatomic) id <BSXPCCoding> sessionData;
@property(readonly, nonatomic) STKSessionBehavior *behavior;
- (void)dealloc;
- (id)initWithBehavior:(id)arg1 data:(id)arg2 responseBlock:(id /* block */)arg3;
- (id)_initWithBSAction:(id)arg1;
- (id)_init;

@end
