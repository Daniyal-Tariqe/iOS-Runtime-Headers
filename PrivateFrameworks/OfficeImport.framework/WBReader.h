/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WBOfficeArtReaderState, SFUNoCopyDictionary, NSString, WDDocument, NSMutableArray, <OCCancelDelegate>;

@interface WBReader : OCBReader {
    struct WrdBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; struct WrdParser {} *x4; struct WrdEshReader { 
            int (**_vptr$EshBinaryReader)(); 
            struct SsrwOOStream {} *m_pStream; 
            struct EshParserVisitor {} *m_pParserVisitor; 
            struct EshObjectFactory {} *m_pObjectFactory; 
            unsigned int m_ulStartPos; 
            unsigned int m_ulEndPos; 
            struct ChStack<EshHeader> { 
                struct EshHeader {} *m_stack; 
                struct EshHeader {} *m_tmpStack; 
                unsigned int m_count; 
                unsigned int m_size; 
                unsigned int m_blockSize; 
            } m_containers; 
            unsigned int m_ulCrtPos; 
            struct EshHeader { 
                int m_lLength; 
                unsigned int m_ulOffset; 
                short m_nInstance; 
                unsigned short m_unType; 
                unsigned char m_bVersion; 
            } m_nextHeader; 
            boolm_isLowLevel; 
        } x5; struct WrdRdrText {} *x6; struct WrdBinTable {} *x7; struct WrdPAPXFKP {} *x8; unsigned int x9; struct WrdBinTable {} *x10; struct WrdCHPXFKP {} *x11; unsigned int x12; int x13; struct WrdSectionDescriptorTable {} *x14; struct WrdStyleSheet {} *x15; struct WrdEmbeddedTTFRecordTable {} *x16; struct WrdDocumentFileRecord {} *x17; struct ChMap<long unsigned int,long unsigned int,CsLess<long unsigned int> > { 
            struct map<long unsigned int,long unsigned int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long unsigned int> > > { 
                struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long unsigned int>,std::_Select1st<std::pair<const long unsigned int, long unsigned int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long unsigned int> > > { 
                    struct _Rb_tree_impl<CsLess<long unsigned int>,false> { 
                        struct CsLess<long unsigned int> { } _M_key_compare; 
                        struct _Rb_tree_node_base { 
                            int _M_color; 
                            struct _Rb_tree_node_base {} *_M_parent; 
                            struct _Rb_tree_node_base {} *_M_left; 
                            struct _Rb_tree_node_base {} *_M_right; 
                        } _M_header; 
                        unsigned int _M_node_count; 
                    } _M_impl; 
                } _M_t; 
            } m_map; 
        } x18[8]; struct ChMap<long unsigned int,long unsigned int,CsLess<long unsigned int> > { 
            struct map<long unsigned int,long unsigned int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long unsigned int> > > { 
                struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long unsigned int>,std::_Select1st<std::pair<const long unsigned int, long unsigned int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long unsigned int> > > { 
                    struct _Rb_tree_impl<CsLess<long unsigned int>,false> { 
                        struct CsLess<long unsigned int> { } _M_key_compare; 
                        struct _Rb_tree_node_base { 
                            int _M_color; 
                            struct _Rb_tree_node_base {} *_M_parent; 
                            struct _Rb_tree_node_base {} *_M_left; 
                            struct _Rb_tree_node_base {} *_M_right; 
                        } _M_header; 
                        unsigned int _M_node_count; 
                    } _M_impl; 
                } _M_t; 
            } m_map; 
        } x19[8]; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; int x24; struct WrdText { 
            int (**_vptr$WrdObject)(); 
            struct OcText { 
                int (**_vptr$OcText)(); 
                int m_encoding; 
                unsigned int m_ulStartCP; 
                unsigned int m_ulCharacterCount; 
                unsigned int m_ulBufferSize; 
                char *m_pBuffer; 
                char *m_pTempBuffer; 
                boolm_isMyBuffer; 
            } m_text; 
            int m_textType; 
    struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote*> { 
            struct WrdNote {} **m_vector; 
            struct WrdNote {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote*> { 
            struct WrdNote {} **m_vector; 
            struct WrdNote {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdAnnotationTable { int (**x1)(); struct ChVector<WrdAnnotation*> { 
            struct WrdAnnotation {} **m_vector; 
            struct WrdAnnotation {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdCPTableHeaders { int (**x1)(); struct ChVector<long int> { 
            long *m_vector; 
            long *m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark*> { 
            struct WrdBookmark {} **m_vector; 
            struct WrdBookmark {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark*> { 
            struct WrdBookmark {} **m_vector; 
            struct WrdBookmark {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory*> { 
            struct WrdStory {} **m_vector; 
            struct WrdStory {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory*> { 
            struct WrdStory {} **m_vector; 
            struct WrdStory {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress*> { 
            struct WrdFileShapeAddress {} **m_vector; 
            struct WrdFileShapeAddress {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress*> { 
            struct WrdFileShapeAddress {} **m_vector; 
            struct WrdFileShapeAddress {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { 
            unsigned int m_paragraphStyleIndex : 1; 
            unsigned int m_tableStyleIndex : 1; 
            unsigned int m_paragraphInTable : 1; 
            unsigned int m_tableTrailerParagraph : 1; 
            unsigned int m_listLevel : 1; 
            unsigned int m_indexToList : 1; 
            unsigned int m_justification : 1; 
            unsigned int m_justificationV8 : 1; 
            unsigned int m_shading : 1; 
            unsigned int m_tabStops : 1; 
            unsigned int m_dropCap : 1; 
            unsigned int m_sideBySide : 1; 
            unsigned int m_keepOnOnePage : 1; 
            unsigned int m_keepFollowingParagraph : 1; 
            unsigned int m_pageBreakBefore : 1; 
            unsigned int m_borderLineStyle : 1; 
            unsigned int m_borderCode : 1; 
            unsigned int m_noLineNumbering : 1; 
            unsigned int m_lineSpace : 1; 
            unsigned int m_spaceBefore : 1; 
            unsigned int m_spaceAfter : 1; 
            unsigned int m_horizontalPlacement : 1; 
            unsigned int m_verticalPlacement : 1; 
            unsigned int m_width : 1; 
            unsigned int m_verticalPosition : 1; 
            unsigned int m_horizontalPosition : 1; 
            unsigned int m_wrapCode : 1; 
            unsigned int m_noAutoHyphenate : 1; 
            unsigned int m_absoluteHeight : 1; 
            unsigned int m_minimumHeightCode : 1; 
            unsigned int m_verticalDistanceFromText : 1; 
            unsigned int m_horizontalDistanceFromText : 1; 
            unsigned int m_locked : 1; 
            unsigned int m_widowed : 1; 
            unsigned int m_kinsoku : 1; 
            unsigned int m_wordWrap : 1; 
            unsigned int m_overflowPunctuation : 1; 
            unsigned int m_topLinePunctuationProcessing : 1; 
            unsigned int m_autoSpaceEastAsianAndAlphabeticCharacters : 1; 
            unsigned int m_autoSpaceEastAsianAndNumericCharacters : 1; 
            unsigned int m_fontAlignment : 1; 
            unsigned int m_vertical : 1; 
            unsigned int m_backward : 1; 
            unsigned int m_rotateFont : 1; 
            unsigned int m_outlineLevel : 1; 
            unsigned int m_biDi : 1; 
            unsigned int m_paragraphNumberInserted : 1; 
            unsigned int m_pageSetupLinePitch : 1; 
            unsigned int m_adjustRightMargin : 1; 
            unsigned int m_tableNestingLevel : 1; 
            unsigned int m_innerTableCell : 1; 
            unsigned int m_innerTableTrailerParagraph : 1; 
            unsigned int m_tableCellCharacterNotZeroHeight : 1; 
            unsigned int m_rightIndentCharacterUnits : 1; 
            unsigned int m_leftIndentCharacterUnits : 1; 
            unsigned int m_firstLineIndentCharacterUnits : 1; 
            unsigned int m_lineSpaceBefore : 1; 
            unsigned int m_lineSpaceAfter : 1; 
            unsigned int m_verticalSpacingBeforeAutomatic : 1; 
            unsigned int m_verticalSpacingAfterAutomatic : 1; 
            unsigned int m_trailingIndent : 1; 
            unsigned int m_leadingIndent : 1; 
            unsigned int m_rightIndent : 1; 
            unsigned int m_leftIndent : 1; 
            unsigned int m_firstLineLeadingIndent : 1; 
            unsigned int m_firstLineLeftIndent : 1; 
            unsigned int m_noOverlapAllowed : 1; 
            unsigned int m_borderTop : 1; 
            unsigned int m_borderLeft : 1; 
            unsigned int m_borderBottom : 1; 
            unsigned int m_borderRight : 1; 
            unsigned int m_borderBetween : 1; 
            unsigned int m_borderBar : 1; 
            unsigned int m_autoNumberListDescriptor : 1; 
            unsigned int m_revisionMark : 1; 
            unsigned int m_authorIDForRevision : 1; 
            unsigned int m_dttmRevisionMark : 1; 
            unsigned int m_numberRevisionMarkData : 1; 
            unsigned int m_columnIndex : 1; 
            unsigned int m_tablePart : 1; 
        } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; unsigned short x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; struct ChVector<WrdTabDescriptor*> { 
            struct WrdTabDescriptor {} **m_vector; 
            struct WrdTabDescriptor {} **m_tmpVector; 
            unsigned int m_count; 
            unsigned int m_size; 
            unsigned int m_blockSize; 
    struct vector<WBTextBoxReaderInfo,std::allocator<WBTextBoxReaderInfo> > { struct _Vector_impl { 
            struct WBTextBoxReaderInfo {} *_M_start; 
            struct WBTextBoxReaderInfo {} *_M_finish; 
            struct WBTextBoxReaderInfo {} *_M_end_of_storage; 
        } x3; } *mAnnotationBookmarkTable;
    NSMutableArray *mAnnotationOwners;
    id mAnnotationRangeStart;
        } x2; } *mAnnotationTable;
        } x3; } *mBookmarkTable;
    <OCCancelDelegate> *mCancelDelegate;
        } x3; } *mEndnoteTable;
    struct WrdEshObjectFactory { int (**x1)(); boolx2; } *mEshObjectFactory;
    struct WrdFieldPositionTable {} *mFieldPositionTables[8];
    NSString *mFileName;
        } x3; } *mFileShapeAddressHeaderTable;
        } x3; } *mFileShapeAddressTable;
        } x3; } *mFootnoteTable;
        } x3; } *mHeaderStoryTable;
    SFUNoCopyDictionary *mIndexToFonts;
    SFUNoCopyDictionary *mIndexToStyles;
    BOOL mIsThumbnail;
        } x30; short *x31; short *x32; short *x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; int x45; unsigned int x46; unsigned int x47; short x48; short x49; short x50; short x51; short x52; unsigned short x53; unsigned short x54; unsigned short x55; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned char x86; unsigned char x87; unsigned char x88; unsigned char x89; } *mLastRowParagraphProperties;
    WBOfficeArtReaderState *mOfficeArtState;
    BOOL mReportProgress;
        } x3; } *mStoryTable;
        } x2; } *mTableHeaders;
    WDDocument *mTargetDocument;
        } x1; } *mTextBoxes;
        } x25; struct WrdEmbeddedTrueTypeFont {} *x26; } *mWrdReader;
}

@property(retain,readonly) <OCCancelDelegate> * cancelDelegate;
@property WDDocument * targetDocument;

+ (id)readFromData:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2 tracing:(id)arg3 asThumbnail:(BOOL)arg4;

- (struct WrdEshObjectFactory { int (**x1)(); boolx2; }*)eshObjectFactory;
- (struct WrdBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; struct WrdParser {} *x4; struct WrdEshReader { int (**x_5_1_1)(); struct SsrwOOStream {} *x_5_1_2; struct EshParserVisitor {} *x_5_1_3; struct EshObjectFactory {} *x_5_1_4; unsigned int x_5_1_5; unsigned int x_5_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_5_1_7; unsigned int x_5_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_5_1_9; boolx_5_1_10; } x5; struct WrdRdrText {} *x6; struct WrdBinTable {} *x7; struct WrdPAPXFKP {} *x8; unsigned int x9; struct WrdBinTable {} *x10; struct WrdCHPXFKP {} *x11; unsigned int x12; int x13; struct WrdSectionDescriptorTable {} *x14; struct WrdStyleSheet {} *x15; struct WrdEmbeddedTTFRecordTable {} *x16; struct WrdDocumentFileRecord {} *x17; struct ChMap<long unsigned int,long unsigned int,CsLess<long unsigned int> > { struct map<long unsigned int,long unsigned int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long unsigned int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long unsigned int>,std::_Select1st<std::pair<const long unsigned int, long unsigned int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long unsigned int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_18_1_1; } x18[8]; struct ChMap<long unsigned int,long unsigned int,CsLess<long unsigned int> > { struct map<long unsigned int,long unsigned int,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long unsigned int> > > { struct _Rb_tree<long unsigned int,std::pair<const long unsigned int, long unsigned int>,std::_Select1st<std::pair<const long unsigned int, long unsigned int> >,CsLess<long unsigned int>,std::allocator<std::pair<const long unsigned int, long unsigned int> > > { struct _Rb_tree_impl<CsLess<long unsigned int>,false> { struct CsLess<long unsigned int> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_19_1_1; } x19[8]; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; int x24; struct WrdText { int (**x_25_1_1)(); struct OcText { int (**x_2_2_1)(); int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; char *x_2_2_6; char *x_2_2_7; boolx_2_2_8; } x_25_1_2; int x_25_1_3; } x25; struct WrdEmbeddedTrueTypeFont {} *x26; }*)wrdReader;
- (struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; unsigned int x_3_1_78 : 1; unsigned int x_3_1_79 : 1; unsigned int x_3_1_80 : 1; } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; unsigned short x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; struct ChVector<WrdTabDescriptor*> { struct WrdTabDescriptor {} **x_30_1_1; struct WrdTabDescriptor {} **x_30_1_2; unsigned int x_30_1_3; unsigned int x_30_1_4; unsigned int x_30_1_5; } x30; short *x31; short *x32; short *x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; int x45; unsigned int x46; unsigned int x47; short x48; short x49; short x50; short x51; short x52; unsigned short x53; unsigned short x54; unsigned short x55; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned char x86; unsigned char x87; unsigned char x88; unsigned char x89; }*)lastRowParagraphProperties;
- (struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark*> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)annotationBookmarkTable;
- (struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark*> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)bookmarkTable;
- (struct WrdFieldPositionTable { int (**x1)(); int x2; struct ChVector<WrdFieldPosition*> { struct WrdFieldPosition {} **x_3_1_1; struct WrdFieldPosition {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fieldPositionTableForTextType:(int)arg1;
- (struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress*> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fileShapeAddressHeaderTable;
- (struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress*> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fileShapeAddressTable;
- (struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote*> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)endnoteTable;
- (struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote*> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)footnoteTable;
- (struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory*> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)headerStoryTable;
- (struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory*> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)storyTable;
- (struct WrdAnnotationTable { int (**x1)(); struct ChVector<WrdAnnotation*> { struct WrdAnnotation {} **x_2_1_1; struct WrdAnnotation {} **x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)annotationTable;
- (struct WrdCPTableHeaders { int (**x1)(); struct ChVector<long int> { long *x_2_1_1; long *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)tableHeaders;
- (struct OcReader { int (**x1)(); struct EshObjectFactory {} *x2; }*)ocReader;
- (void)addFont:(id)arg1 index:(int)arg2;
- (void)addStyle:(id)arg1 index:(int)arg2;
- (id)annotationOwner:(int)arg1;
- (id)annotationRangeStart;
- (void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2;
- (id)cancelDelegate;
- (void)dealloc;
- (id)drawableForShapeId:(unsigned int)arg1;
- (id)fileName;
- (id)fontAtIndex:(int)arg1;
- (id)initWithData:(id)arg1 cancel:(id)arg2 tracing:(id)arg3;
- (id)initWithFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 fileName:(id)arg2 cancel:(id)arg3 tracing:(id)arg4;
- (void)initialize;
- (BOOL)isThumbnail;
- (id)officeArtState;
- (id)readCharactersForTextRun:(struct WrdTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)readCharactersFrom:(unsigned long)arg1 to:(unsigned long)arg2 textType:(int)arg3;
- (BOOL)reportProgress;
- (void)setAnnotationRangeStart:(id)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (void)setLastRowParagraphProperties:(struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; unsigned int x_3_1_78 : 1; unsigned int x_3_1_79 : 1; unsigned int x_3_1_80 : 1; } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; unsigned short x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; struct ChVector<WrdTabDescriptor*> { struct WrdTabDescriptor {} **x_30_1_1; struct WrdTabDescriptor {} **x_30_1_2; unsigned int x_30_1_3; unsigned int x_30_1_4; unsigned int x_30_1_5; } x30; short *x31; short *x32; short *x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; int x45; unsigned int x46; unsigned int x47; short x48; short x49; short x50; short x51; short x52; unsigned short x53; unsigned short x54; unsigned short x55; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned char x86; unsigned char x87; unsigned char x88; unsigned char x89; }*)arg1;
- (void)setOfficeArtState:(id)arg1;
- (void)setReportProgress:(BOOL)arg1;
- (void)setTargetDocument:(id)arg1;
- (id)styleAtIndex:(int)arg1;
- (id)targetDocument;
- (unsigned int)textBoxCount;
- (struct WBTextBoxReaderInfo { id x1; unsigned short x2; })textBoxInfoAtIndex:(unsigned int)arg1;

@end
