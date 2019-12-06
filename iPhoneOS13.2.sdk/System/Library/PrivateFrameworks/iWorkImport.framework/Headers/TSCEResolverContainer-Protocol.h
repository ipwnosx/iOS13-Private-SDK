//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSSet, NSString;
@protocol TSCEReferenceResolving;

@protocol TSCEResolverContainer <NSObject>
- (void)clearRemappedTableNames;
- (NSSet *)remappedTableNames;
- (void)addRemappedTableName:(NSString *)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (unsigned int)nextUntitledResolverIndex;
- (BOOL)resolverNameIsUsed:(NSString *)arg1;
- (NSArray *)resolversMatchingPrefix:(NSString *)arg1;
- (id <TSCEReferenceResolving>)resolverMatchingName:(NSString *)arg1;
@end

