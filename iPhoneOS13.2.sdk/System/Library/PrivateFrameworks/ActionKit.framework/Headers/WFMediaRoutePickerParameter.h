//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

#import <ActionKit/WFDynamicEnumerationDataSource-Protocol.h>
#import <ActionKit/WFMediaRoutePickerObserver-Protocol.h>

@class WFMediaRoutePicker;

@interface WFMediaRoutePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource, WFMediaRoutePickerObserver>
{
    WFMediaRoutePicker *_routePicker;
}

@property(retain, nonatomic) WFMediaRoutePicker *routePicker; // @synthesize routePicker=_routePicker;
// - (void).cxx_destruct;
- (void)routePickerDidUpdateAvailableRoutes:(id)arg1;
- (void)stopUpdatingPossibleValues;
- (void)startUpdatingPossibleValues;
- (BOOL)hidesAccessoryIconInEditor;
- (id)accessoryIconForPossibleState:(id)arg1;
- (BOOL)parameterStateIsValid:(id)arg1;
- (id)sortedStatesForAvailableRoutes:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (BOOL)shouldDefaultToLocalDeviceEndpoint;
- (BOOL)preferItemPickerSheet;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)defaultSerializedRepresentationForEnumeration:(id)arg1;
- (void)stopDiscoveringRoutes;
- (void)startDiscoveringRoutes;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) long long routeType;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

