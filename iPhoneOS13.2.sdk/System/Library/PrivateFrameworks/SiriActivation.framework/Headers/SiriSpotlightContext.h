//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriActivation/SiriContext.h>

@class NSString;

@interface SiriSpotlightContext : SiriContext
{
    NSString *_utteranceText;
    long long _source;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *utteranceText; // @synthesize utteranceText=_utteranceText;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

