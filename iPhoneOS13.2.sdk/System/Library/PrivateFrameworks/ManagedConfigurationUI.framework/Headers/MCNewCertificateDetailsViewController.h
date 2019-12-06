//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <ManagedConfigurationUI/PSStateRestoration-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MCNewCertificateDetailsViewController : UITableViewController <PSStateRestoration>
{
    id _certificateTrust;
    NSArray *_keyValueSections;
    NSArray *_keyValueSectionTitles;
}

@property(retain, nonatomic) NSArray *keyValueSectionTitles; // @synthesize keyValueSectionTitles=_keyValueSectionTitles;
@property(retain, nonatomic) NSArray *keyValueSections; // @synthesize keyValueSections=_keyValueSections;
@property(retain, nonatomic) id certificateTrust; // @synthesize certificateTrust=_certificateTrust;
// - (void).cxx_destruct;
- (void)preferredContentSizeChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)_setup;
- (void)dealloc;
//  (id)initWithTrust:(struct __SecTrust )arg1;
- (id)initWithCertificateProperties:(id)arg1;
//  (id)initWithCertificate:(struct __SecCertificate )arg1;
- (id)initWithStyle:(long long)arg1;
- (id)init;

@end

