//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXDataSectionManager.h>

#import <PhotosUICore/PXCollectionFetchOperationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSOperationQueue, NSString, PHCollection, PHFetchResult;

@interface PXNavigationListItemDataSectionManager : PXDataSectionManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver>
{
    BOOL _enabled;
    BOOL _hiddenWhenEmpty;
    PHCollection *_collection;
    NSOperationQueue *_workQueue;
    PHFetchResult *_fetchResult;
}

@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(nonatomic, getter=isHiddenWhenEmpty) BOOL hiddenWhenEmpty; // @synthesize hiddenWhenEmpty=_hiddenWhenEmpty;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) PHCollection *collection; // @synthesize collection=_collection;
// - (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)collectionFetchOperationDidComplete:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)createDataSection;
- (void)updateDataSectionIfNecessary;
@property(readonly, nonatomic, getter=isCollectionVisible) BOOL collectionVisible;
@property(readonly, nonatomic, getter=isCollectionEmpty) BOOL collectionEmpty;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithCollection:(id)arg1 workQueue:(id)arg2;

@end

