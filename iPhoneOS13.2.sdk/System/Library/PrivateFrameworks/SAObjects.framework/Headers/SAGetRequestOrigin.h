//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SAGetRequestOrigin : SABaseClientBoundCommand
{
}

+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getRequestOrigin;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSNumber *searchTimeout;
@property(copy, nonatomic) NSNumber *maxAge;
@property(copy, nonatomic) NSString *desiredAccuracy;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

