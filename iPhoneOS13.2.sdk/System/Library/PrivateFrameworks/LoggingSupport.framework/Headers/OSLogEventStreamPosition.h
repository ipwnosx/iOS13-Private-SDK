//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface OSLogEventStreamPosition : NSObject <NSSecureCoding>
{
    unsigned char _source[16];
    unsigned char _uuid[16];
    NSUInteger _ct;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSUInteger continuousTime;
@property(readonly) const char UUID;
@property(readonly) const char sourceUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(const char )arg1 bootUUID:(const char )arg2 time:(NSUInteger)arg3;

@end

