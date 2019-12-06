//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableArray, PSSpecifier, UIViewController;
@protocol STGroupSpecifierProviderDelegate;

__attribute__((visibility("hidden")))
@interface STGroupSpecifierProvider : NSObject <UITableViewDelegate>
{
    BOOL _isHidden;
    BOOL _invalid;
    UIViewController<STGroupSpecifierProviderDelegate> *_delegate;
    PSSpecifier *_groupSpecifier;
    NSMutableArray *_privateSpecifiers;
}

+ (BOOL)automaticallyNotifiesObserversOfIsHidden;
@property BOOL invalid; // @synthesize invalid=_invalid;
@property(retain) NSMutableArray *privateSpecifiers; // @synthesize privateSpecifiers=_privateSpecifiers;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak UIViewController<STGroupSpecifierProviderDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
// - (void).cxx_destruct;
- (void)_tableCellHeightDidChange:(id)arg1;
- (void)replaceSpecifiersAtIndexes:(id)arg1 withSpecifiers:(id)arg2;
- (void)replaceObjectInSpecifiersAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (void)removeSpecifiersAtIndexes:(id)arg1;
- (void)insertSpecifiers:(id)arg1 atIndexes:(id)arg2;
- (id)specifiersAtIndexes:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *specifiers;
@property(readonly) NSMutableArray *mutableSpecifiers;
- (void)showStoreDemoAlert;
- (void)showPINSheet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)lazyLoadBundle:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popToViewControllerAnimated:(BOOL)arg1;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)showController:(id)arg1 animated:(BOOL)arg2;
- (void)reloadSectionHeaderFootersWithAnimation:(long long)arg1;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)invalidate;
- (id)init;
- (void)dealloc;

@end

