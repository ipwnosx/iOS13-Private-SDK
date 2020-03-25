//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface PXFeedbackFileRadarViewController : UINavigationController
{
    NSUInteger _collectionType;
    id /* CDUnknownBlockType */ _completionHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSUInteger collectionType; // @synthesize collectionType=_collectionType;
// - (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleRadarFiledWithError:(id)arg1;
- (void)_handleUserConfirmation;
- (void)_handleUserCancel:(id)arg1;
- (id)initWithCollectionType:(NSUInteger)arg1;

@end
