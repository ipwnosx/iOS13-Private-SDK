//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAScreenActionActivateUIElement : SABaseClientBoundCommand
{
}

+ (id)activateUIElementWithDictionary:(id)arg1 context:(id)arg2;
+ (id)activateUIElement;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *elementId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

