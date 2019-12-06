//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>

#import <VideoSubscriberAccountUI/VSTwoFactorEntryViewModelDelegate-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryAppDocumentController : VSAppDocumentController <VSTwoFactorEntryViewModelDelegate>
{
    NSMutableArray *_buttonElements;
}

@property(retain, nonatomic) NSMutableArray *buttonElements; // @synthesize buttonElements=_buttonElements;
// - (void).cxx_destruct;
- (void)twoFactorEntryViewModel:(id)arg1 didPressButtonAtIndex:(NSUInteger)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (BOOL)_updateTwoFactorEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id )arg3;
- (BOOL)_updateViewModel:(id)arg1 error:(id )arg2;
- (id)_newViewModel;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;

@end

