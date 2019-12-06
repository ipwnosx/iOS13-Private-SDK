//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface TSDInfoCollectionSelectionHelper : NSObject
{
    NSSet *_nonInteractiveInfos;
    NSSet *_modelInfos;
}

@property(readonly, nonatomic) NSSet *modelInfos; // @synthesize modelInfos=_modelInfos;
@property(readonly, nonatomic) NSSet *nonInteractiveInfos; // @synthesize nonInteractiveInfos=_nonInteractiveInfos;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *UUIDDescription;
@property(readonly, nonatomic) NSString *description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
- (id)init;
- (id)initWithInteractiveInfos:(id)arg1;
- (id)initWithInteractiveInfos:(id)arg1 nonInteractiveInfos:(id)arg2;

@end

