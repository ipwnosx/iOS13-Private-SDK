//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFetchRequest;

@interface STFetchResultsRequest : NSObject
{
    NSFetchRequest *_fetchRequest;
}

+ (id)requestWithFetchRequest:(id)arg1;
@property(readonly, nonatomic) NSFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)initWithEntity:(id)arg1 predicate:(id)arg2;
- (id)initWithEntity:(id)arg1;
- (id)initWithFetchRequest:(id)arg1;

@end

