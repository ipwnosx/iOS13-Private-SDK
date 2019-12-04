//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class PXCPLServiceStatus;
@protocol PXCPLService, PXCPLServiceUIDelegate, PXCPLServiceUIStatus;

@interface PXCPLServiceUI : PXObservable
{
    id <PXCPLService> _cplService;
    struct {
        _Bool progressDidChange;
        _Bool performAction;
    } _delegateRespondsTo;
    PXCPLServiceStatus *_serviceStatus;
    id <PXCPLServiceUIStatus> _serviceUIStatus;
    id <PXCPLServiceUIDelegate> _delegate;
}

@property(nonatomic) __weak id <PXCPLServiceUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <PXCPLServiceUIStatus> serviceUIStatus; // @synthesize serviceUIStatus=_serviceUIStatus;
@property(readonly, nonatomic) PXCPLServiceStatus *serviceStatus; // @synthesize serviceStatus=_serviceStatus;
- (void)_handleUpdatedServiceStatus:(id)arg1;
- (void)_serviceUIStatusDidChange:(id)arg1 nonProgressPropertiesDidChange:(_Bool)arg2 progressDidChange:(_Bool)arg3;
- (void)_performAction:(long long)arg1;
- (id)initWithCPLService:(id)arg1;
- (id)init;
- (_Bool)performDefaultHandlerForAction:(long long)arg1;

@end
