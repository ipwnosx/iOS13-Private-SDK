//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface NRClientInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_processName;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

