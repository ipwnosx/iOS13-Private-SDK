//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDRemoteAction.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface DDPersonAction : DDRemoteAction
{
    CNContact *_contact;
    BOOL _contactExists;
}

+ (id)viewControllerProviderClass;
// + (BOOL)handlesUrl:(id)arg1 result:(struct __DDResult )arg2;
+ (id)supportedSchemes;
// - (void).cxx_destruct;
- (BOOL)prefersActionMenuStyle;
- (CGSize)suggestedContentSize;
- (id)menuActions;
- (id)_menuActionsForPersonWithNumber:(id)arg1 email:(id)arg2;
- (id)_menuActionsForBusinessWithNumber:(id)arg1;
- (id)_appendActionsForPhoneNumbers:(id)arg1 emailAddresses:(id)arg2 class:(Class)arg3 filter:(id)arg4 scheme:(id)arg5;
// - (id)initWithURL:(id)arg1 result:(struct __DDResult )arg2 context:(id)arg3;

@end

