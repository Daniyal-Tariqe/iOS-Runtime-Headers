/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMPixelPoint, GMMPolygon, GMMEfficientMapPoint, GMMMapPoint, GMMPolyLine;

@interface GMMGeometry : PBCodable {
    GMMEfficientMapPoint *_efficientMapPoint;
    GMMMapPoint *_mapPoint;
    GMMPixelPoint *_pixelPoint;
    GMMPolyLine *_polyLine;
    GMMPolygon *_polygon;
    int _type;
}

@property(readonly) struct { double latitude; double longitude; } coordinate;
@property(retain) GMMEfficientMapPoint * efficientMapPoint;
@property(readonly) BOOL hasCoordinate;
@property(readonly) BOOL hasEfficientMapPoint;
@property(readonly) BOOL hasMapPoint;
@property(readonly) BOOL hasPixelPoint;
@property(readonly) BOOL hasPolyLine;
@property(readonly) BOOL hasPolygon;
@property(readonly) int latitudeE6;
@property(readonly) int longitudeE6;
@property(retain) GMMMapPoint * mapPoint;
@property(retain) GMMPixelPoint * pixelPoint;
@property(retain) GMMPolyLine * polyLine;
@property(retain) GMMPolygon * polygon;
@property int type;

- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)efficientMapPoint;
- (BOOL)hasCoordinate;
- (BOOL)hasEfficientMapPoint;
- (BOOL)hasMapPoint;
- (BOOL)hasPixelPoint;
- (BOOL)hasPolyLine;
- (BOOL)hasPolygon;
- (id)init;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithOldMapPoint:(struct MapPoint { int x1; int x2; int x3; int x4; }*)arg1;
- (int)latitudeE6;
- (int)longitudeE6;
- (id)mapPoint;
- (id)pixelPoint;
- (id)pixelPointGeometry;
- (id)polyLine;
- (id)polygon;
- (BOOL)readFrom:(id)arg1;
- (void)setEfficientMapPoint:(id)arg1;
- (void)setMapPoint:(id)arg1;
- (void)setPixelPoint:(id)arg1;
- (void)setPolyLine:(id)arg1;
- (void)setPolygon:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end
