//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

@class CKNSExtension, NSArray, NSDictionary, NSMutableArray, NSString, PSSpecifier;

@interface CKFilteringListController : PSListController
{
    BOOL _showingParentViewController;
    BOOL _addCheckmark;
    NSArray *_extensionIDArray;
    NSDictionary *_extensionNameMapping;
    long long _spamFilterState;
    id _beginMappingID;
    CKNSExtension *_ckExtension;
    NSString *_currentExtensionID;
    PSSpecifier *_selectedSpecifier;
    NSMutableArray *_specifierListArray;
}

@property(retain, nonatomic) NSMutableArray *specifierListArray; // @synthesize specifierListArray=_specifierListArray;
@property(retain, nonatomic) PSSpecifier *selectedSpecifier; // @synthesize selectedSpecifier=_selectedSpecifier;
@property(retain, nonatomic) NSString *currentExtensionID; // @synthesize currentExtensionID=_currentExtensionID;
@property(retain, nonatomic) CKNSExtension *ckExtension; // @synthesize ckExtension=_ckExtension;
@property(retain, nonatomic) id beginMappingID; // @synthesize beginMappingID=_beginMappingID;
@property(nonatomic) BOOL addCheckmark; // @synthesize addCheckmark=_addCheckmark;
@property(nonatomic) long long spamFilterState; // @synthesize spamFilterState=_spamFilterState;
@property(nonatomic) BOOL showingParentViewController; // @synthesize showingParentViewController=_showingParentViewController;
@property(retain, nonatomic) NSDictionary *extensionNameMapping; // @synthesize extensionNameMapping=_extensionNameMapping;
@property(retain, nonatomic) NSArray *extensionIDArray; // @synthesize extensionIDArray=_extensionIDArray;
// - (void).cxx_destruct;
- (id)specifiers;
- (id)getSpamSpecifiers;
- (void)showPrivacyLegalVC;
- (void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1;
- (BOOL)verifyCurrentExtensionIDValidity;
- (void)findSpamExtensions;
- (id)getExtensionNameAndWarning:(id)arg1;
- (void)tappedSpamAppCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)isSpamFilteringEnabled:(id)arg1;
- (void)setIsSpamFilteringDefaultEnabled;
- (id)getDefaultExtension;
- (void)disableSpamFiltering;
- (unsigned char)enableSpamForExtensionID:(id)arg1 withName:(id)arg2;
- (void)showPrivacyAccessWarning:(id)arg1 isToggle:(BOOL)arg2;
- (void)setSpamFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (void)enableSpamFiltering:(id)arg1;
- (void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2;
- (id)isConversationListFilteringEnabled:(id)arg1;
- (void)endMatchingExtensions;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;
- (id)_syncManager;

@end

