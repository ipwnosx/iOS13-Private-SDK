//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUnfairLock;

@interface NFLazy : NSObject
{
    id _value;
    id /* CDUnknownBlockType */ _constructor;
    NFUnfairLock *_lock;
}

@property(readonly, copy, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ constructor; // @synthesize constructor=_constructor;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
- (id)initWithConstructor:(CDUnknownBlockType)arg1;

@end

