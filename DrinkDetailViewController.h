#import <UIKit/UIKit.h>

@interface DrinkDetailViewController : UIViewController {
	IBOutlet UITextField *nameTextField;
	IBOutlet UITextView *ingredientsTextView;
	IBOutlet UITextView *directionsTextView;
}

@property (nonatomic,retain) UITextField *nameTextField;
@property (nonatomic,retain) UITextView *ingredientsTextView;
@property (nonatomic,retain) UITextView *directionsTextView;

@end