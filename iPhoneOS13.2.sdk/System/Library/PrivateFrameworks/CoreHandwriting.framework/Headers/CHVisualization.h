//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHRecognitionSession;
@protocol CHVisualizationDelegate;

@interface CHVisualization : NSObject
{
    CHRecognitionSession *_recognitionSession;
    id <CHVisualizationDelegate> _delegate;
}

@property(nonatomic) id <CHVisualizationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) CHRecognitionSession *recognitionSession; // @synthesize recognitionSession=_recognitionSession;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;
- (void)toggleVisualizationRegionAtPoint:(CGPoint)arg1;
- (void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef )arg2 viewBounds:(CGRect)arg3;
- (void)recognitionSessionDidUpdateRecognitionResult;
@property(readonly, nonatomic) BOOL wantsInputDrawings;
@property(readonly, nonatomic) long long layeringPriority;

@end

