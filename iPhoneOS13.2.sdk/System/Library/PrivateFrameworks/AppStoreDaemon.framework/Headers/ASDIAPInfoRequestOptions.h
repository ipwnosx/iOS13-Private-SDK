//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDIAPInfoRequestOptions : ASDRequestOptions
{
    NSArray *_adamIds;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *adamIds; // @synthesize adamIds=_adamIds;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAdamIds:(id)arg1;

@end

