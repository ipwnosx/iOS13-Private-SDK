//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy
{
    Class _objectClass;
    MFWeakReferenceHolder *_weakRef;
    NSUInteger _hash;
}

+ (id)weakProxyForObject:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isProxy;
- (Class)class;
- (Class)superclass;
- (id)self;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

