//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NADelegateMethodLogSettings, NSArray, NSHashTable, NSMapTable, Protocol;

@interface NADelegateDispatcher : NSObject
{
//    struct os_unfair_lock_s _lock;
    NADelegateMethodLogSettings *_logSettings;
    Protocol *_protocol;
    NSHashTable *_observerTable;
    NSMapTable *_cachedMethodMetadataBySelector;
    NSArray *_overrideObservers;
}

+ (id)_findMethodSignatureForSelector:(SEL)arg1 inProtocol:(id)arg2;
+ (id)dispatcherWithProtocol:(id)arg1 logSettings:(id)arg2;
@property(retain, nonatomic) NSArray *overrideObservers; // @synthesize overrideObservers=_overrideObservers;
@property(readonly, nonatomic) NSMapTable *cachedMethodMetadataBySelector; // @synthesize cachedMethodMetadataBySelector=_cachedMethodMetadataBySelector;
@property(readonly, nonatomic) NSHashTable *observerTable; // @synthesize observerTable=_observerTable;
@property(readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
// property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NADelegateMethodLogSettings *logSettings; // @synthesize logSettings=_logSettings;
// - (void).cxx_destruct;
- (void)_logEventForInvocation:(id)arg1 metadata:(id)arg2;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7 arg4:(id)arg8 arg5:(id)arg9;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7 arg4:(id)arg8;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4 arg1:(id)arg5;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(BOOL)arg3 arg0:(id)arg4;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2;
- (id)_descriptionForArgument:(id)arg1 index:(NSUInteger)arg2 format:(BOOL)arg3 metadata:(id)arg4;
- (id)_trampolineBlockForSelector:(SEL)arg1 withMethodSignature:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)_lock_methodMetadataForSelector:(SEL)arg1;
- (id)_methodMetadataForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dispatchMessageExcludingSender:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)registerCustomLogSettings:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(NSUInteger)arg3;
- (void)registerCustomHandlerForSelector:(SEL)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)_effectiveObservers;
@property(readonly, nonatomic) NSArray *observers;
@property(readonly, nonatomic) id proxy;
- (id)initWithProtocol:(id)arg1 logSettings:(id)arg2;

@end

