//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface CTUIListLoadingGroup : NSObject
{
    NSArray *_specifiers;
    PSListController *_hostController;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

@property(retain, nonatomic) PSSpecifier *spinnerSpecifier; // @synthesize spinnerSpecifier=_spinnerSpecifier;
@property(nonatomic) __weak PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(nonatomic) __weak PSListController *hostController; // @synthesize hostController=_hostController;
// - (void).cxx_destruct;
@property(retain, nonatomic) NSArray *specifiers; // @synthesize specifiers=_specifiers;
- (id)initWithHostController:(id)arg1 groupSpecifier:(id)arg2;

@end

