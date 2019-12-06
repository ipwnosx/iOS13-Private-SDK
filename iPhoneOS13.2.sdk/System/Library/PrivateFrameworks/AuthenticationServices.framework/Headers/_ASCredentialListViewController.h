//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthenticationServices/_ASExtensionViewController.h>

@protocol _ASCredentialListViewControllerDelegate;

@interface _ASCredentialListViewController : _ASExtensionViewController
{
    id <_ASCredentialListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_ASCredentialListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_finishWithCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestDidFailWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithExtension:(id)arg1 serviceIdentifiers:(id)arg2;

@end

