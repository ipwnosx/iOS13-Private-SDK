//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandCompleted;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *serverValidity;
@property(copy, nonatomic) NSURL *homeIdentifier;
@property(copy, nonatomic) NSString *commandOutcome;
@property(copy, nonatomic) NSString *clientValidity;
@property(copy, nonatomic) NSArray *actionResults;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

