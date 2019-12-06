//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface GEOAvailableExperimentBranch : NSObject
{
    NSString *_label;
    NSString *_name;
    NSString *_experimentIdentifier;
    NSMutableArray *_assignments;
    NSArray *_clientConfig;
}

@property(retain, nonatomic, getter=_clientConfig, setter=_setClientConfig:) NSArray *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
@property(readonly, nonatomic, getter=isActive) BOOL active;
@property(readonly, nonatomic, getter=_dictionaryRepresentation) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSDictionary *clientConfigValues;
- (id)querySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (void)_addAssignment:(id)arg1;
- (id)_descriptionWithIndent:(NSUInteger)arg1;
- (id)description;
- (id)initWithLabel:(id)arg1 name:(id)arg2 experimentIdentifier:(id)arg3;

@end

