//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRCArgumentHolderPrivate;

@interface SCRCArgumentHolder : NSObject
{
    SCRCArgumentHolderPrivate *_private;
}

// - (void).cxx_destruct;
- (BOOL)isRequired;
- (void)setIsRequired:(BOOL)arg1;
- (id)argumentDescription;
- (void)setArgumentDescription:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)argument;
- (void)setArgument:(id)arg1;
- (id)option;
- (void)setOption:(id)arg1;
- (long long)compare:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)process;
- (id)init;

@end

