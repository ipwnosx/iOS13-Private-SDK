//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ComponentKit/CKCompositeComponent.h>

@class CKComponent;

@interface WFExpansionToggleComponent : CKCompositeComponent
{
    BOOL _expanded;
    CKTypedComponentAction_58381653 _toggleAction;
    CKComponent *_disclosureComponent;
}

//  (id)newWithLabel:(id)arg1 hintLabel:(id)arg2 labelsToAlignTo:(id)arg3 disclosureImage:(id)arg4 toggleAction:(CKTypedComponentAction_58381653)arg5 expanded:(BOOL)arg6 style:(const struct WFParameterLayoutComponentStyle )arg7;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)toggleChanged;

@end

