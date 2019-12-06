//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSObject, NSString, REElement;
@protocol OS_dispatch_queue;

@protocol REElementDataSourceDelegate <NSObject>
- (void)fetchElementWithIdentifierVisible:(NSString *)arg1 withHandler:(void (^)(BOOL))arg2;
- (BOOL)hasElementWithId:(NSString *)arg1 inSectionWithIdentifier:(NSString *)arg2;
- (void)refreshElement:(REElement *)arg1;
- (void)removeElementsWithIds:(NSArray *)arg1;
- (void)reloadElement:(REElement *)arg1;
- (void)addElements:(NSArray *)arg1 toSectionWithIdentifier:(NSString *)arg2;
- (void)invalidateElements;
- (NSObject<OS_dispatch_queue> *)elementOperationQueue;

@optional
- (BOOL)hasElementWithId:(NSString *)arg1 inSection:(NSUInteger)arg2;
- (void)removeElements:(NSArray *)arg1 fromSection:(NSUInteger)arg2;
- (void)addElements:(NSArray *)arg1 toSection:(NSUInteger)arg2;
@end

