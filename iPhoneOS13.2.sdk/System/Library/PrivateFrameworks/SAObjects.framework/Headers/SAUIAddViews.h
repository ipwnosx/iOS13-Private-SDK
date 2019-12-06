//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAConditionallyMutatingClientBoundCommand-Protocol.h>

@class NSArray, NSString, SASendCommands;

@interface SAUIAddViews : SABaseClientBoundCommand <SAConditionallyMutatingClientBoundCommand>
{
}

+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addViews;
@property(copy, nonatomic) NSArray *views;
@property(nonatomic) BOOL temporary;
@property(nonatomic) BOOL scrollToTop;
@property(nonatomic) BOOL requiresResponse;
@property(retain, nonatomic) SASendCommands *refreshCommand;
@property(nonatomic) BOOL mutatingCommand;
@property(copy, nonatomic) NSString *displayTarget;
@property(copy, nonatomic) NSString *dialogPhase;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

