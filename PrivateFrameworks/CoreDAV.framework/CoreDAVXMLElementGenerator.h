/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItem, NSMutableData, CoreDAVXMLElementGenerator, NSDictionary, NSURL;

@interface CoreDAVXMLElementGenerator : NSObject {
    NSURL *_baseURL;
    NSMutableData *_cDATA;
    NSDictionary *_cachedElementParseRules;
    NSMutableData *_characters;
    BOOL _checkedElementValidityIfRootElement;
    CoreDAVXMLElementGenerator *_currentlyParsingSubItem;
    CoreDAVItem *_element;
    BOOL _isUnrecognized;
    CoreDAVItem *_parentElement;
    SEL _parentElementSetter;
    CoreDAVXMLElementGenerator *_parentGenerator;
    int _parsingState;
}

@property(retain) NSURL * baseURL;
@property(retain) NSMutableData * cDATA;
@property(retain) NSDictionary * cachedElementParseRules;
@property(retain) NSMutableData * characters;
@property BOOL checkedElementValidityIfRootElement;
@property(retain) CoreDAVXMLElementGenerator * currentlyParsingSubItem;
@property(retain) CoreDAVItem * element;
@property BOOL isUnrecognized;
@property SEL parentElementSetter;
@property CoreDAVXMLElementGenerator * parentGenerator;
@property int parsingState;

- (id)baseURL;
- (id)cDATA;
- (id)cachedElementParseRules;
- (id)characters;
- (BOOL)checkedElementValidityIfRootElement;
- (id)currentlyParsingSubItem;
- (void)dealloc;
- (id)description;
- (id)element;
- (id)initWithParser:(id)arg1 baseURL:(id)arg2 rootElementNameSpace:(id)arg3 elementName:(id)arg4 parseClass:(Class)arg5;
- (id)initWithParser:(id)arg1 parentGenerator:(id)arg2 parentElementSetter:(SEL)arg3 element:(id)arg4;
- (BOOL)isExpectedNameSpace:(id)arg1 andElementName:(id)arg2;
- (BOOL)isUnrecognized;
- (void)noteChildCascadingFailure;
- (void)notifyElement:(id)arg1 ofAttributesFound:(id)arg2;
- (SEL)parentElementSetter;
- (id)parentGenerator;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (int)parsingState;
- (void)resumeParsingWithParser:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setCDATA:(id)arg1;
- (void)setCachedElementParseRules:(id)arg1;
- (void)setCharacters:(id)arg1;
- (void)setCheckedElementValidityIfRootElement:(BOOL)arg1;
- (void)setCurrentlyParsingSubItem:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setIsUnrecognized:(BOOL)arg1;
- (void)setParentElementSetter:(SEL)arg1;
- (void)setParentGenerator:(id)arg1;
- (void)setParsingState:(int)arg1;
- (BOOL)tracksRootElement;

@end
