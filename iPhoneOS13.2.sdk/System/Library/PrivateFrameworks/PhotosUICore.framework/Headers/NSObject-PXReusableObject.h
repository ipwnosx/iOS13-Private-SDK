//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSObject (PXReusableObject)
+ (id)px_descriptionForAssertionMessage;
+ (void)px_enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
+ (void)px_performOnceForFirstAncestorClassSubclassOf:(Class)arg1 context:(void )arg2 block:(CDUnknownBlockType)arg3;
+ (void)px_swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
@property(nonatomic, setter=_px_setReuseIdentifier:) long long _px_reuseIdentifier;
@property(readonly) NSString *px_descriptionForAssertionMessage;
@end

