//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface WBSContactAutoFillSet : NSObject
{
    NSDictionary *_controlIDToValueMap;
    NSString *_label;
    NSArray *_fillDisplayProperties;
    NSArray *_skipDisplayProperties;
    NSSet *_propertiesToFillOrSkip;
}

+ (id)displayStringsForFillMatches:(id)arg1 skipMatches:(id)arg2 matchesForForm:(id)arg3 label:(id)arg4 formDataController:(id)arg5;
+ (id)displayStringsForSkipMatches:(id)arg1 matchesForForm:(id)arg2 formDataController:(id)arg3;
@property(readonly, copy, nonatomic) NSSet *propertiesToFillOrSkip; // @synthesize propertiesToFillOrSkip=_propertiesToFillOrSkip;
@property(readonly, copy, nonatomic) NSArray *skipDisplayProperties; // @synthesize skipDisplayProperties=_skipDisplayProperties;
@property(readonly, copy, nonatomic) NSArray *fillDisplayProperties; // @synthesize fillDisplayProperties=_fillDisplayProperties;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) NSDictionary *controlIDToValueMap; // @synthesize controlIDToValueMap=_controlIDToValueMap;
// - (void).cxx_destruct;
- (id)initWithControlIDToValueMap:(id)arg1 label:(id)arg2 fillDisplayProperties:(id)arg3 skipDisplayProperties:(id)arg4 propertiesToFillOrSkip:(id)arg5;

@end

