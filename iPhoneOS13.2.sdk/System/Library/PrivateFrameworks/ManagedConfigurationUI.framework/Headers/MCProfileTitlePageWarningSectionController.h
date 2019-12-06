//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfigurationUI/MCProfileTitlePageSectionController-Protocol.h>

@class MCProfileWarning, UITableView;

__attribute__((visibility("hidden")))
@interface MCProfileTitlePageWarningSectionController : NSObject <MCProfileTitlePageSectionController>
{
    UITableView *_tableView;
    MCProfileWarning *_warning;
}

@property(retain, nonatomic) MCProfileWarning *warning; // @synthesize warning=_warning;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (double)heightForHeader;
- (double)heightForRowAtIndex:(NSUInteger)arg1;
- (id)titleForHeader;
- (NSUInteger)numberOfRows;
- (id)cellForRowAtIndex:(NSUInteger)arg1;
- (void)registerCellClassWithTableView:(id)arg1;
- (id)init;
- (id)initWithWarning:(id)arg1;

@end

