//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaQueryFeature : NSObject
{
    NSString *_featureName;
}

+ (BOOL)supportsFeatureName:(id)arg1;
@property(readonly, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *requiredKeys;
@property(readonly, nonatomic) NSArray *notificationNames;
- (BOOL)evaluateWithValues:(id)arg1;
- (id)initWithFeatureName:(id)arg1 value:(id)arg2;

@end

