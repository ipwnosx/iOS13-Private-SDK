//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject
{
    _CDRateLimiter *_rateLimiter;
    NSUInteger _lifespanInSeconds;
    NSUInteger _maxNumberStored;
    NSUInteger _timeResolutionInSeconds;
    NSUInteger _maxNumberOfRecipients;
    NSUInteger _maxNumberOfKeywords;
    NSUInteger _maxNumberOfAttachments;
}

+ (id)specialPolicyForFirstPartyApps;
+ (id)defaultPolicyForCalls;
+ (id)defaultPolicyForMessages;
+ (id)defaultPolicyForMeetings;
+ (id)defaultPolicyForEmail;
+ (id)defaultPolicy;
+ (NSUInteger)defaultMaxNumberOfAttachments;
+ (NSUInteger)defaultMaxNumberOfKeywords;
+ (NSUInteger)defaultMaxNumberOfRecipients;
+ (NSUInteger)defaultMaxNumberStored;
+ (NSUInteger)defaultTimeResolutionInSeconds;
+ (NSUInteger)defaultLifespan;
+ (id)policyFromDictionary:(id)arg1;
+ (id)policyWithRateLimiter:(id)arg1 lifespanInSeconds:(NSUInteger)arg2 maxNumberStored:(NSUInteger)arg3 timeResolutionInSeconds:(NSUInteger)arg4 maxNumberOfRecipients:(NSUInteger)arg5 maxNumberOfKeywords:(NSUInteger)arg6 maxNumberOfAttachments:(NSUInteger)arg7;
@property NSUInteger maxNumberOfAttachments; // @synthesize maxNumberOfAttachments=_maxNumberOfAttachments;
@property NSUInteger maxNumberOfKeywords; // @synthesize maxNumberOfKeywords=_maxNumberOfKeywords;
@property NSUInteger maxNumberOfRecipients; // @synthesize maxNumberOfRecipients=_maxNumberOfRecipients;
@property NSUInteger timeResolutionInSeconds; // @synthesize timeResolutionInSeconds=_timeResolutionInSeconds;
@property NSUInteger maxNumberStored; // @synthesize maxNumberStored=_maxNumberStored;
@property NSUInteger lifespanInSeconds; // @synthesize lifespanInSeconds=_lifespanInSeconds;
@property(retain) _CDRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithRateLimiter:(id)arg1 lifespanInSeconds:(NSUInteger)arg2 maxNumberStored:(NSUInteger)arg3 timeResolutionInSeconds:(NSUInteger)arg4 maxNumberOfRecipients:(NSUInteger)arg5 maxNumberOfKeywords:(NSUInteger)arg6 maxNumberOfAttachments:(NSUInteger)arg7;

@end

