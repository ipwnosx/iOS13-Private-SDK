//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BSZeroingWeakReference : NSObject
{
    id _object;
    Class _objectClass;
    NSUInteger _objectAddress;
}

+ (id)referenceWithObject:(id)arg1;
@property(nonatomic) NSUInteger objectAddress; // @synthesize objectAddress=_objectAddress;
@property(nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
// - (void).cxx_destruct;
@property(readonly, nonatomic) __weak id object;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)init;
- (id)initWithObject:(id)arg1;

@end

