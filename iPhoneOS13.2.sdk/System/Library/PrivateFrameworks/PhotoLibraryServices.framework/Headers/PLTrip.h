//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLTrip : NSObject
{
    NSUInteger _type;
    NSArray *_items;
}

@property(readonly) NSArray *items; // @synthesize items=_items;
@property(readonly) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (double)duration;
- (id)typeDescription;
- (id)description;
- (id)initWithItems:(id)arg1 type:(NSUInteger)arg2;

@end

