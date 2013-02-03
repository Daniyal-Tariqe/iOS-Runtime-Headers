/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebDataSourcePrivate;

@interface WebDataSource : NSObject {
    WebDataSourcePrivate *_private;
}

+ (id)_repTypesAllowImageTypeOmission:(BOOL)arg1;
+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(BOOL)arg2;

- (struct DocumentLoader { int (**x1)(); int x2; boolx3; struct Frame {} *x4; struct RefPtr<WebCore::MainResourceLoader> { struct MainResourceLoader {} *x_5_1_1; } x5; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::ResourceLoader>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct RefPtr<WebCore::ResourceLoader> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::ResourceLoader>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct RefPtr<WebCore::ResourceLoader> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_7_1_1; } x7; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::ResourceLoader>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct RefPtr<WebCore::ResourceLoader> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_8_1_1; } x8; struct RefPtr<WebCore::SharedBuffer> { struct SharedBuffer {} *x_9_1_1; } x9; struct ResourceRequest { struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_10_1_1; int x_10_1_2; double x_10_1_3; struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_10_1_4; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_10_1_5; struct HTTPHeaderMap { struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { struct pair<WebCore::AtomicString,WebCore::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_6_2_1; } x_10_1_6; struct Vector<WebCore::String,0ul> { unsigned int x_7_2_1; struct VectorBuffer<WebCore::String,0ul> { struct String {} *x_2_3_1; unsigned int x_2_3_2; } x_7_2_2; } x_10_1_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_2_1; } x_10_1_8; boolx_10_1_9; boolx_10_1_10; boolx_10_1_11; boolx_10_1_12; int x_10_1_13; int x_10_1_14; boolx_10_1_15; struct RetainPtr<NSURLRequest> { id x_16_2_1; } x_10_1_16; } x10; struct SubstituteData { struct RefPtr<WebCore::SharedBuffer> { struct SharedBuffer {} *x_1_2_1; } x_11_1_1; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_11_1_2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_11_1_3; struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_11_1_4; struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_5_2_1; unsigned int x_5_2_2 : 1; unsigned int x_5_2_3 : 1; int x_5_2_4; int x_5_2_5; int x_5_2_6; int x_5_2_7; int x_5_2_8; int x_5_2_9; int x_5_2_10; int x_5_2_11; int x_5_2_12; int x_5_2_13; } x_11_1_5; } x11; struct ResourceRequest { struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_12_1_1; int x_12_1_2; double x_12_1_3; struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_12_1_4; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_12_1_5; struct HTTPHeaderMap { struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { struct pair<WebCore::AtomicString,WebCore::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_6_2_1; } x_12_1_6; struct Vector<WebCore::String,0ul> { unsigned int x_7_2_1; struct VectorBuffer<WebCore::String,0ul> { struct String {} *x_2_3_1; unsigned int x_2_3_2; } x_7_2_2; } x_12_1_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_2_1; } x_12_1_8; boolx_12_1_9; boolx_12_1_10; boolx_12_1_11; boolx_12_1_12; int x_12_1_13; int x_12_1_14; boolx_12_1_15; struct RetainPtr<NSURLRequest> { id x_16_2_1; } x_12_1_16; } x12; struct ResourceRequest { struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_13_1_1; int x_13_1_2; double x_13_1_3; struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_13_1_4; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_13_1_5; struct HTTPHeaderMap { struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { struct pair<WebCore::AtomicString,WebCore::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_6_2_1; } x_13_1_6; struct Vector<WebCore::String,0ul> { unsigned int x_7_2_1; struct VectorBuffer<WebCore::String,0ul> { struct String {} *x_2_3_1; unsigned int x_2_3_2; } x_7_2_2; } x_13_1_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_2_1; } x_13_1_8; boolx_13_1_9; boolx_13_1_10; boolx_13_1_11; boolx_13_1_12; int x_13_1_13; int x_13_1_14; boolx_13_1_15; struct RetainPtr<NSURLRequest> { id x_16_2_1; } x_13_1_16; } x13; struct ResourceResponse { struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_14_1_1; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_14_1_2; long long x_14_1_3; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_14_1_4; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_14_1_5; int x_14_1_6; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_7_2_1; } x_14_1_7; struct HTTPHeaderMap { struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { struct pair<WebCore::AtomicString,WebCore::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_8_2_1; } x_14_1_8; int x_14_1_9; unsigned int x_14_1_10 : 1; unsigned int x_14_1_11 : 1; unsigned int x_14_1_12 : 1; unsigned int x_14_1_13 : 1; unsigned int x_14_1_14 : 1; unsigned int x_14_1_15 : 1; unsigned int x_14_1_16 : 1; unsigned int x_14_1_17 : 1; unsigned int x_14_1_18 : 1; double x_14_1_19; double x_14_1_20; double x_14_1_21; double x_14_1_22; double x_14_1_23; struct RetainPtr<NSURLResponse> { id x_24_2_1; } x_14_1_24; boolx_14_1_25; } x14; struct ResourceError { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; int x_15_1_2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_3_2_1; } x_15_1_3; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_4_2_1; } x_15_1_4; boolx_15_1_5; boolx_15_1_6; boolx_15_1_7; struct RetainPtr<NSError> { id x_8_2_1; } x_15_1_8; } x15; boolx16; boolx17; boolx18; boolx19; boolx20; boolx21; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_22_1_1; } x22; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_23_1_1; } x23; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_24_1_1; } x24; struct NavigationAction { struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_25_1_1; int x_25_1_2; struct RefPtr<WebCore::Event> { struct Event {} *x_3_2_1; } x_25_1_3; } x25; struct ResourceRequest { struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_1_2_1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; int x_1_2_4; int x_1_2_5; int x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; int x_1_2_10; int x_1_2_11; int x_1_2_12; int x_1_2_13; } x_26_1_1; int x_26_1_2; double x_26_1_3; struct KURL { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; unsigned int x_4_2_2 : 1; unsigned int x_4_2_3 : 1; int x_4_2_4; int x_4_2_5; int x_4_2_6; int x_4_2_7; int x_4_2_8; int x_4_2_9; int x_4_2_10; int x_4_2_11; int x_4_2_12; int x_4_2_13; } x_26_1_4; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_5_2_1; } x_26_1_5; struct HTTPHeaderMap { struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { struct pair<WebCore::AtomicString,WebCore::String> {} *x_1_3_1; int x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; } x_6_2_1; } x_26_1_6; struct Vector<WebCore::String,0ul> { unsigned int x_7_2_1; struct VectorBuffer<WebCore::String,0ul> { struct String {} *x_2_3_1; unsigned int x_2_3_2; } x_7_2_2; } x_26_1_7; struct RefPtr<WebCore::FormData> { struct FormData {} *x_8_2_1; } x_26_1_8; boolx_26_1_9; boolx_26_1_10; boolx_26_1_11; boolx_26_1_12; int x_26_1_13; int x_26_1_14; boolx_26_1_15; struct RetainPtr<NSURLRequest> { id x_16_2_1; } x_26_1_16; } x26; struct Vector<WebCore::ResourceResponse,0ul> { unsigned int x_27_1_1; struct VectorBuffer<WebCore::ResourceResponse,0ul> { struct ResourceResponse {} *x_2_2_1; unsigned int x_2_2_2; } x_27_1_2; } x27; boolx28; struct HashMap<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::SubstituteResource>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > > { struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>,std::pair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> >,WTF::PairFirstExtractor<std::pair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> > >,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::PairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { struct pair<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::SubstituteResource> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_29_1_1; } x29; struct Timer<WebCore::DocumentLoader> { int (**x_30_1_1)(); double x_30_1_2; double x_30_1_3; int x_30_1_4; unsigned int x_30_1_5; struct DocumentLoader {} *x_30_1_6; struct { int *x_7_2_1; } x_30_1_7; } x30; struct OwnPtr<WebCore::ArchiveResourceCollection> { struct ArchiveResourceCollection {} *x_31_1_1; } x31; struct RefPtr<WebCore::SharedBuffer> { struct SharedBuffer {} *x_32_1_1; } x32; struct HashSet<WebCore::String,WebCore::StringHash,WTF::HashTraits<WebCore::String> > { struct HashTable<WebCore::String,WebCore::String,WTF::IdentityExtractor<WebCore::String>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::String> > { struct String {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_33_1_1; } x33; struct Vector<WebCore::String,0ul> { unsigned int x_34_1_1; struct VectorBuffer<WebCore::String,0ul> { struct String {} *x_2_2_1; unsigned int x_2_2_2; } x_34_1_2; } x34; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_35_1_1; } x35; boolx36; struct OwnPtr<WebCore::ApplicationCacheHost> { struct ApplicationCacheHost {} *x_37_1_1; } x37; }*)_documentLoader;
- (id)_URL;
- (void)_addSubframeArchives:(id)arg1;
- (id)_documentFragmentWithArchive:(id)arg1;
- (id)_documentFragmentWithImageResource:(id)arg1;
- (void)_finishedLoading;
- (id)_imageElementWithImageResource:(id)arg1;
- (id)_initWithDocumentLoader:(struct PassRefPtr<WebDocumentLoaderMac> { struct WebDocumentLoaderMac {} *x1; })arg1;
- (BOOL)_isDocumentHTML;
- (id)_mainDocumentError;
- (void)_makeRepresentation;
- (void)_receivedData:(id)arg1;
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(BOOL)arg2;
- (id)_responseMIMEType;
- (void)_revertToProvisionalState;
- (void)_setMainDocumentError:(id)arg1;
- (void)_setOverrideTextEncodingName:(id)arg1;
- (void)_setRepresentation:(id)arg1;
- (BOOL)_transferApplicationCache:(id)arg1;
- (id)_webView;
- (oneway void)_webcore_releaseOnWebThread;
- (void)addSubresource:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)finalize;
- (id)initWithRequest:(id)arg1;
- (id)initialRequest;
- (BOOL)isLoading;
- (id)mainResource;
- (id)pageTitle;
- (oneway void)release;
- (id)representation;
- (id)request;
- (id)response;
- (id)subresourceForURL:(id)arg1;
- (id)subresources;
- (id)textEncodingName;
- (id)unreachableURL;
- (id)webArchive;
- (id)webFrame;

@end
