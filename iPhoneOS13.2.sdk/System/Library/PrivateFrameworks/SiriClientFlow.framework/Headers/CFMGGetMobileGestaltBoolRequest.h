//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>

@class NSString;

@interface CFMGGetMobileGestaltBoolRequest : SABaseClientBoundCommand <CFLocalAceHandling>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getMobileGestaltBoolRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getMobileGestaltBoolRequest;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *key;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

@end

