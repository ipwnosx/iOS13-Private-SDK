//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNHeapObject : NSObject
{
    NSString *_className;
    NSString *_binary;
    NSUInteger _count;
    NSUInteger _bytes;
}

@property(nonatomic) NSUInteger bytes; // @synthesize bytes=_bytes;
@property(nonatomic) NSUInteger count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *binary; // @synthesize binary=_binary;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
// - (void).cxx_destruct;
- (id)classAndBinaryKey;
- (id)description;

@end

