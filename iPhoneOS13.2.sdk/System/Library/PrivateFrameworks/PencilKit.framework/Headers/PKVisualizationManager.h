//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHVisualizationManagerDelegate-Protocol.h>

@class CHVisualizationManager;
@protocol PKVisualizationManager;

@interface PKVisualizationManager : NSObject <CHVisualizationManagerDelegate>
{
    id <PKVisualizationManager> _delegate;
    CHVisualizationManager *_chVisualizationManager;
}

+ (id)localizedNameForRecognitionStatusKey:(id)arg1;
+ (id)availableRecognitionStatusKeys;
@property(retain, nonatomic) CHVisualizationManager *chVisualizationManager; // @synthesize chVisualizationManager=_chVisualizationManager;
@property(nonatomic) __weak id <PKVisualizationManager> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)visualizationManagerDidUpdateSessionStatus:(id)arg1;
- (void)visualizationManagerNeedsDisplay:(id)arg1;
- (void)visualizationManager:(id)arg1 needsDisplayInRect:(CGRect)arg2;
- (id)valueForRecognitionStatusKey:(id)arg1;
@property(nonatomic) BOOL recognitionStatusReportingEnabled;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;

@end

