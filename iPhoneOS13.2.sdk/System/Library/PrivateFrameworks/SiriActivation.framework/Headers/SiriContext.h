//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class SiriContextOverride;

@interface SiriContext : NSObject <NSCopying, NSSecureCoding>
{
    SiriContextOverride *_contextOverride;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) SiriContextOverride *contextOverride; // @synthesize contextOverride=_contextOverride;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithContextOverride:(id)arg1;

@end

