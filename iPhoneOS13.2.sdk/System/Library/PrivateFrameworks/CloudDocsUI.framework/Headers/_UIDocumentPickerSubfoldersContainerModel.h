//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerURLContainerModel.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSubfoldersContainerModel : _UIDocumentPickerURLContainerModel
{
    NSString *_containerID;
}

// - (void).cxx_destruct;
- (id)scopes;
- (void)startMonitoringChanges;
// - (struct _UIArrayController )_createObserver;
- (id)displayTitle;
- (BOOL)shouldShowTopLevelContainers;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(NSUInteger)arg3;
- (id)initWithPickableTypes:(id)arg1 container:(id)arg2;

@end

