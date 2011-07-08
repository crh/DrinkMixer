#import "DrinkDetailViewController.h"
#import "DrinkConstants.h"

@implementation DrinkDetailViewController
@synthesize drink, nameTextField, ingredientsTextView, directionsTextView;

- (void) viewWillAppear:(BOOL)animated{
	[super viewWillAppear:animated];
	nameTextField.text=[drink objectForKey:NAME_KEY];
	ingredientsTextView.text=[drink objectForKey:INGREDIENTS_KEY];	
	directionsTextView.text=[drink objectForKey:DIRECTIONS_KEY];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (void)viewDidUnload {
    [super viewDidUnload];
}

- (void)dealloc {
	[drink release];
	[nameTextField release];
	[ingredientsTextView release];
	[directionsTextView release];
	[super dealloc];
}

@end