//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKDOMNode.h>

#import <ITMLKit/IKJDOMParsingElement-Protocol.h>
#import <ITMLKit/IKJSDOMElement-Protocol.h>
#import <ITMLKit/IKJSDOMParentNode-Protocol.h>
#import <ITMLKit/IKStyleableElement-Protocol.h>
#import <ITMLKit/_IKJSDOMElement-Protocol.h>
#import <ITMLKit/_IKJSDOMElementProxy-Protocol.h>

@class IKDOMHTMLCollection, IKDOMNamedNodeMap, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol IKStyleableElement;

@interface IKDOMElement : IKDOMNode <IKJDOMParsingElement, IKStyleableElement, IKJSDOMElement, _IKJSDOMElementProxy, _IKJSDOMElement, IKJSDOMParentNode>
{
    NSMutableDictionary *_metadataDict;
    NSArray *_cachedChildElements;
    NSDictionary *_cachedAttributes;
    IKViewElementStyleComposer *styleComposer;
    IKDOMElement *__aliasOf;
}

+ (id)_filteredAttributes;
@property(nonatomic, setter=_setAliasOf:) __weak IKDOMElement *_aliasOf; // @synthesize _aliasOf=__aliasOf;
@property(retain, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer;
// - (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, copy, nonatomic) NSString *elementName;
@property(readonly, nonatomic) __weak id <IKStyleableElement> parentStyleableElement;
- (void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(BOOL)arg2;
- (void)setTextContent:(id)arg1;
- (id)textContent;
- (long long)nodeType;
- (id)nodeName;
- (void)_markUpdatedForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (id)_attributes;
@property(readonly, nonatomic) BOOL _isPartOfPrototypeElement;
@property(readonly, nonatomic) BOOL _isPrototypeElement;
@property(readonly, nonatomic) NSUInteger childElementCount;
@property(readonly, nonatomic) IKDOMElement *lastElementChild;
@property(readonly, nonatomic) IKDOMElement *firstElementChild;
@property(readonly, nonatomic) IKDOMHTMLCollection *children;
- (id)childElementsByTagName:(id)arg1;
- (id)childElementByTagName:(id)arg1;
- (id)childElements;
@property(readonly, copy, nonatomic) IKDOMNamedNodeMap *attributes;
- (BOOL)hasAttributes;
- (BOOL)hasAttribute:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (void)removeAttribute:(id)arg1;
- (void)setAttribute:(id)arg1:(id)arg2;
- (id)getAttribute:(id)arg1;
@property(readonly, retain, nonatomic) NSString *tagName;
- (void)setAttributeValue:(id)arg1 withName:(id)arg2;
- (id)asPrivateIKJSDOMElement;
- (NSRange *)domib_visibleIndexRange;
- (void)domib_setVisibleIndexRange:(NSRange *)arg1;
- (id)domib_itemsChangeSet;
- (void)domib_setItemsChangeSet:(id)arg1;
- (id)domib_appDataSet;
- (void)domib_setAppDataSet:(id)arg1;
- (id)domp_derivativeDOMElementsBySelector;
- (void)domp_setDerivativeDOMElementsBySelector:(id)arg1;
- (id)domp_prototype;
- (void)domp_setPrototype:(id)arg1;
- (void)insertAdjacentHTML:(id)arg1:(id)arg2;
@property(retain, nonatomic) NSString *outerHTML;
@property(retain, nonatomic) NSString *innerHTML;
- (id)ik_templateElementCSSSelectorList;
- (id)ik_templateName;
- (id)domb_boundCSSRule;
- (void)domb_setBoundCSSRule:(id)arg1;
- (id)domb_mutationRuleSet;
- (void)domb_setMutationRuleSet:(id)arg1;
- (id)domb_dataBinding;
- (void)domb_setDataBinding:(id)arg1;
- (id)domb_domBindingController;
- (void)domb_setDOMBindingController:(id)arg1;
- (id)ikve_rulesID;
- (void)ikve_setRulesID:(id)arg1;
- (id)ikve_prototypesID;
- (void)ikve_setPrototypesID:(id)arg1;
- (id)dombs_items;
- (void)dombs_setItems:(id)arg1;

@end

