//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFVersion.h>


@class NSString;

@interface HMDAccessoryVersion : HMFVersion <NSCopying, NSSecureCoding>
{
    NSString *_rawVersionString;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *rawVersionString; // @synthesize rawVersionString=_rawVersionString;
- (id)initWithVersionString:(id)arg1;

@end

