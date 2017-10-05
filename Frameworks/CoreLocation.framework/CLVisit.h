/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLVisit : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _arrivalDate;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSDate * _departureDate;
    NSDate * _detectionDate;
    double  _horizontalAccuracy;
}

@property (nonatomic, readonly, copy) NSDate *arrivalDate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, readonly, copy) NSDate *departureDate;
@property (nonatomic, readonly, copy) NSDate *detectionDate;
@property (nonatomic, readonly) bool hasArrivalDate;
@property (nonatomic, readonly) bool hasDepartureDate;
@property (nonatomic, readonly) double horizontalAccuracy;

+ (bool)supportsSecureCoding;

- (id)arrivalDate;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)departureDate;
- (id)description;
- (id)detectionDate;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasArrivalDate;
- (bool)hasDepartureDate;
- (double)horizontalAccuracy;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5;

@end
