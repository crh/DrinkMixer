#import <UIKit/UIKit.h>

@interface DrinkDetailViewController : UIViewController {
	NSDictionary *drink;
	IBOutlet UIScrollView* scrollView;
	IBOutlet UITextField *nameTextField;
	IBOutlet UITextView *ingredientsTextView;
	IBOutlet UITextView *directionsTextView;
}

@property (nonatomic,retain) NSDictionary *drink;
@property (nonatomic,retain) UIScrollView* scrollView;
@property (nonatomic,retain) UITextField *nameTextField;
@property (nonatomic,retain) UITextView *ingredientsTextView;
@property (nonatomic,retain) UITextView *directionsTextView;

@end