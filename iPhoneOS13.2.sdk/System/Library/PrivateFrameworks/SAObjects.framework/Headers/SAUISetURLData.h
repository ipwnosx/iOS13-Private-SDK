//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUISetURLData : SABaseClientBoundCommand
{
}

+ (id)setURLDataWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setURLData;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *urlData;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

