//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@interface SAWebSearchStarted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)searchStartedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchStarted;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

