//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface GCKOOBMessage : NSObject <NSSecureCoding>
{
    unsigned int type;
    unsigned int band;
    NSData *data;
}

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)data;
- (unsigned int)band;
- (unsigned int)type;
- (id)init;

@end

