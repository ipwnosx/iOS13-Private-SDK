//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AXMSourceNode, AXMVisionEngine, AXMVisionPipelineContext;

@protocol AXMServiceInterface <NSObject>
- (void)visionEngine:(AXMVisionEngine *)arg1 evaluateSource:(AXMSourceNode *)arg2 context:(AXMVisionPipelineContext *)arg3 options:(long long)arg4 result:(void (^)(AXMVisionResult *, NSError *))arg5;
- (void)prewarmVisionEngineService;
@end

