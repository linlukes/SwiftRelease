//
//  PropertyInformationTableViewController.h
//  SwiftRelease
//
//  Created by beauty on 11/4/15.
//  Copyright © 2015 Beauty. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface PropertyInformationTableViewController : UITableViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UITextFieldDelegate, CLLocationManagerDelegate>
{
    BOOL m_bEnableLocation;
}

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (strong, nonatomic) CLLocation *currentLocation;

@property (strong, nonatomic) NSString *m_strLatitude;
@property (strong, nonatomic) NSString *m_strLongitude;
@property (strong, nonatomic) NSString *m_strStreetAddress;
@property (strong, nonatomic) NSString *m_strCity;
@property (strong, nonatomic) NSString *m_strState;
@property (strong, nonatomic) NSString *m_strCountry;
@property (strong, nonatomic) NSString *m_strPostalCode;

@property (strong, nonatomic) CLGeocoder *geocoder;
@property (strong, nonatomic) CLPlacemark *placemark;

// Outlets of Input Fields..
@property (weak, nonatomic) IBOutlet UIImageView *imgPhoto;
@property (weak, nonatomic) IBOutlet UITextField *txtDescription;

@property (weak, nonatomic) IBOutlet UITextField *txtAddress;
@property (weak, nonatomic) IBOutlet UITextField *txtCity;
@property (weak, nonatomic) IBOutlet UITextField *txtState;
@property (weak, nonatomic) IBOutlet UITextField *txtCountry;
@property (weak, nonatomic) IBOutlet UITextField *txtZipCode;

@property (weak, nonatomic) IBOutlet UIButton *btnCamera;

- (IBAction)onCamera:(id)sender;
- (IBAction)onLocation:(id)sender;
- (IBAction)onDownload:(id)sender;




@end
