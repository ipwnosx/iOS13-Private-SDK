//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

__attribute__((visibility("hidden")))
@interface WebCoreAVVideoCaptureSourceObserver : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
//     struct AVVideoCaptureSource m_callback;
}

- (void)endSessionInterrupted:(id)arg1;
- (void)beginSessionInterrupted:(id)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)deviceConnectedDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
// - (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer )arg2 fromConnection:(id)arg3;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)disconnect;
// - (id)initWithCallback:(struct AVVideoCaptureSource )arg1;

@end

