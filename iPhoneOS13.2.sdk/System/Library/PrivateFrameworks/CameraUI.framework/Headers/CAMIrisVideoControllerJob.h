//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMStillImageCaptureRequest, CAMVideoCaptureResult;

@interface CAMIrisVideoControllerJob : NSObject
{
    CAMStillImageCaptureRequest *_request;
    CAMVideoCaptureResult *_videoCaptureResult;
}

@property(readonly, nonatomic) CAMVideoCaptureResult *videoCaptureResult; // @synthesize videoCaptureResult=_videoCaptureResult;
@property(readonly, nonatomic) CAMStillImageCaptureRequest *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 videoCaptureResult:(id)arg2;

@end

