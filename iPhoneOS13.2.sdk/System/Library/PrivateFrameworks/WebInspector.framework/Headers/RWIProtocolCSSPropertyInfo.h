//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject
{
}

@property(nonatomic) BOOL inherited;
@property(copy, nonatomic) NSArray *values;
@property(copy, nonatomic) NSArray *longhands;
@property(copy, nonatomic) NSArray *aliases;
@property(copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1;

@end

