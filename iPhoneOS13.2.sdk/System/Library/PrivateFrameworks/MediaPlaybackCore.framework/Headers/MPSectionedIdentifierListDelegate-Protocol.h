//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPSectionedIdentifierList, NSArray, NSString;

@protocol MPSectionedIdentifierListDelegate <NSObject>

@optional
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidUpdateSection:(NSString *)arg2;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidUpdateItems:(NSArray *)arg2 inSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidRemoveItems:(NSArray *)arg2 fromSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidMoveItems:(NSArray *)arg2 inSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidAddItems:(NSArray *)arg2 toSection:(NSString *)arg3;
- (void)sectionedIdentifierList:(MPSectionedIdentifierList *)arg1 dataSourceDidChangeItems:(NSArray *)arg2 inSection:(NSString *)arg3;
@end

