/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, MPMediaQuery, NSMutableDictionary;

@interface MPConcreteMediaItemCollection : MPMediaItemCollection {
    int _grouping;
    long long _identifier;
    MPMediaQuery *_itemsQuery;
    NSMutableDictionary *_properties;
    MPMediaItem *_representativeItem;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(int)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)items;
- (id)itemsQuery;
- (id)mediaLibrary;
- (int)mediaTypes;
- (unsigned long long)persistentID;
- (id)representativeItem;
- (id)valueForProperty:(id)arg1;

@end
