/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface AccessibilityTextMarker : NSObject {
    struct TextMarkerData { 
        unsigned int axID; 
        struct Node {} *node; 
        int offset; 
        int affinity; 
    } _textMarkerData;
}

+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; int x2; }*)arg1;

- (id)dataRepresentation;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithTextMarker:(struct TextMarkerData { unsigned int x1; struct Node {} *x2; int x3; int x4; }*)arg1;
- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 1; } x1; int x2; })visiblePosition;

@end
