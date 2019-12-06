//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface SBSwitcherModifierQuerySnapshot : NSObject
{
    NSArray *_implementingQueryMethods;
    NSArray *_nonImplementingQueryMethods;
    NSDictionary *_queryMethodsToDescriptions;
}

@property(retain, nonatomic) NSDictionary *queryMethodsToDescriptions; // @synthesize queryMethodsToDescriptions=_queryMethodsToDescriptions;
@property(retain, nonatomic) NSArray *nonImplementingQueryMethods; // @synthesize nonImplementingQueryMethods=_nonImplementingQueryMethods;
@property(retain, nonatomic) NSArray *implementingQueryMethods; // @synthesize implementingQueryMethods=_implementingQueryMethods;
// - (void).cxx_destruct;

@end

