#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController

@property (nonatomic, weak) IBOutlet NSButton *autoLoginState;
@property (nonatomic, weak) IBOutlet NSButton *showInMenuBarState;



- (IBAction)showMenuBarChanged:(id)sender;

- (IBAction)whiteButtonClicked:(id)sender;
- (IBAction)redButtonClicked:(id)sender;
- (IBAction)yellowButtonClicked:(id)sender;
- (IBAction)blueButtonClicked:(id)sender;
- (IBAction)greenButtonClicked:(id)sender;
- (IBAction)pinkButtonClicked:(id)sender;


@end

