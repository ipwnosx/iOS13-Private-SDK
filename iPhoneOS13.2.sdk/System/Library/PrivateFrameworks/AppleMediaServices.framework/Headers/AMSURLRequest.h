//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSMutableURLRequest.h>


@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying>
{
    AMSURLRequestProperties *_properties;
}

@property(retain, nonatomic) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithRequest:(id)arg1;

@end

