//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@interface SALocalSearchCarRouteOptions : AceObject <SAAceSerializable>
{
}

+ (id)carRouteOptionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)carRouteOptions;
@property(nonatomic) BOOL avoidTolls;
@property(nonatomic) BOOL avoidHighways;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

