//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@interface NUVideoRenderJob : NURenderJob
{
}

- (id)result;
- (id)generateVideoComposition:(out id )arg1;
- (BOOL)prepare:(out id )arg1;
- (id)videoRenderRequest;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsRenderStage;

@end

